#include "thrdialog.h"
#include "ui_thrdialog.h"
#include<QLabel>
#include<QMessageBox>
#include<QVBoxLayout>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlQueryModel>
#include<QApplication>
#include <iostream>
#include<QIntValidator>
#include<QBoxLayout>
#include<QLineEdit>
#include<QComboBox>
#include<QMessageBox>
#include <QApplication>
#include <QDebug>
#include<QWidget>
#include <employe.h>
#include "mainwindow.h"
#include <mainwindow.h>
#include <QSortFilterProxyModel>
#include <QPrinter>
#include <QPainter>
#include<QSqlRecord>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QDesktopServices>
#include <QTextDocumentWriter>
#include <QtCharts>
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include "smtp.h"
#include <QPrintDialog>


thrDialog::thrDialog(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::thrDialog),
   selectedEmployeeRow(-1), // Initialize selectedEmployeeRow
   E(new employe()),
   proxyModel(new QSortFilterProxyModel(this))



{

   ui->setupUi(this);
   ui->cin_e->setValidator(new QIntValidator(0, 99999999, this));
   ui->id_e->setValidator(new QIntValidator(0, 99999999, this));
   ui->salaire_e->setValidator(new QIntValidator(0, 99999999, this));
   ui->telephone_e->setValidator(new QIntValidator(0, 99999999, this));









   connect(ui->Imprimer, &QPushButton::clicked, this, &thrDialog::on_Imprimer_clicked);



   // Assuming afficher() returns a QSqlQueryModel
   QSqlQueryModel *model = E->afficher();
   proxyModel->setSourceModel(model);

   QStandardItemModel *standardModel = new QStandardItemModel(model->rowCount(), model->columnCount(), this);

   // Set the horizontal header names to match the database column names
   for (int col = 0; col < model->columnCount(); ++col) {
       standardModel->setHorizontalHeaderItem(col, new QStandardItem(model->headerData(col, Qt::Horizontal).toString()));
   }

   // Populate the table with data
   for (int row = 0; row < model->rowCount(); ++row) {
       for (int col = 0; col < model->columnCount(); ++col) {
           QModelIndex index = model->index(row, col);
           QString data = model->data(index).toString();
           QStandardItem *item = new QStandardItem(data);
           standardModel->setItem(row, col, item);
       }
   }

   ui->tab_employes->setModel(standardModel);




   connect(ui->tab_employes->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
           this, SLOT(on_tableViewSelectionChanged(QModelIndex, QModelIndex)));
}

thrDialog::~thrDialog()
{
   delete ui;
   delete E;
}

void thrDialog::on_pb_ajouter_clicked()
{
   QMessageBox msgBox;
   msgBox.setText("Confirmation");
   msgBox.setInformativeText("Are you sure you want to add?");
   msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
   msgBox.setDefaultButton(QMessageBox::Cancel);

   int reply = msgBox.exec();
   if (reply == QMessageBox::Cancel) {
       return;
   }
   int id_e = ui->id_e->text().toInt();
   int cin_e = ui->cin_e->text().toInt();
   QString nom_e = ui->nom_e->text();
   QString poste_e = ui->poste_e->text();
   int telephone_e = ui->telephone_e->text().toInt();
   QString email_e = ui->email_e->text();
   QString datee_e = ui->datee_e->text();
   int salaire_e = ui->salaire_e->text().toInt();
   QString user_e = ui->user_e->text();
   QString pas_e = ui->pas_e->text();

   if (ui->id_e->text().isEmpty() || ui->cin_e->text().isEmpty()
       || ui->nom_e->text().isEmpty() || ui->email_e->text().isEmpty()
       || ui->poste_e->text().isEmpty() || ui->telephone_e->text().isEmpty() || ui->datee_e->text().isEmpty() || ui->salaire_e->text().isEmpty()
       || ui->user_e->text().isEmpty() || ui->pas_e->text().isEmpty()) {
       QMessageBox::warning(this, tr("Champs manquants"),
                            tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
       return;
   }

   QDate date;





   // Character-only Validation
   QRegularExpression characterRegex("^[a-zA-Zéèêëàâäîïôöûüç -]*$");

   if (!characterRegex.match(nom_e).hasMatch() || !characterRegex.match(poste_e).hasMatch()) {
       QMessageBox::warning(this, tr("Caractères invalides"),
                            tr("Veuillez utiliser uniquement des caractères alphabétiques pour le nom, le prénom et l'adresse."), QMessageBox::Ok);
       return;
   }
   employe E(id_e, cin_e, nom_e, poste_e, telephone_e,email_e , datee_e, salaire_e,user_e,pas_e);
   bool test = E.ajouter();
   if (test)
   {
       ui->tab_employes->setModel(E.afficher());

       QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                          QObject::tr("Ajout effectué. \nClick Cancel to exit."), QMessageBox::Cancel, this);

       // Connect the finished signal to a custom slot
       connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

       msgBox.exec();
   }
   else
   {
       QMessageBox msgBox(QMessageBox::Critical, QObject::tr("NOT OK"),
                          QObject::tr("Ajout non effectué. \nClick Cancel to exit."), QMessageBox::Cancel, this);

       // Connect the finished signal to a custom slot
       connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

       msgBox.exec();
   }
}

