#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <cmath>

Plotter::Plotter(QWidget *parent) :
    QWidget(parent)
{
  ampl = 1.0;
  freq = 1;
  teta = 0;
  timerId = startTimer(100);
}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter p(this);
  QPen pen;
  QBrush brush;

  // habilita algoritmos de anti-serrilhamento
  p.setRenderHint(QPainter::Antialiasing);

  // preparando a caneta
  // R, G, B
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);
  // entregando a caneta ao pintor
  p.setPen(pen);

  // preparando o pincel
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);
  // entregando o pincel ao pintor
  p.setBrush(brush);

  p.drawRect(0,0,width(),height());

  pen.setColor(QColor(0,0,255));
  pen.setStyle(Qt::DashLine);
  p.setPen(pen);

  p.drawLine(0,height()/2, width(), height()/2);

  // seno desenhado com vermelho
  pen.setColor(QColor(255,0,0));
  pen.setWidth(1);
  pen.setStyle(Qt::SolidLine);
  p.setPen(pen);

  int p1x, p1y, p2x, p2y;
  p1x=0;
  p1y=height()/2;
  for(int t=0; t<width(); t++){
    p2x = t;
    p2y = height()/2 - ampl*height()/2*
        sin(2*3.1415*freq*t/width()+teta);
    p.drawLine(p1x, p1y, p2x, p2y);
    p1x = p2x; p1y = p2y;
  }
}

void Plotter::timerEvent(QTimerEvent *event)
{
  teta = teta + 0.1;
  repaint();
}

void Plotter::mudaAmplitude(int a)
{
  ampl = a/99.0;
  // ativa paintevent
  repaint();
}

void Plotter::mudaFrequencia(int f)
{
  freq = f;
  repaint();
}














