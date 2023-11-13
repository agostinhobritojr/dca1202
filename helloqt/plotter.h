#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float amplitude;
public:
    explicit Plotter(QWidget *parent = nullptr);

public slots:
    void paintEvent(QPaintEvent *event);

    void mudaAmplitude(int amp);

signals:

};

#endif // PLOTTER_H