void thrDialog::on_pb_supprimer_clicked()
{
   QMessageBox msgBox;
   msgBox.setText("Confirmation");
   msgBox.setInformativeText("Are you sure you want to delete?");
   msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
   msgBox.setDefaultButton(QMessageBox::Cancel);

   int reply = msgBox.exec();
   if (reply == QMessageBox::Cancel) {
       return;
   }
   employe E;

   int id_e = ui->id_e->text().toInt();
   E.setid_e(id_e);

   bool exists = E.checkIfemployeExists(id_e);
   if (!exists) {
       QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                             QObject::tr("L'employé n'a pas été trouvé dans la base de données.").arg(id_e),
                             QMessageBox::Cancel);
       return;
   }

   bool test = E.supprimer(id_e);
   if (test)
   {
       QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                          QObject::tr("Suppression effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

       // Connect the finished signal to a custom slot
       connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

       msgBox.exec();

       ui->tab_employes->setModel(E.afficher());

   }
   else
   {
       QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                          QObject::tr("Suppression non effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

       // Connect the finished signal to a custom slot
       connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

       msgBox.exec();
   }
}

void thrDialog::on_pb_modifier_2_clicked()
{
   // Confirm with the user before proceeding with modification
   QMessageBox msgBox;
   msgBox.setText("Confirmation");
   msgBox.setInformativeText("Are you sure you want to modify?");
   msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
   msgBox.setDefaultButton(QMessageBox::Cancel);

   int reply = msgBox.exec();
   if (reply == QMessageBox::Cancel) {
       return;  // Exit the function if the user cancels
   }

   // Check if the employee is selected
   if (selectedEmployeeRow == -1) {
       QMessageBox::warning(this, tr("Aucun employé sélectionné"),
                            tr("Veuillez sélectionner un employé à modifier."), QMessageBox::Ok);
       return;
   }

   // Retrieve data from the UI fields
   int id_e = ui->id_e->text().toInt();
   int cin_e = ui->cin_e->text().toInt();
   QString nom_e = ui->nom_e->text();
   QString poste_e = ui->poste_e->text();
   int telephone_e = ui->telephone_e->text().toInt();
   QString email_e = ui->email_e->text();
   QString datee_e = ui->datee_e->text();
   int salaire_e = ui->salaire_e->text().toInt();
   QString user_e = ui->user_e->text();
   QString pas_e = ui->pas_e->text();

   // Check for missing fields
   if (nom_e.isEmpty() || email_e.isEmpty() || poste_e.isEmpty() || telephone_e == 0 || datee_e.isEmpty() ||
       salaire_e == 0 || user_e.isEmpty() || pas_e.isEmpty()) {
       QMessageBox::warning(this, tr("Champs manquants"),
                            tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
       return;
   }

   // Create the employe object with the data from the form
   employe E(id_e, cin_e, nom_e, poste_e, telephone_e, email_e, datee_e, salaire_e, user_e, pas_e);

   // Modify employee using the correct id_e
   bool test = E.modifierE(id_e);  // Make sure modifierE() method is implemented correctly to update the employee in DB

   if (test) {
       // Update the table with new data
       ui->tab_employes->setModel(E.afficher());

       QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                          QObject::tr("Modification effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

       // Connect the finished signal to a custom slot
       connect(&msgBox, &QMessageBox::finished, this, &thrDialog::handleMessageBoxResult);

       msgBox.exec();
   } else {
       // Handle the case where modification fails
       QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                          QObject::tr("Employe non trouvé ou modification non effectuée\nClick Cancel to exit."), QMessageBox::Cancel, this);

       // Connect the finished signal to a custom slot
       connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

       msgBox.exec();
   }
}
void thrDialog::handleMessageBoxResult(int result)
{
   if (result == QMessageBox::Cancel)
   {
       // User clicked Cancel, do something if needed
   }
}
void thrDialog::handleMessageBoxResult2()
{
   // Your slot implementation here
}

void thrDialog::on_tableViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous)
{
   Q_UNUSED(previous);


   selectedEmployeeRow = current.row();


    ui->id_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 0).data().toString());
   ui->cin_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 1).data().toString());
   ui->nom_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 2).data().toString());
   ui->poste_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 3).data().toString());
   ui->telephone_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 4).data().toString());
   ui->email_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 5).data().toString());
   ui->datee_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 6).data().toString());
   ui->salaire_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 7).data().toString());
   ui->user_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 8).data().toString());
   ui->pas_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 9).data().toString());



}

