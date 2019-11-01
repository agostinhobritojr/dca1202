#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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







