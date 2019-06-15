#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString idnumber = ui -> lineEdit ->text();
    if(idnumber== "123456"){

        Dielog =new Dialog(this);
        Dielog->show();
    }else {
 QMessageBox::warning(this,"PRINT","Try Again or contact security administrator");
}
}
