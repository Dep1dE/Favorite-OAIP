/********************************************************************************
** Form generated from reading UI file 'nameinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEINFO_H
#define UI_NAMEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nameinfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *nameinfo)
    {
        if (nameinfo->objectName().isEmpty())
            nameinfo->setObjectName("nameinfo");
        nameinfo->resize(231, 101);
        gridLayoutWidget = new QWidget(nameinfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 231, 101));
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


        retranslateUi(nameinfo);

        QMetaObject::connectSlotsByName(nameinfo);
    } // setupUi

    void retranslateUi(QDialog *nameinfo)
    {
        nameinfo->setWindowTitle(QCoreApplication::translate("nameinfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("nameinfo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("nameinfo", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nameinfo: public Ui_nameinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEINFO_H
