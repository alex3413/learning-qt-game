#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignUp_clicked()
{
    Registration registrationWidget;
    registrationWidget.setModal(true);
    registrationWidget.exec();
}

void MainWindow::on_LogIn_clicked()
{
    LogIn loginwidget;
    loginwidget.setModal(true);
    loginwidget.exec();
}
