#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow){
  ui->setupUi(this);

  // conecta um sinal com um slot
  connect(ui->pushButton,
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
  close();
}


