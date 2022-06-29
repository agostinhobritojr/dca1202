#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
  delete ui;
}