void thrDialog::on_logoutpb_clicked()
{

}










void thrDialog::on_radioButton_clicked()
{
   QString idFilter = ui->lineEdit->text().trimmed(); // Get the filter text for id_e

   // Get the original model (query result)
   QSqlQueryModel *originalModel = E->afficher();
   int numRows = originalModel->rowCount();
   int numCols = originalModel->columnCount();

   // Create a new standard item model to hold filtered data
   QStandardItemModel *filteredModel = new QStandardItemModel(this);

   // Set the horizontal header labels
   QStringList headerLabels;
   for (int col = 0; col < numCols; ++col) {
       headerLabels << originalModel->headerData(col, Qt::Horizontal).toString();
   }
   filteredModel->setHorizontalHeaderLabels(headerLabels);

   // Iterate over the rows of the original model to filter data
   for (int row = 0; row < numRows; ++row) {
       QModelIndex index = originalModel->index(row, 0); // Column 0 for 'id_e'
       QString data = originalModel->data(index).toString();
       if (data.contains(idFilter, Qt::CaseInsensitive)) { // Case-insensitive filter
           QList<QStandardItem *> items;
           for (int col = 0; col < numCols; ++col) {
               items.append(new QStandardItem(originalModel->data(originalModel->index(row, col)).toString()));
           }
           filteredModel->appendRow(items);
       }
   }

   // Set the filtered model to the table view
   ui->tab_employes->setModel(filteredModel);
}
void thrDialog::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
   QString idFilter = ui->lineEdit->text().trimmed(); // Get the filter text for id_e

   // Get the original model
   QSqlQueryModel *originalModel = E->afficher();
   int numRows = originalModel->rowCount();
   int numCols = originalModel->columnCount();

   // Create a new standard item model to hold filtered data
   QStandardItemModel *filteredModel = new QStandardItemModel(this);

   // Set the horizontal header labels
   QStringList headerLabels;
   for (int col = 0; col < numCols; ++col) {
       headerLabels << originalModel->headerData(col, Qt::Horizontal).toString();
   }
   filteredModel->setHorizontalHeaderLabels(headerLabels);

   // Iterate over the rows of the original model to filter data
   for (int row = 0; row < numRows; ++row) {
       QModelIndex index = originalModel->index(row, 0); // Column 0 for 'id_e'
       QString data = originalModel->data(index).toString();
       if (data.contains(idFilter, Qt::CaseInsensitive)) { // Case-insensitive filter
           QList<QStandardItem *> items;
           for (int col = 0; col < numCols; ++col) {
               items.append(new QStandardItem(originalModel->data(originalModel->index(row, col)).toString()));
           }
           filteredModel->appendRow(items);
       }
   }

   // Set the filtered model to the table view
   ui->tab_employes->setModel(filteredModel);
}
void thrDialog::on_sortAscButton_clicked()
{
   QSqlQueryModel *sortedModel = E->sortByDateAsc();
   ui->tab_employes->setModel(sortedModel);
}

