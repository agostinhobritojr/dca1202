#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QColorDialog>
#include "plotter.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  //  connect(ui->horizontalSliderTeste,
  //          SIGNAL(valueChanged(int)),
  //          ui->lcdNumberTeste,
  //          SLOT(display(int)));

  //  connect(ui->actionQuit,
  //          &QAction::triggered,
  //          this,
  //          &MainWindow::finaliza);

  connect(ui->horizontalSliderFreq,
          &QAbstractSlider::valueChanged,
          ui->widget,
          &Plotter::mudaFrequencia);

  connect(ui->pushButtonTimer,
          &QPushButton::clicked,
          ui->widget,
          &Plotter::mudaTemporizador);

  connect(ui->horizontalSliderVeloc,
          &QAbstractSlider::valueChanged,
          ui->widget,
          &Plotter::mudaVelocidade);

  connect(ui->widget,
          SIGNAL(mouseX(int)),
          ui->lcdNumberX,
          SLOT(display(int)));

  connect(ui->widget,
          SIGNAL(mouseY(int)),
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

void MainWindow::finaliza()
{
  close();
}

void MainWindow::copiaTexto()
{
  QString s;
  // s = ui->plainTextEdit->toPlainText();
  //  s = "<b>"+s+"</b>";
  //  ui->textEdit->setText(s);
}

void MainWindow::mudaCor()
{
  Dialog d;
  QColorDialog colorDialog;
  int r, g, b;
  if(d.exec() == QDialog::Accepted){
    r = d.getR();
    g = d.getG();
    b = d.getB();
    ui->widget->setBackgroundColor(r,g,b);
  }

 // if(colorDialog.exec() == QDialog::Accepted){

 // }
}







