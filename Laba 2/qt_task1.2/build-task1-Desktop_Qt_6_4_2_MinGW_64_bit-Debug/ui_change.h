/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

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

class Ui_change
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *dayComboBox1;
    QComboBox *monthComboBox1;
    QSpinBox *spinBox_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName("change");
        change->resize(412, 284);
        gridLayoutWidget = new QWidget(change);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 411, 284));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 9, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 3, 0, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");

        gridLayout->addWidget(spinBox_2, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        dayComboBox1 = new QComboBox(gridLayoutWidget);
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->addItem(QString());
        dayComboBox1->setObjectName("dayComboBox1");

        horizontalLayout->addWidget(dayComboBox1);

        monthComboBox1 = new QComboBox(gridLayoutWidget);
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->addItem(QString());
        monthComboBox1->setObjectName("monthComboBox1");

        horizontalLayout->addWidget(monthComboBox1);

        spinBox_3 = new QSpinBox(gridLayoutWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMinimum(1000);
        spinBox_3->setMaximum(9999);

        horizontalLayout->addWidget(spinBox_3);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 1);


        retranslateUi(change);

        monthComboBox1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QDialog *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("change", "\320\236\320\272", nullptr));
        dayComboBox1->setItemText(0, QCoreApplication::translate("change", "1", nullptr));
        dayComboBox1->setItemText(1, QCoreApplication::translate("change", "2", nullptr));
        dayComboBox1->setItemText(2, QCoreApplication::translate("change", "3", nullptr));
        dayComboBox1->setItemText(3, QCoreApplication::translate("change", "4", nullptr));
        dayComboBox1->setItemText(4, QCoreApplication::translate("change", "5", nullptr));
        dayComboBox1->setItemText(5, QCoreApplication::translate("change", "6", nullptr));
        dayComboBox1->setItemText(6, QCoreApplication::translate("change", "7", nullptr));
        dayComboBox1->setItemText(7, QCoreApplication::translate("change", "8", nullptr));
        dayComboBox1->setItemText(8, QCoreApplication::translate("change", "9", nullptr));
        dayComboBox1->setItemText(9, QCoreApplication::translate("change", "10", nullptr));
        dayComboBox1->setItemText(10, QCoreApplication::translate("change", "11", nullptr));
        dayComboBox1->setItemText(11, QCoreApplication::translate("change", "12", nullptr));
        dayComboBox1->setItemText(12, QCoreApplication::translate("change", "13", nullptr));
        dayComboBox1->setItemText(13, QCoreApplication::translate("change", "14", nullptr));
        dayComboBox1->setItemText(14, QCoreApplication::translate("change", "15", nullptr));
        dayComboBox1->setItemText(15, QCoreApplication::translate("change", "16", nullptr));
        dayComboBox1->setItemText(16, QCoreApplication::translate("change", "17", nullptr));
        dayComboBox1->setItemText(17, QCoreApplication::translate("change", "18", nullptr));
        dayComboBox1->setItemText(18, QCoreApplication::translate("change", "19", nullptr));
        dayComboBox1->setItemText(19, QCoreApplication::translate("change", "20", nullptr));
        dayComboBox1->setItemText(20, QCoreApplication::translate("change", "21", nullptr));
        dayComboBox1->setItemText(21, QCoreApplication::translate("change", "22", nullptr));
        dayComboBox1->setItemText(22, QCoreApplication::translate("change", "23", nullptr));
        dayComboBox1->setItemText(23, QCoreApplication::translate("change", "24", nullptr));
        dayComboBox1->setItemText(24, QCoreApplication::translate("change", "25", nullptr));
        dayComboBox1->setItemText(25, QCoreApplication::translate("change", "26", nullptr));
        dayComboBox1->setItemText(26, QCoreApplication::translate("change", "27", nullptr));
        dayComboBox1->setItemText(27, QCoreApplication::translate("change", "28", nullptr));
        dayComboBox1->setItemText(28, QCoreApplication::translate("change", "29", nullptr));
        dayComboBox1->setItemText(29, QCoreApplication::translate("change", "30", nullptr));
        dayComboBox1->setItemText(30, QCoreApplication::translate("change", "31", nullptr));

        monthComboBox1->setItemText(0, QCoreApplication::translate("change", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        monthComboBox1->setItemText(1, QCoreApplication::translate("change", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        monthComboBox1->setItemText(2, QCoreApplication::translate("change", "\320\234\320\260\321\200\321\202", nullptr));
        monthComboBox1->setItemText(3, QCoreApplication::translate("change", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        monthComboBox1->setItemText(4, QCoreApplication::translate("change", "\320\234\320\260\320\271", nullptr));
        monthComboBox1->setItemText(5, QCoreApplication::translate("change", "\320\230\321\216\320\275\321\214", nullptr));
        monthComboBox1->setItemText(6, QCoreApplication::translate("change", "\320\230\321\216\320\273\321\214", nullptr));
        monthComboBox1->setItemText(7, QCoreApplication::translate("change", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        monthComboBox1->setItemText(8, QCoreApplication::translate("change", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox1->setItemText(9, QCoreApplication::translate("change", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox1->setItemText(10, QCoreApplication::translate("change", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox1->setItemText(11, QCoreApplication::translate("change", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label->setText(QCoreApplication::translate("change", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("change", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\265\320\264\320\265\320\275\320\270\321\206 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("change", "\320\246\320\265\320\275\320\260 \320\267\320\260 \320\265\320\264\320\270\320\275\320\270\321\206\321\203 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("change", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
