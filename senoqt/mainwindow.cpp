#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow){
  ui->setupUi(this);

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widget,
          SLOT(mudaAmplitude(int)));

  connect(ui->horizontalSliderFreq,
          SIGNAL(valueChanged(int)),
          ui->widget,
          SLOT(mudaFrequencia(int)));

  connect(ui->horizontalSliderVel,
          SIGNAL(valueChanged(int)),
          ui->widget,
          SLOT(mudaVelocidade(int)));

  connect(ui->widget,
          SIGNAL(mudaX(int)),
          ui->lcdNumberX,
          SLOT(display(int)));

  connect(ui->widget,
          SIGNAL(mudaY(int)),
          ui->lcdNumberY,
          SLOT(display(int)));

  connect(ui->actionMudaCor,
          SIGNAL(triggered()),
          this,
          SLOT(mudaCor()));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::mudaCor(){
  Dialog d;
  QMessageBox box;
  QString s;
  if (d.exec() == QDialog::Accepted){
    qDebug() << d.getR() << d.getG() << d.getB();

    s = QString("<b>R = </b>") +
        QString().setNum(d.getR()) + QString("<br>")+
        QString("<b>G = </b>") +
        QString().setNum(d.getG()) + QString("<br>")+
        QString("<b>B = </b>") +
        QString().setNum(d.getB()) + QString("<br>");

    box.setText(s);
    box.exec();
    ui->widget->setColor(d.getR(), d.getG(),
                         d.getB());
  }
}












