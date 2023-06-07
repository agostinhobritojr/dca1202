#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QLineEdit>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->horizontalSliderB,
            SIGNAL(valueChanged(int)),
            ui->lcdNumberB,
            SLOT(display(int)));

   /* connect(ui->pushButtonQuit,
            SIGNAL(clicked(bool)),
            this,
            SLOT(finaliza()));
*/
    connect(ui->pushButtonCopia,
            SIGNAL(clicked()),
            SLOT(copia()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finaliza(){
    std::exit(0);
}

void MainWindow::copia(){
    ui->textEditTexto->setText(
        ui->lineEditTexto->text());
}

