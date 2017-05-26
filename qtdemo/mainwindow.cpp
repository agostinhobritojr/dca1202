#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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

















