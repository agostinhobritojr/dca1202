#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogcolor.h"
#include <QDebug>
#include <QColorDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->horizontalSliderAmplitude,
          SIGNAL(valueChanged(int)),
          ui->plotter,
          SLOT(mudaAmplitude(int)));
  connect(ui->horizontalSliderFrequencia,
          SIGNAL(valueChanged(int)),
          ui->plotter,
          SLOT(mudaFrequencia(int)));
  connect(ui->horizontalSliderVelocidade,
          SIGNAL(valueChanged(int)),
          ui->plotter,
          SLOT(mudaVelocidade(int)));
  connect(ui->actionCorFundo,
          SIGNAL(triggered(bool)),
          this,
          SLOT(selecionaCor()));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::selecionaCor()
{
  DialogColor d;
  QColor color;
  QColorDialog cd;
  QString str;
  QMessageBox box;
//  cd.exec();
  color = cd.getColor();

  str = QString::number(color.red())+
      ","+
      QString::number(color.green())+
      ","+
      QString::number(color.blue());

  ui->plotter->setRGB(color.red(),
                      color.green(),
                      color.blue());

  // qDebug() << str;
  box.setText(str);
  box.exec();
  // abre dialogo modal
  /*
  if(d.exec() == QDialog::Accepted){
    qDebug() << d.getR();
    qDebug() << d.getG();
    qDebug() << d.getB();
    ui->plotter->setRGB(d.getR(),
                        d.getG(),
                        d.getB());
  }
  else{
    qDebug() << "deu ruim!";
  }
  */
}









