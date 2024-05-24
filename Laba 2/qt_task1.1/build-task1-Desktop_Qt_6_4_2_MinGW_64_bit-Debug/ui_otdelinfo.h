/********************************************************************************
** Form generated from reading UI file 'otdelinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTDELINFO_H
#define UI_OTDELINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otdelinfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *otdelinfo)
    {
        if (otdelinfo->objectName().isEmpty())
            otdelinfo->setObjectName("otdelinfo");
        otdelinfo->resize(212, 102);
        gridLayoutWidget = new QWidget(otdelinfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 211, 101));
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


        retranslateUi(otdelinfo);

        QMetaObject::connectSlotsByName(otdelinfo);
    } // setupUi

    void retranslateUi(QDialog *otdelinfo)
    {
        otdelinfo->setWindowTitle(QCoreApplication::translate("otdelinfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("otdelinfo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\276\321\202\320\264\320\265\320\273\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("otdelinfo", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class otdelinfo: public Ui_otdelinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTDELINFO_H
