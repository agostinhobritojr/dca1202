#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "dialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSliderAmp,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaFrequencia(int)));

    connect(ui->horizontalSliderVel,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaVelocidade(int)));

    connect(ui->widget,
            SIGNAL(mudaX(int)),
            ui->lcdNumberX,
            SLOT(display(int)));

    connect(ui->widget,
            SIGNAL(mudaY(int)),
            ui->lcdNumberY,
            SLOT(display(int)));

    connect(ui->actionPreferencias,
            SIGNAL(triggered(bool)),
            this,
            SLOT(dialogPreferencias()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dialogPreferencias(){
    QMessageBox box;
    Dialog d;
    int r, g, b;
    r = ui->widget->getR();
    g = ui->widget->getG();
    b = ui->widget->getB();
    //d.setColor(r,g,b);
    if(d.exec() == QDialog::Accepted){
        r = d.getR(); g = d.getG(); b = d.getB();
        qDebug() << r << g << b;
        ui->widget->setColor(r,g,b);
    }
    else{
    }


    /* QMessageBox box;
    box.setText("Alo! <BR>"
                "<b>Agostinho</b>!");
    box.exec();
*/

}

