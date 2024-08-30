#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_File_triggered()
{
myDialog dlg;
dlg.setModal(true);
dlg.exec();
}

void MainWindow::on_actionOpen_File_triggered()
{

}

void MainWindow::on_actionSave_As_triggered()
{

}
