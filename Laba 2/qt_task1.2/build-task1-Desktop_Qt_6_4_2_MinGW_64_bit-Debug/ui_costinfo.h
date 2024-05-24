/********************************************************************************
** Form generated from reading UI file 'costinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSTINFO_H
#define UI_COSTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_costinfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *costinfo)
    {
        if (costinfo->objectName().isEmpty())
            costinfo->setObjectName("costinfo");
        costinfo->resize(223, 90);
        gridLayoutWidget = new QWidget(costinfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 221, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(costinfo);

        QMetaObject::connectSlotsByName(costinfo);
    } // setupUi

    void retranslateUi(QDialog *costinfo)
    {
        costinfo->setWindowTitle(QCoreApplication::translate("costinfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("costinfo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("costinfo", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class costinfo: public Ui_costinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTINFO_H
