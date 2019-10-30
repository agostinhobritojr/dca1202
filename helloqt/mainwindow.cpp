#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->horizontalSliderTeste,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberTeste,
          SLOT(display(int)));

  connect(ui->pushButtonMorreu,
          &QPushButton::clicked,
          this,
          &MainWindow::finaliza);

  connect(ui->pushButtonCopia,
          &QPushButton::clicked,
          this,
          &MainWindow::copiaTexto);

//  connect(ui->actionQuit,
//          &QAction::triggered,
//          this,
//          &MainWindow::finaliza);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  close();
}

void MainWindow::copiaTexto()
{
  QString s;
  s = ui->plainTextEdit->toPlainText();
  s = "<b>"+s+"</b>";
  ui->textEdit->setText(s);
}







