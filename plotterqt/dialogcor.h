#ifndef DIALOGCOR_H
#define DIALOGCOR_H

#include <QDialog>

namespace Ui {
class DialogCor;
}

class DialogCor : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCor(QWidget *parent = nullptr);
    ~DialogCor();
    int getR();
    int getG();
    int getB();

private:
    Ui::DialogCor *ui;
};

#endif // DIALOGCOR_H
