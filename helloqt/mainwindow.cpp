#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonQuit,
            SIGNAL(clicked(bool)),
            this,
            SLOT(finaliza()));

    connect(ui->horizontalSliderAmp,
            SIGNAL(valueChanged(int)),
            ui->widgetPlot,
            SLOT(mudaAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widgetPlot,
            SLOT(mudaFrequencia(int)));

    connect(ui->horizontalSliderVel,
            SIGNAL(valueChanged(int)),
            ui->widgetPlot,
            SLOT(mudaVelocidade(int)));

    ui->horizontalSliderAmp->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finaliza()
{
    exit(0);
}
