#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float amplitude;
    float teta;
    float frequencia;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

};

#endif // PLOTTER_H
