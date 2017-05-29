#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>

#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

/*  connect(ui->pushButtonQuit,
          SIGNAL(clicked(bool)),
          this,
          SLOT(close()));
*/
  connect(ui->actionQuit,
          SIGNAL(triggered(bool)),
          this,
          SLOT(mataTudo()));

 /* connect(ui->pushButtonOk,
          SIGNAL(clicked(bool)),
          this,
          SLOT(copiaTexto()));*/

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(setAmplitude(int)));

  connect(ui->horizontalSliderOmega,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(setOmega(int)));

  connect(ui->horizontalSliderVeloc,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(setVelocidade(int)));

  // conecta a acao de preferencias
  connect(ui->actionPreferencias,
          SIGNAL(triggered(bool)),
          this,
          SLOT(definePreferencias()));

  connect(ui->widgetPlotter,
          SIGNAL(posicao(int,int)),
          this,
          SLOT(leposicao(int,int)));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::copiaTexto(){
  QString texto;
/*  texto = ui->lineEditTexto->text();
  ui->textBrowserTexto->setPlainText(texto);
  */
}

void MainWindow::mataTudo(){
  close();
}

void MainWindow::definePreferencias(){
  QMessageBox box;
  QString str;
  Dialog d;
  d.exec();
  int r, g, b;
  r = d.getR();
  g = d.getG();
  b = d.getB();

  str = "<b>R = </b>" + QString().setNum(r)+"<br>"+
      "G = " + QString().setNum(g)+"<br>"+
      "B = " + QString().setNum(b);
/*  box.setText(str);
  box.exec();
*/
  QColorDialog colordialog;
  colordialog.exec();

  r = colordialog.selectedColor().red();
  g = colordialog.selectedColor().green();
  b = colordialog.selectedColor().blue();
  ui->widgetPlotter->setFundo(r,g,b);

  //  qDebug() << "alo!";
}

void MainWindow::leposicao(int x, int y)
{
  ui->lcdNumberX->display(x);
  ui->lcdNumberY->display(y);
}

















