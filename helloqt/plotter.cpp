#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <cmath>
#include <QTimerEvent>
#include <QMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QAction>
#include <QColorDialog>
#include <QMessageBox>
#include <QString>
#include <QColor>

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{
  ampl = 1.0;
  freq = 1;
  teta = 0;
  vel = 0;
  cor = 255;
  lineColor = QColor(255,0,0);
  actionMudaCor = new QAction(this);
  actionMudaCor->setText("Muda Cor");

  connect(actionMudaCor,
          SIGNAL(triggered(bool)),
          this,
          SLOT(mudaCor()));

  timerId = startTimer(50);
  // habilita o rastreio da posicao do mouse
  setMouseTracking(true);
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
  brush.setColor(QColor(cor,cor,0));
  brush.setStyle(Qt::SolidPattern);
  // entregando o pincel ao pintor
  p.setBrush(brush);

  p.drawRect(0,0,width(),height());

  pen.setColor(QColor(0,0,255));
  pen.setStyle(Qt::DashLine);
  p.setPen(pen);

  p.drawLine(0,height()/2, width(), height()/2);

  // seno desenhado com vermelho
  pen.setColor(lineColor);
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
  teta = teta + vel;
  if(teta > 2*3.1415)
    teta = 0;
  if(event->timerId() == timerId){
   // cor++;
   // if(cor > 255){
    //  cor=0;
   // }
  }
  repaint();
}

void Plotter::mouseMoveEvent(QMouseEvent *event){
  emit moveX(event->x());
  emit moveY(event->y());
  // qDebug() << event->x() << "x" << event->y();
}

void Plotter::mousePressEvent(QMouseEvent *event){
  if(event->button() == Qt::LeftButton ){
    emit clickX(event->x());
    emit clickY(event->y());
  }
}

void Plotter::contextMenuEvent(QContextMenuEvent *event)
{
  QMenu menu(this);
  menu.addAction(actionMudaCor);
  menu.exec(event->globalPos());
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

void Plotter::mudaVelocidade(int v)
{
  vel = v/99.0;
}

void Plotter::mudaCor(){
  int r, g, b;
  QColor cor;
  QMessageBox box;
  QString msg;
  QColorDialog d;
  d.exec();
  cor = d.selectedColor();
  lineColor = cor;
  r = cor.red();
  g = cor.green();
  b = cor.blue();
  msg = "r = <b>"+QString::number(r)+"</b> <br>"+
      "g = <b>"+QString::number(g)+"</b> <br>"+
      "b = <b>"+QString::number(b)+"</b>";
  box.setText(msg);
  box.exec();
  repaint();
}














