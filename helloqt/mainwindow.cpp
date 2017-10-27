#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "meudialogo.h"
#include <QMessageBox>
#include <QString>

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

  connect(ui->widgetPlotter,
          SIGNAL(mudouXY(int,int)),
          this,
          SLOT(trataXY(int,int)));
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
  QMessageBox box;
  QString msg, s;
  int r, g, b;
  //r =
  if(d.exec() == QDialog::Accepted){
    r = d.getR();
    g = d.getG();
    b = d.getB();
    //    s = QString().setNum(r);
    s = QString::number(r);
    msg =
        "<B>R =</b> "+QString::number(r)+"<br>"+
        "<B>G =</b> "+QString::number(g)+"<br>"+
        "<B>B =</b> "+QString::number(b)+"<br>";
    box.setText(msg);
    box.exec();
  }
  else{
    msg = "Clicou cancel";
    box.setText(msg);
    box.exec();
  }
}

void MainWindow::trataXY(int x, int y)
{
  ui->lcdNumberX->display(x);
  ui->lcdNumberY->display(y);
}





