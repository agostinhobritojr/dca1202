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
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::atualizaXY(int x, int y){
    ui->lcdNumberX->display(x);
    ui->lcdNumberY->display(y);
}




