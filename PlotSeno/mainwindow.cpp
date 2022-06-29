#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widgetSeno,
          SLOT(mudaAmplitude(int)));
}

MainWindow::~MainWindow()
{
  delete ui;
}