void thrDialog::on_sortDescButton_clicked()
{
   QSqlQueryModel *sortedModel = E->sortByDateDesc();
   ui->tab_employes->setModel(sortedModel);
}




void thrDialog::on_pb_pdf_clicked()
{
   QPrinter printer(QPrinter::PrinterResolution);
   printer.setOutputFormat(QPrinter::PdfFormat);
   QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");
   if (fileName.isEmpty()) {
       return; // Exit if the user cancels the file dialog
   }
   printer.setOutputFileName(fileName);

   // Create a painter
   QPainter painter;
   if (!painter.begin(&printer)) {
       QMessageBox::warning(this, "Warning", "Failed to open PDF file for writing.");
       return;
   }

   // Get the model from the table view
   QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tab_employes->model());
   if (!model) {
       QMessageBox::warning(this, "Warning", "Failed to retrieve table model.");
       return;
   }

   // Set up font and metrics
   QFont font = painter.font();
   font.setPointSize(10); // Adjust as needed
   painter.setFont(font);
   QFontMetrics fontMetrics(font);

   // Define some margins
   const int margin = 20;
   int yPosition = margin; // Start drawing content from the top

   // Draw table header
   int columnCount = model->columnCount();
   int rowHeight = fontMetrics.height() + 5;
   int tableWidth = printer.pageRect().width() - 2 * margin;

   // Draw header cells with lines
   int columnWidth = tableWidth / columnCount; // Adjust column width dynamically
   for (int column = 0; column < columnCount; ++column) {
       // Draw header text
       painter.drawText(margin + column * columnWidth, yPosition, model->headerData(column, Qt::Horizontal).toString());

       // Draw vertical line to separate columns (after the header)
       painter.drawLine(margin + (column + 1) * columnWidth, yPosition - rowHeight, margin + (column + 1) * columnWidth, yPosition + rowHeight);
   }

   yPosition += rowHeight; // Move down after header

   // Draw horizontal line under the header
   painter.drawLine(margin, yPosition, printer.pageRect().width() - margin, yPosition);

   // Draw table rows with lines
   int rowCount = model->rowCount();
   for (int row = 0; row < rowCount; ++row) {
       for (int column = 0; column < columnCount; ++column) {
           QString text = model->data(model->index(row, column)).toString();
           // Draw cell text
           painter.drawText(margin + column * columnWidth, yPosition, text);

           // Draw vertical line to separate columns (after the cell)
           painter.drawLine(margin + (column + 1) * columnWidth, yPosition - rowHeight, margin + (column + 1) * columnWidth, yPosition + rowHeight);
       }

       yPosition += rowHeight; // Move down after each row

       // Draw horizontal line after each row to separate them
       painter.drawLine(margin, yPosition, printer.pageRect().width() - margin, yPosition);

       // Handle page break if content exceeds page height
       if (yPosition > printer.pageRect().bottom()) {
           printer.newPage(); // Create a new page
           yPosition = margin; // Reset y position for the new page
       }
   }

   // Finish painting
   painter.end();

   // Show success message
   QMessageBox::information(this, "PDF Created", "PDF file has been successfully created.");
}


