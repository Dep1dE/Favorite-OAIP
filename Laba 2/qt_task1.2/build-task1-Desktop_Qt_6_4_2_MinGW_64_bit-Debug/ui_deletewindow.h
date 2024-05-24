/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletewindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *deletewindow)
    {
        if (deletewindow->objectName().isEmpty())
            deletewindow->setObjectName("deletewindow");
        deletewindow->resize(296, 122);
        gridLayoutWidget = new QWidget(deletewindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 309, 121));
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


        retranslateUi(deletewindow);

        QMetaObject::connectSlotsByName(deletewindow);
    } // setupUi

    void retranslateUi(QDialog *deletewindow)
    {
        deletewindow->setWindowTitle(QCoreApplication::translate("deletewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deletewindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\203\320\264\320\260\320\273\321\217\320\265\320\274\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("deletewindow", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletewindow: public Ui_deletewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
