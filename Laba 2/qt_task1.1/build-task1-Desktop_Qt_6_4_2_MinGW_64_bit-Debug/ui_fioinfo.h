/********************************************************************************
** Form generated from reading UI file 'fioinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIOINFO_H
#define UI_FIOINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fioInfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *fioInfo)
    {
        if (fioInfo->objectName().isEmpty())
            fioInfo->setObjectName("fioInfo");
        fioInfo->resize(234, 103);
        gridLayoutWidget = new QWidget(fioInfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 231, 101));
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


        retranslateUi(fioInfo);

        QMetaObject::connectSlotsByName(fioInfo);
    } // setupUi

    void retranslateUi(QDialog *fioInfo)
    {
        fioInfo->setWindowTitle(QCoreApplication::translate("fioInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fioInfo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("fioInfo", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fioInfo: public Ui_fioInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIOINFO_H
