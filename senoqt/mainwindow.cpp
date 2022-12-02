#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow){
  ui->setupUi(this);

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widget,
          SLOT(mudaAmplitude(int)));

  connect(ui->horizontalSliderFreq,
          SIGNAL(valueChanged(int)),
          ui->widget,
          SLOT(mudaFrequencia(int)));

  connect(ui->horizontalSliderVel,
          SIGNAL(valueChanged(int)),
          ui->widget,
          SLOT(mudaVelocidade(int)));

  connect(ui->widget,
          SIGNAL(mudaX(int)),
          ui->lcdNumberX,
          SLOT(display(int)));

  connect(ui->widget,
          SIGNAL(mudaY(int)),
          ui->lcdNumberY,
          SLOT(display(int)));
}

MainWindow::~MainWindow()
{
  delete ui;
}

