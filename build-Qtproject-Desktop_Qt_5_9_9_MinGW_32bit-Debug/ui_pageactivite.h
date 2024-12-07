/********************************************************************************
** Form generated from reading UI file 'pageactivite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEACTIVITE_H
#define UI_PAGEACTIVITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pageactivite
{
public:
    QPushButton *abonnement3pb;
    QPushButton *planning3pb;
    QPushButton *client3pb;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tab_activite;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *id_a;
    QLineEdit *nom_a;
    QLineEdit *description_a;
    QLineEdit *equipements_a;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QLabel *label_8;
    QLineEdit *cin_e;
    QLineEdit *lineEdit;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QPushButton *pb_pdf;
    QPushButton *pb_word;
    QPushButton *Imprimer;
    QPushButton *stat;
    QPushButton *refrech_pb;
    QLabel *label_9;
    QPushButton *QR;
    QLabel *QRCODE_3;
    QComboBox *duree_a;
    QComboBox *nbm_a;
    QLabel *lab_chart;
    QPushButton *Stat_duree;
    QLabel *lab_chart2;
    QLabel *label_32;
    QWidget *tab_2;
    QLabel *label_33;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_2;
    QPushButton *logoutpb3;
    QPushButton *back3pb;
    QPushButton *pushButton_14;
    QPushButton *employe3pb;
    QLabel *label_7;

    void setupUi(QDialog *Pageactivite)
    {
        if (Pageactivite->objectName().isEmpty())
            Pageactivite->setObjectName(QStringLiteral("Pageactivite"));
        Pageactivite->resize(1704, 912);
        abonnement3pb = new QPushButton(Pageactivite);
        abonnement3pb->setObjectName(QStringLiteral("abonnement3pb"));
        abonnement3pb->setGeometry(QRect(30, 320, 61, 41));
        abonnement3pb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/416322058_1151869056186867_7815397858715591504_n.png);"));
        planning3pb = new QPushButton(Pageactivite);
        planning3pb->setObjectName(QStringLiteral("planning3pb"));
        planning3pb->setGeometry(QRect(30, 380, 61, 41));
        planning3pb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/416368571_906095227681180_9098143267016132972_n.png);"));
        client3pb = new QPushButton(Pageactivite);
        client3pb->setObjectName(QStringLiteral("client3pb"));
        client3pb->setGeometry(QRect(30, 170, 61, 51));
        client3pb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/415287996_755433109383168_7582230033290630906_n.png);"));
        tabWidget = new QTabWidget(Pageactivite);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(180, 20, 1541, 891));
        tabWidget->setStyleSheet(QLatin1String("\n"
"/* Style for QGroupBox */\n"
"\n"
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
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Border color for buttons */\n"
"    border-radius: 5px; /* Border radius for buttons */\n"
"    padding: 5px 10px; /* Adjust padding as needed */\n"
"    color: whit"
                        "e; /* Text color on buttons */\n"
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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_activite = new QTableWidget(tab);
        tab_activite->setObjectName(QStringLiteral("tab_activite"));
        tab_activite->setGeometry(QRect(428, 100, 501, 371));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 81, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 81, 31));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 190, 131, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 230, 91, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 280, 61, 21));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 310, 171, 41));
        id_a = new QLineEdit(tab);
        id_a->setObjectName(QStringLiteral("id_a"));
        id_a->setGeometry(QRect(110, 100, 311, 31));
        nom_a = new QLineEdit(tab);
        nom_a->setObjectName(QStringLiteral("nom_a"));
        nom_a->setGeometry(QRect(110, 139, 311, 31));
        description_a = new QLineEdit(tab);
        description_a->setObjectName(QStringLiteral("description_a"));
        description_a->setGeometry(QRect(110, 189, 311, 31));
        equipements_a = new QLineEdit(tab);
        equipements_a->setObjectName(QStringLiteral("equipements_a"));
        equipements_a->setGeometry(QRect(110, 319, 311, 31));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(50, 570, 121, 41));
        pb_modifier_2 = new QPushButton(tab);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(220, 570, 131, 41));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(390, 570, 111, 41));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 380, 121, 31));
        cin_e = new QLineEdit(tab);
        cin_e->setObjectName(QStringLiteral("cin_e"));
        cin_e->setGeometry(QRect(120, 380, 291, 31));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(580, 20, 341, 21));
        sortAscButton = new QPushButton(tab);
        sortAscButton->setObjectName(QStringLiteral("sortAscButton"));
        sortAscButton->setGeometry(QRect(428, 80, 261, 28));
        sortDescButton = new QPushButton(tab);
        sortDescButton->setObjectName(QStringLiteral("sortDescButton"));
        sortDescButton->setGeometry(QRect(680, 80, 251, 28));
        pb_pdf = new QPushButton(tab);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(960, 150, 93, 28));
        pb_word = new QPushButton(tab);
        pb_word->setObjectName(QStringLiteral("pb_word"));
        pb_word->setGeometry(QRect(960, 220, 93, 28));
        Imprimer = new QPushButton(tab);
        Imprimer->setObjectName(QStringLiteral("Imprimer"));
        Imprimer->setGeometry(QRect(960, 290, 93, 28));
        stat = new QPushButton(tab);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(550, 580, 221, 31));
        refrech_pb = new QPushButton(tab);
        refrech_pb->setObjectName(QStringLiteral("refrech_pb"));
        refrech_pb->setGeometry(QRect(960, 70, 93, 28));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(450, 10, 101, 31));
        QR = new QPushButton(tab);
        QR->setObjectName(QStringLiteral("QR"));
        QR->setGeometry(QRect(1150, 740, 291, 61));
        QRCODE_3 = new QLabel(tab);
        QRCODE_3->setObjectName(QStringLiteral("QRCODE_3"));
        QRCODE_3->setGeometry(QRect(1080, 90, 801, 601));
        duree_a = new QComboBox(tab);
        duree_a->setObjectName(QStringLiteral("duree_a"));
        duree_a->setGeometry(QRect(120, 240, 301, 22));
        nbm_a = new QComboBox(tab);
        nbm_a->setObjectName(QStringLiteral("nbm_a"));
        nbm_a->setGeometry(QRect(120, 280, 301, 22));
        lab_chart = new QLabel(tab);
        lab_chart->setObjectName(QStringLiteral("lab_chart"));
        lab_chart->setGeometry(QRect(310, 100, 631, 441));
        Stat_duree = new QPushButton(tab);
        Stat_duree->setObjectName(QStringLiteral("Stat_duree"));
        Stat_duree->setGeometry(QRect(790, 580, 201, 28));
        lab_chart2 = new QLabel(tab);
        lab_chart2->setObjectName(QStringLiteral("lab_chart2"));
        lab_chart2->setGeometry(QRect(230, 100, 721, 431));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(-10, -20, 1731, 911));
        label_32->setStyleSheet(QStringLiteral("border-image: url(:/img/img/try1.png);"));
        tabWidget->addTab(tab, QString());
        label_32->raise();
        lab_chart2->raise();
        lab_chart->raise();
        tab_activite->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        id_a->raise();
        nom_a->raise();
        description_a->raise();
        equipements_a->raise();
        pb_ajouter->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        label_8->raise();
        cin_e->raise();
        lineEdit->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        pb_pdf->raise();
        pb_word->raise();
        Imprimer->raise();
        stat->raise();
        refrech_pb->raise();
        label_9->raise();
        QR->raise();
        QRCODE_3->raise();
        duree_a->raise();
        nbm_a->raise();
        Stat_duree->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(0, 0, 1731, 911));
        label_33->setStyleSheet(QStringLiteral("border-image: url(:/img/img/try1.png);"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 1511, 861));
        groupBox_5->setStyleSheet(QLatin1String("\n"
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
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 290, 461, 161));
        pushButton_2->setStyleSheet(QLatin1String("font: 36pt ;\n"
"font: 25 36pt \"Roboto Condensed Light\";"));
        tabWidget->addTab(tab_2, QString());
        logoutpb3 = new QPushButton(Pageactivite);
        logoutpb3->setObjectName(QStringLiteral("logoutpb3"));
        logoutpb3->setGeometry(QRect(20, 640, 121, 71));
        logoutpb3->setStyleSheet(QStringLiteral("border-image: url(:/img/img/logout.png);"));
        back3pb = new QPushButton(Pageactivite);
        back3pb->setObjectName(QStringLiteral("back3pb"));
        back3pb->setGeometry(QRect(-30, -10, 201, 181));
        back3pb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/gearr.png);"));
        pushButton_14 = new QPushButton(Pageactivite);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(20, 470, 81, 51));
        pushButton_14->setStyleSheet(QStringLiteral("border-image: url(:/img/img/415366346_1746257945859861_8686726138527086848_n.png);"));
        employe3pb = new QPushButton(Pageactivite);
        employe3pb->setObjectName(QStringLiteral("employe3pb"));
        employe3pb->setGeometry(QRect(30, 250, 71, 41));
        employe3pb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/415260602_915404969798523_5173262210140723394_n.png);"));
        label_7 = new QLabel(Pageactivite);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-380, 20, 561, 931));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/img/img/Sidebar2.png);"));
        label_7->raise();
        abonnement3pb->raise();
        planning3pb->raise();
        client3pb->raise();
        tabWidget->raise();
        logoutpb3->raise();
        back3pb->raise();
        pushButton_14->raise();
        employe3pb->raise();

        retranslateUi(Pageactivite);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pageactivite);
    } // setupUi

    void retranslateUi(QDialog *Pageactivite)
    {
        Pageactivite->setWindowTitle(QApplication::translate("Pageactivite", "Dialog", Q_NULLPTR));
        abonnement3pb->setText(QString());
        planning3pb->setText(QString());
        client3pb->setText(QString());
        label->setText(QApplication::translate("Pageactivite", "Id", Q_NULLPTR));
        label_2->setText(QApplication::translate("Pageactivite", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("Pageactivite", "Description", Q_NULLPTR));
        label_4->setText(QApplication::translate("Pageactivite", "Duree", Q_NULLPTR));
        label_5->setText(QApplication::translate("Pageactivite", "Nbm", Q_NULLPTR));
        label_6->setText(QApplication::translate("Pageactivite", "Equipement", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("Pageactivite", "Ajouter", Q_NULLPTR));
        pb_modifier_2->setText(QApplication::translate("Pageactivite", "Modifer", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("Pageactivite", "Supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("Pageactivite", "CIN Employe", Q_NULLPTR));
        sortAscButton->setText(QApplication::translate("Pageactivite", "ASC", Q_NULLPTR));
        sortDescButton->setText(QApplication::translate("Pageactivite", "DESC", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("Pageactivite", "PDF", Q_NULLPTR));
        pb_word->setText(QApplication::translate("Pageactivite", "WORD", Q_NULLPTR));
        Imprimer->setText(QApplication::translate("Pageactivite", "IMPRIMER", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        stat->setWhatsThis(QApplication::translate("Pageactivite", "<html><head/><body><p>Stat nombre max <br/>de participant</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        stat->setText(QApplication::translate("Pageactivite", "Stat nb max de participant", Q_NULLPTR));
        refrech_pb->setText(QApplication::translate("Pageactivite", "Refrech", Q_NULLPTR));
        label_9->setText(QApplication::translate("Pageactivite", "Recherche", Q_NULLPTR));
        QR->setText(QApplication::translate("Pageactivite", "Generate QR code", Q_NULLPTR));
        QRCODE_3->setText(QString());
        duree_a->clear();
        duree_a->insertItems(0, QStringList()
         << QApplication::translate("Pageactivite", "30min", Q_NULLPTR)
         << QApplication::translate("Pageactivite", "45min", Q_NULLPTR)
         << QApplication::translate("Pageactivite", "60min", Q_NULLPTR)
         << QApplication::translate("Pageactivite", "90min", Q_NULLPTR)
        );
        nbm_a->clear();
        nbm_a->insertItems(0, QStringList()
         << QApplication::translate("Pageactivite", "1", Q_NULLPTR)
         << QApplication::translate("Pageactivite", "5", Q_NULLPTR)
         << QApplication::translate("Pageactivite", "10", Q_NULLPTR)
         << QApplication::translate("Pageactivite", "15", Q_NULLPTR)
        );
        lab_chart->setText(QString());
        Stat_duree->setText(QApplication::translate("Pageactivite", "Stat duree", Q_NULLPTR));
        lab_chart2->setText(QString());
        label_32->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Pageactivite", "Gestion de activite", Q_NULLPTR));
        label_33->setText(QString());
        groupBox_5->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("Pageactivite", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_2->setWhatsThis(QApplication::translate("Pageactivite", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_2->setText(QApplication::translate("Pageactivite", "Start Camera", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Pageactivite", "Page", Q_NULLPTR));
        logoutpb3->setText(QString());
        back3pb->setText(QString());
        pushButton_14->setText(QString());
        employe3pb->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pageactivite: public Ui_Pageactivite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEACTIVITE_H
