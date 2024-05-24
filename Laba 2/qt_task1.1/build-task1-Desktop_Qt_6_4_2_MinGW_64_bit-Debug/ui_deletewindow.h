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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletewindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *deletewindow)
    {
        if (deletewindow->objectName().isEmpty())
            deletewindow->setObjectName("deletewindow");
        deletewindow->resize(275, 103);
        verticalLayoutWidget = new QWidget(deletewindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 277, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);

        verticalLayout->addWidget(spinBox);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(deletewindow);

        QMetaObject::connectSlotsByName(deletewindow);
    } // setupUi

    void retranslateUi(QDialog *deletewindow)
    {
        deletewindow->setWindowTitle(QCoreApplication::translate("deletewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deletewindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\320\275\320\272\321\202 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("deletewindow", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletewindow: public Ui_deletewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
