#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    connect(ui->backMenuLog, &QPushButton::clicked, [&]{
        close();
    });
}

SignIn::~SignIn()
{
    delete ui;
}
