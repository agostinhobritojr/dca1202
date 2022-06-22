#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  connect(ui->horizontalSlider,
          SIGNAL(valueChanged(int)),
          ui->lcdNumber,
          SLOT(display(int)));
}

MainWindow::~MainWindow()
{
  delete ui;
}

