#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix("/home/machinemaker/Downloads/mpt.jpg");
        ui -> label_pic ->setPixmap(pix);
}

Dialog::~Dialog()
{
    delete ui;
}
