#include "mainwindow.h"
#include "ui_mainwindow.h"
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


