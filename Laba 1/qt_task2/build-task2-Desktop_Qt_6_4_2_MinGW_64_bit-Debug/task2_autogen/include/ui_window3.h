/********************************************************************************
** Form generated from reading UI file 'window3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW3_H
#define UI_WINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_window3
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *window3)
    {
        if (window3->objectName().isEmpty())
            window3->setObjectName("window3");
        window3->resize(742, 376);
        tableWidget = new QTableWidget(window3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 741, 381));

        retranslateUi(window3);

        QMetaObject::connectSlotsByName(window3);
    } // setupUi

    void retranslateUi(QDialog *window3)
    {
        window3->setWindowTitle(QCoreApplication::translate("window3", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window3: public Ui_window3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW3_H
