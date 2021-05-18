#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->LogIn, &QPushButton::clicked, [&]{
        SignIn signInWindow;
        signInWindow.exec();
    });
    connect(ui->SignUp, &QPushButton::clicked, [&]{
        SignUp signUpWindow(account);
        if(signUpWindow.exec()){
            menu.show();
            close();
        }
    });
    connect(ui->exitButton, &QPushButton::clicked, [&]{
        close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

