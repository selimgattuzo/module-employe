/********************************************************************************
** Form generated from reading UI file 'thrdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THRDIALOG_H
#define UI_THRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thrDialog
{
public:
    QPushButton *logoutpb;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QPushButton *pb_ajouter;
    QLineEdit *cin_e;
    QLabel *label;
    QLineEdit *nom_e;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *poste_e;
    QLabel *label_9;
    QLineEdit *salaire_e;
    QLabel *label_5;
    QLineEdit *datee_e;
    QTableView *tab_employes;
    QLabel *label_21;
    QLineEdit *telephone_e;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QRadioButton *radioButton;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;
    QLineEdit *user_e;
    QLabel *label_14;
    QLineEdit *pas_e;
    QPushButton *pb_pdf;
    QPushButton *refrech_pb;
    QPushButton *pushButton;
    QLabel *label_20;
    QLabel *lab_chart_pie;
    QLabel *lab_chart_bar;
    QPushButton *Imprimer;
    QLabel *label_15;
    QLineEdit *id_e;
    QLineEdit *email_e;
    QLabel *label_4;
    QPushButton *backpb;
    QLabel *label_10;

    void setupUi(QDialog *thrDialog)
    {
        if (thrDialog->objectName().isEmpty())
            thrDialog->setObjectName(QStringLiteral("thrDialog"));
        thrDialog->resize(1517, 978);
        logoutpb = new QPushButton(thrDialog);
        logoutpb->setObjectName(QStringLiteral("logoutpb"));
        logoutpb->setGeometry(QRect(960, 40, 181, 81));
        logoutpb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/4400629.png);"));
        tabWidget = new QTabWidget(thrDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 150, 1531, 921));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-40, 0, 1641, 891));
        groupBox->setStyleSheet(QLatin1String("\n"
"/* Style for QGroupBox */\n"
"QRadioButton{ color: white; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"\n"
"/* Style for QLineEdit (input box) */\n"
"QLineEdit {\n"
"    background-color: #3498db; /* Blue color for input boxes */\n"
"    border: 1px solid #2980b9; /* Border color for input boxes */\n"
"    border-radius: 5px; /* Border radius for input boxes */\n"
"    padding: 5px; /* Padding for input boxes */\n"
"    color: black; /* Text color inside input boxes */\n"
"}\n"
"\n"
"/* Style for QLabel (text label) */\n"
"QLabel {\n"
"    color: white; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"\n"
"/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db;"
                        " /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Border color for buttons */\n"
