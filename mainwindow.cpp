#include "mainwindow.h"

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
    SaveDialog dlg;
    dlg.setModal(true);
    dlg.exec();
}

void MainWindow::on_actionSave_triggered()
{
    SaveDialog dlg;
    dlg.setModal(true);
    dlg.exec();
}
