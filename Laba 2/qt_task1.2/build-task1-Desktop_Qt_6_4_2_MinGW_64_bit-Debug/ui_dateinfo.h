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
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *dateinfo)
    {
        if (dateinfo->objectName().isEmpty())
            dateinfo->setObjectName("dateinfo");
        dateinfo->resize(283, 101);
        gridLayoutWidget = new QWidget(dateinfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 282, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(dateinfo);

        QMetaObject::connectSlotsByName(dateinfo);
    } // setupUi

    void retranslateUi(QDialog *dateinfo)
    {
        dateinfo->setWindowTitle(QCoreApplication::translate("dateinfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dateinfo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\200\320\276\320\272(\320\262 \320\264\320\275\321\217\321\205) \321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("dateinfo", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dateinfo: public Ui_dateinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEINFO_H
