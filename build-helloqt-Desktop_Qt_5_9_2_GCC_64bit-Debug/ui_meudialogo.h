/********************************************************************************
** Form generated from reading UI file 'meudialogo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEUDIALOGO_H
#define UI_MEUDIALOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MeuDialogo
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxR;
    QLabel *label_2;
    QSpinBox *spinBoxG;
    QLabel *label_3;
    QSpinBox *spinBoxB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MeuDialogo)
    {
        if (MeuDialogo->objectName().isEmpty())
            MeuDialogo->setObjectName(QStringLiteral("MeuDialogo"));
        MeuDialogo->resize(260, 176);
        verticalLayout = new QVBoxLayout(MeuDialogo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(MeuDialogo);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxR = new QSpinBox(MeuDialogo);
        spinBoxR->setObjectName(QStringLiteral("spinBoxR"));
        spinBoxR->setMaximum(255);

        gridLayout->addWidget(spinBoxR, 0, 1, 1, 1);

        label_2 = new QLabel(MeuDialogo);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxG = new QSpinBox(MeuDialogo);
        spinBoxG->setObjectName(QStringLiteral("spinBoxG"));
        spinBoxG->setMaximum(255);

        gridLayout->addWidget(spinBoxG, 1, 1, 1, 1);

        label_3 = new QLabel(MeuDialogo);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBoxB = new QSpinBox(MeuDialogo);
        spinBoxB->setObjectName(QStringLiteral("spinBoxB"));
        spinBoxB->setMaximum(255);

        gridLayout->addWidget(spinBoxB, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(MeuDialogo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MeuDialogo);
        QObject::connect(buttonBox, SIGNAL(accepted()), MeuDialogo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MeuDialogo, SLOT(reject()));

        QMetaObject::connectSlotsByName(MeuDialogo);
    } // setupUi

    void retranslateUi(QDialog *MeuDialogo)
    {
        MeuDialogo->setWindowTitle(QApplication::translate("MeuDialogo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("MeuDialogo", "R", Q_NULLPTR));
        label_2->setText(QApplication::translate("MeuDialogo", "G", Q_NULLPTR));
        label_3->setText(QApplication::translate("MeuDialogo", "B", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeuDialogo: public Ui_MeuDialogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEUDIALOGO_H