void thrDialog::Stat_emp2(){
   // Debug statement to check if the function is being called
   qDebug() << "Stat_emp2 function called.";

   // Clear the existing layout
   QLayout *layout = ui->lab_chart_bar->layout();
   if (layout) {
       QLayoutItem *item;
       while ((item = layout->takeAt(0)) != nullptr) {
           delete item->widget();
           delete item;
       }
   }

   // Create the chart
   QChart *chart = new QChart();
   chart->setTitle("Répartition par expérience de travail");

   // Create the Pie Series
   QPieSeries *series = new QPieSeries();
   series->setHoleSize(0.35);

   // Get current year
   int currentYear = QDate::currentDate().year();

   // Fetch the datee_e from the database for each employee
   QSqlQuery query;
   query.prepare("SELECT datee_e FROM employe"); // Assuming datee_e is the field that stores the employment year
   query.exec();

   // Initialize counters for each category
   int experience1Year = 0;
   int experience2Years = 0;
   int experience3Years = 0;
   int experience5PlusYears = 0;

   // Process each employee's data
   while (query.next()) {
       QString datee_e = query.value("datee_e").toString(); // Get the employment year (assuming it's stored as YYYY)
       int employmentYear = datee_e.left(4).toInt(); // Extract the year from the date (YYYY)

       // Calculate experience
       int experience = currentYear - employmentYear;

       // Categorize based on experience
       if (experience <= 1) {
           experience1Year++;
       } else if (experience <= 3) {
           experience2Years++;
       } else if (experience <= 5) {
           experience3Years++;
       } else {
           experience5PlusYears++;
       }
   }

   // Add categorized data to the Pie chart
   if (experience1Year > 0) {
       series->append("1 Year", experience1Year);
   }
   if (experience2Years > 0) {
       series->append("2 Years", experience2Years);
   }
   if (experience3Years > 0) {
       series->append("3 Years", experience3Years);
   }
   if (experience5PlusYears > 0) {
       series->append("5+ Years", experience5PlusYears);
   }

   // Add series to the chart
   chart->addSeries(series);

   // Create the chart view
   QChartView *chartView = new QChartView(chart);
   chartView->setRenderHint(QPainter::Antialiasing);

   // Add the chart view to the existing layout
   layout = new QVBoxLayout(ui->lab_chart_bar);
   layout->addWidget(chartView);
   ui->lab_chart_bar->setLayout(layout);

   // Optional: Resize the chart view to match the size of the widget
   chartView->resize(ui->lab_chart_bar->size());

   // Debug statement to check if the chart is added to the layout
   qDebug() << "Chart added to layout.";

}

void thrDialog::on_refrech_pb_clicked()
{
   // Clear the line edits
   ui->cin_e->clear();
   ui->nom_e->clear();
   ui->poste_e->clear();
   ui->telephone_e->clear();
    ui->email_e->clear();
   ui->datee_e->clear();
   ui->salaire_e->clear();
   ui->user_e->clear();
   ui->pas_e->clear();

   // Reset selectedEmployeeRow to -1
   selectedEmployeeRow = -1;

   // Optionally, re-enable the signal-slot connection for handling selection changes
   connect(ui->tab_employes->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
           this, SLOT(on_tableViewSelectionChanged(QModelIndex, QModelIndex)));
}

void thrDialog::on_pushButton_clicked()
{
   // Create a new dialog to display the charts
   QDialog *dialog = new QDialog(this);
   QVBoxLayout *layout = new QVBoxLayout(dialog);




   // Call Stat_emp2() to display the second statistic
   Stat_emp2();


   layout->addWidget(ui->lab_chart_bar);


   dialog->setWindowTitle("Employee Statistics");
   dialog->resize(800, 600); // Adjust size as needed

   // Show the dialog
   dialog->exec();
}

void thrDialog::on_statrole_clicked()
{

}



void thrDialog::on_Imprimer_clicked() {
   // Retrieve the data from tab_employe
   QAbstractItemModel *model = ui->tab_employes->model();
   if (!model)
       return;

   // Prepare the data for printing
   QString printData;
   int rows = model->rowCount();
   int columns = model->columnCount();
   for (int row = 0; row < rows; ++row) {
       for (int col = 0; col < columns; ++col) {
           QModelIndex index = model->index(row, col);
           QVariant data = model->data(index);
           printData.append(data.toString());
           printData.append("\t"); // Add tab as separator
       }
       printData.append("\n"); // Add newline after each row
   }


   QPrinter printer;
   QPrintDialog dialog(&printer, this);
   if (dialog.exec() == QDialog::Accepted) {
       QPainter painter(&printer);
       painter.drawText(100, 100, printData); // Adjust position as needed
   }
}





