#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QString>
#include <QDebug>
#include <QMessageBox>

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





