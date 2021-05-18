#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(UserAccount *account, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp),
    account(account)
{
    ui->setupUi(this);
    connect(ui->backMenu, &QPushButton::clicked, [&]{
        close();
    });
    connect(ui->regB, &QPushButton::clicked, [&]{
        account = new UserAccount(ui->nameText->text(), ui->passwordText->text(), ui->mailText->text());
        done(1);
        close();
    });
}

SignUp::~SignUp()
{
    delete ui;
}
