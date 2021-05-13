#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->layout()->SetMinimumSize(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Enter_clicked()
{
//    if(ui->nameEdit->text() == "Kostya" && ui->passwordEdit->text() == "1234") {
//        QMessageBox::information(this, "Success", "Вы вошли в Аккаунт!");
//        ui->login->deleteLater();
//    } else {
//        QMessageBox::information(this, "Error", "Неверный логин или пароль");
//    }
}

void MainWindow::on_SignUp_clicked()
{
    Registration w;
    w.setModal(true);
    w.exec();
}

void MainWindow::on_LogIn_clicked()
{
    LogIn o;
    o.setModal(true);
    o.exec();
}
