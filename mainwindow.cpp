#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <string>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_goBtn_clicked()
{
    QString ss = ui->userInput->text();
    ui->displayLbl->setText(ss);
}
