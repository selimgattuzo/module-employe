#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QSerialPort>  // Importer la classe QSerialPort pour la gestion du port série
#include "thrdialog.h"

QT_BEGIN_NAMESPACE
class SecDialog;
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class thrDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonlog_clicked();
    void on_verify_pb_clicked();
    void on_cont_pb_clicked();
    void on_forgot_pb_clicked();
    void on_sendBtn_clicked();
    void on_rfidDataReceived();  // Slot pour recevoir les données du RFID

private:
    Ui::MainWindow *ui;
    thrDialog *Thrdialog;
    QStringList files;
    QMessageBox *messageBox;
    QString currentRFIDData;  // Variable temporaire pour stocker l'ID en cours de réception


    // RFID Serial Port
    QSerialPort *rfidSerialPort;  // Déclarer l'objet pour gérer le port série

    void sendMail(const QString &verificationCode);
    void mailSent(QString status, const QString &verificationCode);
    QString sentVerificationCode;

    void setupRFID();  // Fonction pour configurer le port série RFID

    // Ajouter la déclaration de la fonction generateVerificationCode ici
    QString generateVerificationCode();  // Déclaration de la fonction
};

#endif // MAINWINDOW_H
