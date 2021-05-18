#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"

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
    if(login == "" || ui->passwordEdit_7->text() == "" || ui->mailEdit->text() == "" || ui->passwordSEdit->text() == "") {
        QMessageBox::warning(this, "Error!", "все строчки регистрации должны быть заполнены!!!");
        Registration w;
        w.setModal(true);
        w.exec();
    } else if(ui->nameEdit_3->text().length() < 8 || ui->passwordEdit_7->text().length() < 8) {
        QMessageBox::warning(this, "Error!", "Длина логина и пароля не может быть меньше 8!!!");
        Registration w;
        w.setModal(true);
        w.exec();
    } else if(ui->passwordEdit_7->text() != ui->passwordSEdit->text()) {
        QMessageBox::warning(this, "Error!", "Пароли не совпадают");
        Registration w;
        w.setModal(true);
        w.exec();
    } else {
        name = ui->nameEdit_3->text();
        gameMenu k;
        k.setModal(true);
        k.exec();
    }
}

void Registration::on_logTB_clicked()
{
    LogIn lp;
    lp.setModal(true);
    lp.exec();
}
