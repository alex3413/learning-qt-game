#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include "mainwindow.h"
#include <QMessageBox>
#include "gamemenu.h"

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();




private slots:


    void on_regB_clicked();

    void on_logTB_clicked();

private:
    Ui::Registration *ui;
    QString name;
};

#endif // REGISTRATION_H
