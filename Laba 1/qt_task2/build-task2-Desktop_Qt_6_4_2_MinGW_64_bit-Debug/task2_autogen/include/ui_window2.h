/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_WIndow2
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *WIndow2)
    {
        if (WIndow2->objectName().isEmpty())
            WIndow2->setObjectName("WIndow2");
        WIndow2->resize(793, 462);
        tableWidget = new QTableWidget(WIndow2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 801, 461));

        retranslateUi(WIndow2);

        QMetaObject::connectSlotsByName(WIndow2);
    } // setupUi

    void retranslateUi(QDialog *WIndow2)
    {
        WIndow2->setWindowTitle(QCoreApplication::translate("WIndow2", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WIndow2: public Ui_WIndow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H
