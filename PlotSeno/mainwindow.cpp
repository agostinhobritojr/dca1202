#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->labelAmp,
          SLOT(setNum(int)));

  connect(ui->horizontalSliderVel,
          SIGNAL(valueChanged(int)),
          ui->labelVel,
          SLOT(setNum(int)));

  connect(ui->horizontalSliderPer,
          SIGNAL(valueChanged(int)),
          ui->labelPer,
          SLOT(setNum(int)));

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widgetSeno,
          SLOT(mudaAmplitude(int)));

  connect(ui->widgetSeno,
          SIGNAL(mudaxy(int,int)),
          this,
          SLOT(recebePosicao(int, int)));

  connect(ui->actionQuit,
          SIGNAL(triggered()),
          this,
          SLOT(finaliza()));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::recebePosicao(int x, int y)
{
  ui->lcdNumberX->display(x);
  ui->lcdNumberY->display(y);
}

void MainWindow::finaliza(){
  exit(1);
}








