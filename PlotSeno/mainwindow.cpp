#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
#include <QFileDialog>
#include <cstdlib>
#include "dialog.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->labelAmp,
          SLOT(setNum(int)));

  connect(ui->horizontalSliderVel,
          SIGNAL(valueChanged(int)),
          ui->labelVel,
          SLOT(setNum(int)));

  connect(ui->horizontalSliderPer,
          SIGNAL(valueChanged(int)),
          ui->labelPer,
          SLOT(setNum(int)));

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widgetSeno,
          SLOT(mudaAmplitude(int)));

  connect(ui->widgetSeno,
          SIGNAL(mudaxy(int,int)),
          this,
          SLOT(recebePosicao(int,int)));

  connect(ui->actionQuit,
          SIGNAL(triggered()),
          this,
          SLOT(finaliza()));

  connect(ui->actionSave,
          SIGNAL(triggered()),
          this,
          SLOT(salvaArquivo()));

  connect(ui->actionNovoDesenho,
          SIGNAL(triggered()),
          this,
          SLOT(novoDesenho()));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::recebePosicao(int x, int y)
{
  ui->lcdNumberX->display(x);
  ui->lcdNumberY->display(y);
}

void MainWindow::finaliza(){
  exit(1);
}

void MainWindow::salvaArquivo(){
  QFileDialog dialog;
  QString selectedFilter;
  QString filename =
      dialog.getSaveFileName(this,tr("Salvar"),
                             QDir::currentPath(),
                             tr("Arquivo OFF(*.off);;Arquivo OFF2(*.off2)"),
                             &selectedFilter);
  if(filename.isNull()){
    return;
  }
  if(selectedFilter == "Arquivo OFF(*.off)"){
    // grava o arquivo
    // escultor->writeOFF(filename.toStdString());
  }
}

void MainWindow::novoDesenho()
{
  Dialog d;
  QMessageBox box;
  QString s;
  if( d.exec() == QDialog::Accepted){
    s = QString("Valor = <b>")+
        QString().setNum(d.getValor())
        +QString("</b>");
  }
  else{
    s = QString("Cancelou!");
  }
  box.setText(s);
  box.exec();
  // qDebug() << d.getValor();
}








