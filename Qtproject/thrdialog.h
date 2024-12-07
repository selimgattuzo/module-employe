#ifndef THRDIALOG_H
#define THRDIALOG_H
#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "employe.h"
#include "mainwindow.h"



class QStandardItemModel;
class MainWindow;
class QSortFilterProxyModel;
class SecDialog;
class Pageabonnements;
namespace Ui {
class thrDialog;
}

class thrDialog : public QDialog
{
    Q_OBJECT

public:
    explicit thrDialog(QWidget *parent = nullptr);
    ~thrDialog();
    QSqlQueryModel *sortBySalaireAsc();
    QSqlQueryModel *sortBySalaireDesc();
private slots:
    void on_pb_supprimer_clicked();

    void on_pb_modifier_2_clicked();

    void on_pb_ajouter_clicked();


    void handleMessageBoxResult(int result);

    void on_logoutpb_clicked();


    void on_tableViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous);


    void on_radioButton_clicked();


    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_sortAscButton_clicked();
        void on_sortDescButton_clicked();









        void on_pb_pdf_clicked();



void Stat_emp2();

void on_refrech_pb_clicked();

void on_pushButton_clicked();

void on_statrole_clicked();

void on_Imprimer_clicked();
void handleMessageBoxResult2();





private:
    Ui::thrDialog *ui;
    MainWindow * Mainw;

     SecDialog *secDialog;
    employe *E;
      int selectedEmployeeRow;
         QSortFilterProxyModel *proxyModel;
         bool showLabel;

};



#endif // THRDIALOG_H

