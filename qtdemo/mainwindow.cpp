#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  connect(ui->pushButtonQuit,
          SIGNAL(clicked(bool)),
          this,
          SLOT(close()));


}

MainWindow::~MainWindow()
{
  delete ui;
}
