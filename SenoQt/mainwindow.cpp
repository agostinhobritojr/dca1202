#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
  delete ui;
}
