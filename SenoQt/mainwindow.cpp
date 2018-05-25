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
}

MainWindow::~MainWindow()
{
  delete ui;
}
