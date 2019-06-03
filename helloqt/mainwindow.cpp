#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "dialogrgb.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow){
  ui->setupUi(this);

  // conecta um sinal com um slot
  connect(ui->pushButton,
          SIGNAL(clicked(bool)),
          this,
          SLOT(finaliza()));

  connect(ui->pushButtonCopia,
          SIGNAL(clicked(bool)),
          this,
          SLOT(copia()));

  /* connect(ui->actionFinaliza,
          SIGNAL(triggered(bool)),
          this,
          SLOT(finaliza()));
*/
  connect(ui->horizontalSliderAmp,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaAmplitude(int)));

  /* connect(ui->horizontalSliderFreq,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaFrequencia(int)));
          */

  connect(ui->horizontalSliderVel,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(mudaVelocidade(int)));

  connect(ui->widgetPlotter,
          SIGNAL(clickX(int)),
          ui->lcdNumberClickX,
          SLOT(display(int)));

  connect(ui->widgetPlotter,
          SIGNAL(clickY(int)),
          ui->lcdNumberClickY,
          SLOT(display(int)));

  connect(ui->actionSeleciona_Cor,
          SIGNAL(triggered(bool)),
          this,
          SLOT(selecionaCor()));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::copia()
{
  QString s;
  // le o string presente no plaintextedit
  s = ui->plainTextEdit->toPlainText();
  // atribui ao textedit o string lido
  s = "<u>" + s + "</u>";
  ui->textEdit->setText(s);
}

void MainWindow::finaliza()
{
  close();
}

void MainWindow::selecionaCor()
{
  QMessageBox box;
  QString msg;
  DialogRgb dialog;

  if(dialog.exec() == QDialog::Accepted){
    msg = "r = <b>"+QString::number(dialog.getR())+
        "</b> <br>"+
        "g = <b>"+QString::number(dialog.getG())+
        "</b> <br>"+
        "b = <b>"+QString::number(dialog.getB())+
        "</b>";
    box.setText(msg);
    box.exec();
  }
}







