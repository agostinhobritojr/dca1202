#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <cmath>
#include <QDebug>

#define PI 3.1415

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
  amplitude = 100;
  frequencia = 1;
  angulo = 0;
  velocidade = 0;
  startTimer(20);
  setMouseTracking(true);
  r=255;
  g=255;
  b=100;
}

void Plotter::timerEvent(QTimerEvent *event)
{
  angulo += velocidade;
  repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
  int x, y;
  x = event->x();
  y = event->y();
  emit mudaX(x);
  emit mudaY(y);

  //  qDebug() << "x = " << x << "; y = " << y;
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
  int x, y;
  x = event->x();
  y = event->y();
  emit mudaX(x);
  emit mudaY(y);
}

void Plotter::setRGB(int _r, int _g, int _b)
{
  r=_r; g=_g; b=_b;
  repaint();
}

void Plotter::paintEvent(QPaintEvent *event){
  QPainter painter(this);
  QBrush brush;
  QPen pen;

  // habilita o anti aliasing (atenua o
  // efeito de serrilhado nas figuras geometricas)
  painter.setRenderHint(QPainter::Antialiasing);

  // brush com a cor amarela com preenchimento
  // solido
  brush.setColor(QColor(r,g,b));
  brush.setStyle(Qt::SolidPattern);
  // informa ao painter qual o pincel atual
  painter.setBrush(brush);

  // pen com cor vermelha e dois pixels de largura
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  // informa ao painter qual o pen atual
  painter.setPen(pen);

  // desenha um retangulo tomando toda a area
  // do componente
  painter.drawRect(0,0,width(), height());

  // muda o estilo do tracejado
  pen.setStyle(Qt::DashLine);
  pen.setWidth(1);
  // comunica ao painter a nova caneta
  painter.setPen(pen);

  // desenha o eixo x
  painter.drawLine(0,height()/2,width(),height()/2);

  // desenha o seno com cor azul
  pen.setColor(QColor(0,0,255));
  pen.setStyle(Qt::SolidLine);
  painter.setPen(pen);


  int x1, y1, x2, y2;

  x1 = 0;
  y1 = height()/2 -
      height()/2*sin(2*PI*x1*frequencia
                     + angulo)*
      amplitude/100.0;

  for(int i=1; i<width(); i++){
    x2 = i;
    y2 = height()/2 -
        height()/2*sin(2*PI*frequencia*x2/width()
                       + angulo)*
        amplitude/100.0;
    painter.drawLine(x1,y1,x2,y2);
    x1 = x2;
    y1 = y2;
  }
}


void Plotter::mudaAmplitude(int _amplitude){
  amplitude = _amplitude;
  repaint();
}

void Plotter::mudaFrequencia(int _frequencia){
  frequencia = _frequencia;
  repaint();
}

void Plotter::mudaVelocidade(int _velocidade)
{
  velocidade = _velocidade/100.0*0.5;
}







