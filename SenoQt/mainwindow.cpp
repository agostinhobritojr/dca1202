#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogcolor.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->horizontalSliderAmplitude,
          SIGNAL(valueChanged(int)),
          ui->plotter,
          SLOT(mudaAmplitude(int)));
  connect(ui->horizontalSliderFrequencia,
          SIGNAL(valueChanged(int)),
          ui->plotter,
          SLOT(mudaFrequencia(int)));
  connect(ui->horizontalSliderVelocidade,
          SIGNAL(valueChanged(int)),
          ui->plotter,
          SLOT(mudaVelocidade(int)));
  connect(ui->actionCorFundo,
          SIGNAL(triggered(bool)),
          this,
          SLOT(selecionaCor()));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::selecionaCor()
{
  DialogColor d;
  d.exec();
  qDebug() << d.getR();
  qDebug() << d.getG();
  qDebug() << d.getB();
}









