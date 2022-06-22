#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  connect(ui->pushButtonQuit,
          SIGNAL(clicked()),
          this,
          SLOT(morreDanado()));

  connect(ui->pushButtonCopiar,
          SIGNAL(clicked()),
          this,
          SLOT(copiaTexto()));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::morreDanado()
{
  exit(0);
}

void MainWindow::copiaTexto()
{
   QString texto;
   texto = ui->textEditEsquerda->toPlainText();
   texto = QString("<i>")+texto+"</i>";
   ui->textEditDireita->setText(texto);
}

















