/********************************************************************************
** Form generated from reading UI file 'captcha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTCHA_H
#define UI_CAPTCHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_captcha
{
public:
    QLineEdit *answer;
    QLabel *label;
    QLineEdit *recaptcha;
    QPushButton *pushButton;
    QLabel *label_33;

    void setupUi(QDialog *captcha)
    {
        if (captcha->objectName().isEmpty())
            captcha->setObjectName(QStringLiteral("captcha"));
        captcha->resize(1391, 811);
        captcha->setStyleSheet(QLatin1String("\n"
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
        answer = new QLineEdit(captcha);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(600, 360, 231, 31));
        label = new QLabel(captcha);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 100, 591, 441));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/35 (3).jpg")));
        label->setScaledContents(true);
        recaptcha = new QLineEdit(captcha);
        recaptcha->setObjectName(QStringLiteral("recaptcha"));
        recaptcha->setGeometry(QRect(490, 160, 471, 151));
        pushButton = new QPushButton(captcha);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 420, 131, 41));
        label_33 = new QLabel(captcha);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(-10, -30, 1601, 911));
        label_33->setStyleSheet(QStringLiteral("border-image: url(:/img/img/try1.png);"));
        label_33->raise();
        answer->raise();
        label->raise();
        recaptcha->raise();
        pushButton->raise();

        retranslateUi(captcha);

        QMetaObject::connectSlotsByName(captcha);
    } // setupUi

    void retranslateUi(QDialog *captcha)
    {
        captcha->setWindowTitle(QApplication::translate("captcha", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("captcha", "done", Q_NULLPTR));
        label_33->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class captcha: public Ui_captcha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTCHA_H