"    border-radius: 5px; /* Border radius for buttons */\n"
"    padding: 5px 10px; /* Adjust padding as needed */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"/* Additional styling for better appearance */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #21618c; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"/* Add more styles as needed for your specific application */\n"
""));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(450, 620, 141, 51));
        pb_ajouter->setStyleSheet(QStringLiteral(""));
        cin_e = new QLineEdit(groupBox);
        cin_e->setObjectName(QStringLiteral("cin_e"));
        cin_e->setGeometry(QRect(640, 276, 281, 30));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(476, 312, 58, 30));
        label->setStyleSheet(QStringLiteral(""));
        nom_e = new QLineEdit(groupBox);
        nom_e->setObjectName(QStringLiteral("nom_e"));
        nom_e->setGeometry(QRect(640, 312, 281, 30));
        nom_e->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(476, 276, 46, 30));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(476, 348, 65, 30));
        label_3->setStyleSheet(QStringLiteral(""));
        poste_e = new QLineEdit(groupBox);
        poste_e->setObjectName(QStringLiteral("poste_e"));
        poste_e->setGeometry(QRect(640, 348, 281, 30));
        poste_e->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(476, 492, 76, 30));
        label_9->setStyleSheet(QStringLiteral(""));
        salaire_e = new QLineEdit(groupBox);
        salaire_e->setObjectName(QStringLiteral("salaire_e"));
        salaire_e->setGeometry(QRect(640, 492, 281, 30));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(476, 420, 158, 30));
        datee_e = new QLineEdit(groupBox);
        datee_e->setObjectName(QStringLiteral("datee_e"));
        datee_e->setGeometry(QRect(640, 420, 281, 30));
        tab_employes = new QTableView(groupBox);
        tab_employes->setObjectName(QStringLiteral("tab_employes"));
        tab_employes->setGeometry(QRect(990, 180, 531, 591));
        tab_employes->setStyleSheet(QStringLiteral(""));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(476, 384, 104, 30));
        telephone_e = new QLineEdit(groupBox);
        telephone_e->setObjectName(QStringLiteral("telephone_e"));
        telephone_e->setGeometry(QRect(640, 384, 281, 30));
        pb_modifier_2 = new QPushButton(groupBox);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(630, 620, 151, 51));
        pb_supprimer = new QPushButton(groupBox);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(810, 630, 151, 51));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(1210, 150, 97, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1050, 140, 121, 31));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1310, 150, 211, 22));
        sortAscButton = new QPushButton(groupBox);
        sortAscButton->setObjectName(QStringLiteral("sortAscButton"));
        sortAscButton->setGeometry(QRect(770, 150, 151, 41));
        sortDescButton = new QPushButton(groupBox);
        sortDescButton->setObjectName(QStringLiteral("sortDescButton"));
        sortDescButton->setGeometry(QRect(590, 150, 141, 41));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(710, 100, 101, 31));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 0, 1201, 801));
        label_12->setStyleSheet(QStringLiteral("border-image: url(:/img/img/sports-nautiques.jpg);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(-250, -10, 1791, 921));
        label_11->setStyleSheet(QStringLiteral("border-image: url(:/img/img/61803.jpg);"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(476, 528, 102, 30));
        user_e = new QLineEdit(groupBox);
        user_e->setObjectName(QStringLiteral("user_e"));
        user_e->setGeometry(QRect(640, 528, 281, 30));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(476, 564, 98, 30));
        pas_e = new QLineEdit(groupBox);
        pas_e->setObjectName(QStringLiteral("pas_e"));
        pas_e->setGeometry(QRect(640, 564, 281, 30));
        pb_pdf = new QPushButton(groupBox);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(790, 20, 81, 21));
        refrech_pb = new QPushButton(groupBox);
        refrech_pb->setObjectName(QStringLiteral("refrech_pb"));
        refrech_pb->setGeometry(QRect(1250, 30, 211, 61));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 331, 81));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(160, 100, 111, 41));
        lab_chart_pie = new QLabel(groupBox);
        lab_chart_pie->setObjectName(QStringLiteral("lab_chart_pie"));
        lab_chart_pie->setGeometry(QRect(660, 140, 541, 600));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI Semibold"));
        font.setBold(true);
        font.setWeight(75);
        lab_chart_pie->setFont(font);
        lab_chart_bar = new QLabel(groupBox);
        lab_chart_bar->setObjectName(QStringLiteral("lab_chart_bar"));
        lab_chart_bar->setGeometry(QRect(940, 200, 541, 701));
        lab_chart_bar->setFont(font);
        Imprimer = new QPushButton(groupBox);
        Imprimer->setObjectName(QStringLiteral("Imprimer"));
        Imprimer->setGeometry(QRect(930, 20, 81, 21));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(476, 240, 35, 30));
        id_e = new QLineEdit(groupBox);
        id_e->setObjectName(QStringLiteral("id_e"));
        id_e->setGeometry(QRect(640, 240, 281, 31));
        email_e = new QLineEdit(groupBox);
        email_e->setObjectName(QStringLiteral("email_e"));
        email_e->setGeometry(QRect(640, 456, 281, 30));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(476, 456, 64, 30));
        label_12->raise();
        label_11->raise();
        lab_chart_pie->raise();
        lab_chart_bar->raise();
        label->raise();
        nom_e->raise();
        label_2->raise();
        label_3->raise();
        poste_e->raise();
        label_9->raise();
        salaire_e->raise();
        pb_ajouter->raise();
        cin_e->raise();
        label_5->raise();
        datee_e->raise();
        tab_employes->raise();
        label_21->raise();
        telephone_e->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        radioButton->raise();
        label_7->raise();
        lineEdit->raise();
        label_8->raise();
        label_13->raise();
        user_e->raise();
        label_14->raise();
        pas_e->raise();
        pb_pdf->raise();
        refrech_pb->raise();
        pushButton->raise();
        label_20->raise();
        Imprimer->raise();
        label_15->raise();
        id_e->raise();
        email_e->raise();
        label_4->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        tabWidget->addTab(tab, QString());
        backpb = new QPushButton(thrDialog);
        backpb->setObjectName(QStringLiteral("backpb"));
        backpb->setGeometry(QRect(60, -20, 301, 191));
        backpb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/LOG-removebg-preview.png);"));
        label_10 = new QLabel(thrDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(-10, -10, 1611, 911));
        label_10->setStyleSheet(QStringLiteral("background-image: url(:/img/img/61803.jpg);"));
        label_10->raise();
        logoutpb->raise();
        tabWidget->raise();
        backpb->raise();

        retranslateUi(thrDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(thrDialog);
    } // setupUi

    void retranslateUi(QDialog *thrDialog)
    {
        thrDialog->setWindowTitle(QApplication::translate("thrDialog", "Dialog", Q_NULLPTR));
        logoutpb->setText(QString());
        groupBox->setTitle(QString());
        pb_ajouter->setText(QApplication::translate("thrDialog", "Save", Q_NULLPTR));
        cin_e->setPlaceholderText(QApplication::translate("thrDialog", "Numbers only", Q_NULLPTR));
        label->setText(QApplication::translate("thrDialog", "Nom", Q_NULLPTR));
        nom_e->setPlaceholderText(QApplication::translate("thrDialog", "Characters only", Q_NULLPTR));
        label_2->setText(QApplication::translate("thrDialog", "Cin", Q_NULLPTR));
        label_3->setText(QApplication::translate("thrDialog", "poste", Q_NULLPTR));
        poste_e->setPlaceholderText(QApplication::translate("thrDialog", "Characters only", Q_NULLPTR));
        label_9->setText(QApplication::translate("thrDialog", "Salaire", Q_NULLPTR));
        salaire_e->setPlaceholderText(QApplication::translate("thrDialog", "Number only", Q_NULLPTR));
        label_5->setText(QApplication::translate("thrDialog", "date d'embauche", Q_NULLPTR));
        datee_e->setPlaceholderText(QApplication::translate("thrDialog", "YYYY-MM-DD", Q_NULLPTR));
        label_21->setText(QApplication::translate("thrDialog", "Telephone", Q_NULLPTR));
        telephone_e->setPlaceholderText(QApplication::translate("thrDialog", "+216", Q_NULLPTR));
        pb_modifier_2->setText(QApplication::translate("thrDialog", "Modifier", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("thrDialog", "Supprimer", Q_NULLPTR));
        radioButton->setText(QApplication::translate("thrDialog", "ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("thrDialog", "Recherche", Q_NULLPTR));
        sortAscButton->setText(QApplication::translate("thrDialog", "ASC", Q_NULLPTR));
        sortDescButton->setText(QApplication::translate("thrDialog", "DESC", Q_NULLPTR));
        label_8->setText(QApplication::translate("thrDialog", "Trier", Q_NULLPTR));
        label_12->setText(QString());
        label_11->setText(QString());
        label_13->setText(QApplication::translate("thrDialog", "Username", Q_NULLPTR));
        user_e->setPlaceholderText(QString());
        label_14->setText(QApplication::translate("thrDialog", "Password", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("thrDialog", "PDF", Q_NULLPTR));
        refrech_pb->setText(QApplication::translate("thrDialog", "Refrech", Q_NULLPTR));
        pushButton->setText(QApplication::translate("thrDialog", "R\303\251partition par exp\303\251rience de travail", Q_NULLPTR));
        label_20->setText(QApplication::translate("thrDialog", "Stats", Q_NULLPTR));
        lab_chart_pie->setText(QString());
        lab_chart_bar->setText(QString());
        Imprimer->setText(QApplication::translate("thrDialog", "Imprimer", Q_NULLPTR));
        label_15->setText(QApplication::translate("thrDialog", "id", Q_NULLPTR));
        label_4->setText(QApplication::translate("thrDialog", "email", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("thrDialog", "Gestion des employe", Q_NULLPTR));
        backpb->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class thrDialog: public Ui_thrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THRDIALOG_H
