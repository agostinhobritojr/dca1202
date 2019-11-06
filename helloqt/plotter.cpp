#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <cmath>
#include <QTimerEvent>
#include <QMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QMessageBox>

using namespace std;

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
  amplitude = 0.5;
  frequencia = 2;
  teta = 1;
  velocidade = 0;

  backR = 255;
  backG = 255;
  backB = 0;

  timerid = startTimer(10);
  // habilitar o rastreio do mouse
  setMouseTracking(true);

  actionMessage = new QAction(this);

  actionMessage->setText("mostra mensagem");

  connect(actionMessage,
          SIGNAL(triggered()),
          this,
          SLOT(mostraMensagem()));
}

void Plotter::paintEvent(QPaintEvent *event){
  QPainter painter(this);
  QPen pen;
  QBrush brush;

  // o uso de Antialiasing reduz o
  // SERRILHAMENTO DAS LINHAS
  painter.setRenderHint(QPainter::Antialiasing);

  pen.setColor(QColor(255,0,0));
  brush.setColor(QColor(backR,backG,backB));
  brush.setStyle(Qt::SolidPattern);

  painter.setPen(pen);
  painter.setBrush(brush);

  painter.drawRect(0,0,width()-2,height()-2);

  pen.setStyle(Qt::DashLine);
  painter.setPen(pen);

  painter.drawLine(0,height()/2,
                   width(), height()/2);

  int x1, y1, x2, y2;
  x1 = 0;
  y1 = height()/2-
      amplitude*height()/2*
      sin((2*M_PI)*frequencia*
          (double)x1/width()+teta);

  pen.setStyle(Qt::SolidLine);
  pen.setColor(QColor(0,0,255));
  pen.setWidth(1);
  painter.setPen(pen);

  for (int i=1; i<=width(); i++) {
    x2 = i;
    y2 = height()/2-
            amplitude*height()/2*
            sin((2*M_PI)*frequencia*
                (double)x2/width()+teta);
    painter.drawLine(x1,y1,x2,y2);
    x1 = x2;
    y1 = y2;
  }

}

void Plotter::timerEvent(QTimerEvent *event)
{
  int id;
  id = event->timerId();
  teta=teta+velocidade;
  repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
  int x, y;
  x = event->x();
  y = event->y();
//  qDebug() << x << y;
//  qDebug() << event->button();
  emit mouseX(x);
  emit mouseY(y);
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
  emit mouseX(event->x());
  emit mouseY(event->y());
}

void Plotter::contextMenuEvent(QContextMenuEvent *event)
{
  QMenu menu;
  menu.addAction(actionMessage);
  menu.exec(event->globalPos());
}

void Plotter::setBackgroundColor(int r, int g, int b)
{
  backR = r;  backG = g; backB = b;
  repaint();
}

void Plotter::mudaAmplitude(int valor){
  amplitude = valor/100.0;
  repaint();
}

void Plotter::mudaFrequencia(int valor)
{
  frequencia = valor*50/100.0;
  repaint();
}

void Plotter::mudaVelocidade(int vel)
{
  velocidade = (float)vel/100;
}

void Plotter::mudaTemporizador(){
  killTimer(timerid);
}

void Plotter::mostraMensagem()
{
  QMessageBox box;
  box.setText("Alo, menu!");
  box.exec();
}





