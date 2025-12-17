#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    counter = 0;
    updateDisplay();

    ui->lineEdit->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    updateDisplay();
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    updateDisplay();
}


void MainWindow::updateDisplay()
{
    const QString s = QString::number(counter);
    ui->lineEdit->setText(s);
    ui->label->setText(QStringLiteral("Painiketta painettu %1 kertaa").arg(s));
}


