#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"
#include <QRegularExpression>
#include <QDebug>


Registration::Registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}


Registration::~Registration()
{
    delete ui;
}

void Registration::on_regB_clicked()
{

    QString login = ui->nameEdit_3->text();
    QString password = ui->passwordEdit_7->text();
    QString passwordConfirm = ui->passwordSEdit->text();
    QString email = ui->mailEdit->text();

     QregistrationService.confirmregistration(&player, passwordConfirm);
    QRegularExpression nameRegexp("^[A-Za-z]{1}+([A-Za-z0-9-]{1,18})+([A-Za-z0-9]{1})$");
    QRegularExpression passwordRegexp("(?=.*[0-9])(?=.*[!@#$%^&*])(?=.*[a-z])(?=.*[A-Z])[0-9a-zA-Z!@#$%^&*]{6,}");
    QRegularExpression emailRegexp("(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|\"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*\")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\\.){3}(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\\])");

    Registration registrationForm;
    registrationForm.setModal(true);

    if(nameRegexp.match(login).hasMatch() &&
            passwordRegexp.match(password).hasMatch()
//            emailRegexp.match(email).hasMatch())
            )
    {
        if(password == passwordConfirm)
        {
            name = ui->nameEdit_3->text();
            gameMenu k;
            k.setName(&login);
            k.setModal(true);
            k.exec();
        } else {

            QMessageBox::warning(this, "Error!", "Пароли не совпадают");
            registrationForm.exec();
        }

    } else {
        qDebug()<<"match login- "<<nameRegexp.match(login).hasMatch();
        qDebug()<<"match pass- "<<passwordRegexp.match(password).hasMatch();
        qDebug()<<"match email- "<<emailRegexp.match(email).hasMatch();
         QMessageBox::warning(this, "Error!", "Недопустимые параметры!!!");
         registrationForm.exec();
    }
}

void Registration::on_logTB_clicked()
{
    LogIn lp;
    lp.setModal(true);
    lp.exec();
}
