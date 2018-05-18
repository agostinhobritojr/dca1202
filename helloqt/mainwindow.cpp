#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->pushButtonQuit,
          SIGNAL(clicked(bool)),
          this,
          SLOT(finaliza()));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  exit(0);
}
