/********************************************************************************
** Form generated from reading UI file 'dateinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEINFO_H
#define UI_DATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dateinfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *dateinfo)
    {
        if (dateinfo->objectName().isEmpty())
            dateinfo->setObjectName("dateinfo");
        dateinfo->resize(193, 103);
        gridLayoutWidget = new QWidget(dateinfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 191, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(dateinfo);

        QMetaObject::connectSlotsByName(dateinfo);
    } // setupUi

    void retranslateUi(QDialog *dateinfo)
    {
        dateinfo->setWindowTitle(QCoreApplication::translate("dateinfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dateinfo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\260\320\266(\320\262 \320\264\320\275\321\217\321\205)", nullptr));
        pushButton->setText(QCoreApplication::translate("dateinfo", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dateinfo: public Ui_dateinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEINFO_H
