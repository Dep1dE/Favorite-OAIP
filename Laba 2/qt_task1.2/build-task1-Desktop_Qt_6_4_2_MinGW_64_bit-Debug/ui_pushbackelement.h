/********************************************************************************
** Form generated from reading UI file 'pushbackelement.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHBACKELEMENT_H
#define UI_PUSHBACKELEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pushbackelement
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *dayComboBox;
    QComboBox *monthComboBox;
    QSpinBox *yearSpinBox;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *pushbackelement)
    {
        if (pushbackelement->objectName().isEmpty())
            pushbackelement->setObjectName("pushbackelement");
        pushbackelement->resize(400, 300);
        gridLayoutWidget = new QWidget(pushbackelement);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, -1, 401, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        dayComboBox = new QComboBox(gridLayoutWidget);
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->setObjectName("dayComboBox");

        horizontalLayout->addWidget(dayComboBox);

        monthComboBox = new QComboBox(gridLayoutWidget);
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->setObjectName("monthComboBox");

        horizontalLayout->addWidget(monthComboBox);

        yearSpinBox = new QSpinBox(gridLayoutWidget);
        yearSpinBox->setObjectName("yearSpinBox");
        yearSpinBox->setMinimum(1000);
        yearSpinBox->setMaximum(9999);

        horizontalLayout->addWidget(yearSpinBox);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(1);

        gridLayout->addWidget(spinBox_2, 5, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 3, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 8, 0, 1, 1);


        retranslateUi(pushbackelement);

        QMetaObject::connectSlotsByName(pushbackelement);
    } // setupUi

    void retranslateUi(QDialog *pushbackelement)
    {
        pushbackelement->setWindowTitle(QCoreApplication::translate("pushbackelement", "Dialog", nullptr));
        dayComboBox->setItemText(0, QCoreApplication::translate("pushbackelement", "1", nullptr));
        dayComboBox->setItemText(1, QCoreApplication::translate("pushbackelement", "2", nullptr));
        dayComboBox->setItemText(2, QCoreApplication::translate("pushbackelement", "3", nullptr));
        dayComboBox->setItemText(3, QCoreApplication::translate("pushbackelement", "4", nullptr));
        dayComboBox->setItemText(4, QCoreApplication::translate("pushbackelement", "5", nullptr));
        dayComboBox->setItemText(5, QCoreApplication::translate("pushbackelement", "6", nullptr));
        dayComboBox->setItemText(6, QCoreApplication::translate("pushbackelement", "7", nullptr));
        dayComboBox->setItemText(7, QCoreApplication::translate("pushbackelement", "8", nullptr));
        dayComboBox->setItemText(8, QCoreApplication::translate("pushbackelement", "9", nullptr));
        dayComboBox->setItemText(9, QCoreApplication::translate("pushbackelement", "10", nullptr));
        dayComboBox->setItemText(10, QCoreApplication::translate("pushbackelement", "11", nullptr));
        dayComboBox->setItemText(11, QCoreApplication::translate("pushbackelement", "12", nullptr));
        dayComboBox->setItemText(12, QCoreApplication::translate("pushbackelement", "13", nullptr));
        dayComboBox->setItemText(13, QCoreApplication::translate("pushbackelement", "14", nullptr));
        dayComboBox->setItemText(14, QCoreApplication::translate("pushbackelement", "15", nullptr));
        dayComboBox->setItemText(15, QCoreApplication::translate("pushbackelement", "16", nullptr));
        dayComboBox->setItemText(16, QCoreApplication::translate("pushbackelement", "17", nullptr));
        dayComboBox->setItemText(17, QCoreApplication::translate("pushbackelement", "18", nullptr));
        dayComboBox->setItemText(18, QCoreApplication::translate("pushbackelement", "19", nullptr));
        dayComboBox->setItemText(19, QCoreApplication::translate("pushbackelement", "20", nullptr));
        dayComboBox->setItemText(20, QCoreApplication::translate("pushbackelement", "21", nullptr));
        dayComboBox->setItemText(21, QCoreApplication::translate("pushbackelement", "22", nullptr));
        dayComboBox->setItemText(22, QCoreApplication::translate("pushbackelement", "23", nullptr));
        dayComboBox->setItemText(23, QCoreApplication::translate("pushbackelement", "24", nullptr));
        dayComboBox->setItemText(24, QCoreApplication::translate("pushbackelement", "25", nullptr));
        dayComboBox->setItemText(25, QCoreApplication::translate("pushbackelement", "26", nullptr));
        dayComboBox->setItemText(26, QCoreApplication::translate("pushbackelement", "27", nullptr));
        dayComboBox->setItemText(27, QCoreApplication::translate("pushbackelement", "28", nullptr));
        dayComboBox->setItemText(28, QCoreApplication::translate("pushbackelement", "29", nullptr));
        dayComboBox->setItemText(29, QCoreApplication::translate("pushbackelement", "30", nullptr));
        dayComboBox->setItemText(30, QCoreApplication::translate("pushbackelement", "31", nullptr));

        monthComboBox->setItemText(0, QCoreApplication::translate("pushbackelement", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        monthComboBox->setItemText(1, QCoreApplication::translate("pushbackelement", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        monthComboBox->setItemText(2, QCoreApplication::translate("pushbackelement", "\320\234\320\260\321\200\321\202", nullptr));
        monthComboBox->setItemText(3, QCoreApplication::translate("pushbackelement", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        monthComboBox->setItemText(4, QCoreApplication::translate("pushbackelement", "\320\234\320\260\320\271", nullptr));
        monthComboBox->setItemText(5, QCoreApplication::translate("pushbackelement", "\320\230\321\216\320\275\321\214", nullptr));
        monthComboBox->setItemText(6, QCoreApplication::translate("pushbackelement", "\320\230\321\216\320\273\321\214", nullptr));
        monthComboBox->setItemText(7, QCoreApplication::translate("pushbackelement", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        monthComboBox->setItemText(8, QCoreApplication::translate("pushbackelement", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox->setItemText(9, QCoreApplication::translate("pushbackelement", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox->setItemText(10, QCoreApplication::translate("pushbackelement", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox->setItemText(11, QCoreApplication::translate("pushbackelement", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label_2->setText(QCoreApplication::translate("pushbackelement", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\265\320\264\320\270\320\275\320\270\321\206 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("pushbackelement", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("pushbackelement", "\320\246\320\265\320\275\320\260 \320\267\320\260 \320\265\320\264\320\270\320\275\320\270\321\206\321\203 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label->setText(QCoreApplication::translate("pushbackelement", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("pushbackelement", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pushbackelement: public Ui_pushbackelement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHBACKELEMENT_H
