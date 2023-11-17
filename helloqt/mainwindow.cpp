#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui = new Ui::MainWindow;
    ui->setupUi(this);
    connect(ui->pushButtonQuit,
            SIGNAL(clicked()),
            this,
            SLOT(close()));

    connect(ui->horizontalSliderValor,
            SIGNAL(valueChanged(int)),
            ui->lcdNumberValor,
            SLOT(display(int)));

    connect(ui->pushButtonOk,
            SIGNAL(clicked()),
            this,
            SLOT(mostraMensagem()));

    connect(ui->pushButtonAlo,
            SIGNAL(clicked()),
            SLOT(copiaTexto()));

    connect(ui->horizontalSliderValor,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaAmplitude(int)));

    connect(ui->actionMostra,
            SIGNAL(triggered()),
            this,
            SLOT(mostraMensagem()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mostraMensagem(){
    QMessageBox box;
    box.setText(QString("Alo, Maria!"));
    box.exec();
}

void MainWindow::copiaTexto(){
    ui->labelAlo->setText(
    ui->lineEditAlo->text());
}





