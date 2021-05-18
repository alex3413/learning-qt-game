#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);

}

LogIn::~LogIn()
{
    delete ui;
}



void LogIn::on_Ent_clicked()
{
    if(ui->logEdit->text() == "" || ui->pasEdit->text() == "") {
        QMessageBox::warning(this, "Error!", "все строчки регистрации должны быть заполнены!!!");
        LogIn i;
        i.setModal(true);
        i.exec();
    } else {
        gameMenu k;
        k.setModal(true);
        k.exec();
    }
}

void LogIn::on_reg_clicked()
{
    Registration l;
    l.setModal(true);
    l.exec();
}
