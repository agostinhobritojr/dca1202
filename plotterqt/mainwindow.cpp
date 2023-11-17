#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include "dialogcor.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui = new Ui::MainWindow;
    ui->setupUi(this);

    connect(ui->horizontalSliderAmp,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaFrequencia(int)));

    connect(ui->horizontalSliderVel,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaVelocidade(int)));

    connect(ui->widgetPlotter,
            SIGNAL(mudaXY(int,int)),
            this,
            SLOT(atualizaXY(int,int)));

    connect(ui->actionMudaCor,
            SIGNAL(triggered()),
            this,
            SLOT(mudaCorPlot()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::atualizaXY(int x, int y){
    ui->lcdNumberX->display(x);
    ui->lcdNumberY->display(y);
}

void MainWindow::mudaCorPlot(){
    DialogCor dialog;
    if(dialog.exec() == QDialog::Accepted){
        qDebug() << dialog.getR() << dialog.getG() <<
            dialog.getB();
        ui->widgetPlotter->mudaCorPlot(dialog.getR(),
                                       dialog.getG(),
                                       dialog.getB());
    }
}




