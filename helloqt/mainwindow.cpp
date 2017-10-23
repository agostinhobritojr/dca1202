#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "meudialogo.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow){
  ui->setupUi(this);

  connect(ui->pushButtonOk, // botao ok
          SIGNAL(clicked(bool)),
          this, // objeto janela (mainwindow)
          SLOT(mataTudo()));

  connect(ui->pushButtonCopia,
          SIGNAL(clicked(bool)),
          SLOT(copiaTexto()));

  connect(ui->horizontalSliderVeloc,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaVelocidade(int)));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::mataTudo()
{
  exit(0);
}

void MainWindow::copiaTexto()
{
  ui->plainTextEditDir->setPlainText(
        ui->plainTextEditEsq->toPlainText());
}

void MainWindow::abreDialogo()
{
  MeuDialogo d;
  d.exec();
}





