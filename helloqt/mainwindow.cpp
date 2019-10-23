#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSlider>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->horizontalSliderTeste,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberTeste,
          SLOT(display(int)));
  connect(ui->pushButtonMorreu,
          SIGNAL(clicked()),
          this,
          SLOT(finaliza()));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  close();
}
