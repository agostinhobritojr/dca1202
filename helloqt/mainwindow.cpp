#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include "dialogcolor.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
//  ui = new Ui::MainWindow;
  ui->setupUi(this);

  // Quando o botao eh pressionado
  // a MainWindow finaliza
  connect(ui->pushButton,
          SIGNAL(clicked(bool)),
          this,
          SLOT(finaliza()));

  // Quando o botao copiar for
  // pressionado, copiatexto eh
  // executado
//  connect(ui->pushButtonCopiar,
  //        SIGNAL(clicked(bool)),
    //      this,
//          SLOT(copiaTexto()));

  connect(ui->actionAloVoce,
          SIGNAL(triggered(bool)),
          this,
          SLOT(mostraAloVoce()));

  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaAmplitude(int)));

  connect(ui->horizontalSliderFreq,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaFrequencia(int)));

  connect(ui->horizontalSliderVel,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaVelocidade(int)));

  connect(ui->pushButtonTemp,
          SIGNAL(clicked(bool)),
          ui->widgetPlotter,
          SLOT(anima()));

  connect(ui->widgetPlotter,
          SIGNAL(clickX(int)),
          ui->lcdNumberXclick,
          SLOT(display(int)));

  connect(ui->widgetPlotter,
          SIGNAL(clickY(int)),
          ui->lcdNumberYclick,
          SLOT(display(int)));

  connect(ui->widgetPlotter,
          SIGNAL(moveX(int)),
          ui->lcdNumberXmove,
          SLOT(display(int)));

  connect(ui->widgetPlotter,
          SIGNAL(moveY(int)),
          ui->lcdNumberYmove,
          SLOT(display(int)));

  connect(ui->actionCorFundo,
          SIGNAL(triggered(bool)),
          this,
          SLOT(mudaCorDeFundo()));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  exit(0);
}

void MainWindow::copiaTexto(){
  QString s, sbold;
  QMessageBox box;
  s = ui->plainTextEditOrigem->toPlainText();

  sbold = "<b>"+s+"</b>";
  sbold += "<br>";
  sbold += "<i>"+s+"</i>";
  sbold += "<br>";
  sbold += "<u>"+s+"</u>";

  qDebug() << sbold;
  box.setText(sbold);
  box.exec();
  ui->textBrowserDestino->setText(sbold);
}

void MainWindow::mostraAloVoce(){
  QMessageBox box;
  box.setText("Alo, Você!");
  box.exec();
}

void MainWindow::mudaCorDeFundo()
{
  /*
  DialogColor d;

  if(d.exec() == QDialog::Accepted){
    ui->widgetPlotter->setCorFundo(d.getR(),
                                   d.getG(),
                                   d.getB());
  }
  */
  QColorDialog d;
  d.exec();
  ui->widgetPlotter->setCorFundo(d.selectedColor().red(),
                                 d.selectedColor().green(),
                                 d.selectedColor().blue());
}





