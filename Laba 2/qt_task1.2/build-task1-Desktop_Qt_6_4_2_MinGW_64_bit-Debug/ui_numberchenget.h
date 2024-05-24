/********************************************************************************
** Form generated from reading UI file 'numberchenget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERCHENGET_H
#define UI_NUMBERCHENGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_numberchenget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *numberchenget)
    {
        if (numberchenget->objectName().isEmpty())
            numberchenget->setObjectName("numberchenget");
        numberchenget->resize(400, 119);
        gridLayoutWidget = new QWidget(numberchenget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(numberchenget);

        QMetaObject::connectSlotsByName(numberchenget);
    } // setupUi

    void retranslateUi(QDialog *numberchenget)
    {
        numberchenget->setWindowTitle(QCoreApplication::translate("numberchenget", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("numberchenget", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \321\205\320\276\321\202\320\270\321\202\320\265 \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214:", nullptr));
        pushButton->setText(QCoreApplication::translate("numberchenget", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class numberchenget: public Ui_numberchenget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERCHENGET_H
