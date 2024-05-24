/********************************************************************************
** Form generated from reading UI file 'window1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW1_H
#define UI_WINDOW1_H

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

class Ui_Window1
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QSpinBox *spinBox_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QSpinBox *spinBox_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Window1)
    {
        if (Window1->objectName().isEmpty())
            Window1->setObjectName("Window1");
        Window1->resize(459, 457);
        gridLayoutWidget = new QWidget(Window1);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(39, 9, 381, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout->addWidget(comboBox_2);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1000);
        spinBox->setMaximum(9999);

        horizontalLayout->addWidget(spinBox);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 5, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        horizontalLayout_2->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(gridLayoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        horizontalLayout_2->addWidget(comboBox_4);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(1000);
        spinBox_2->setMaximum(9999);

        horizontalLayout_2->addWidget(spinBox_2);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        comboBox_5 = new QComboBox(gridLayoutWidget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");

        horizontalLayout_3->addWidget(comboBox_5);

        comboBox_6 = new QComboBox(gridLayoutWidget);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");

        horizontalLayout_3->addWidget(comboBox_6);

        spinBox_3 = new QSpinBox(gridLayoutWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMinimum(1000);
        spinBox_3->setMaximum(9999);

        horizontalLayout_3->addWidget(spinBox_3);


        gridLayout->addLayout(horizontalLayout_3, 10, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 9, 0, 1, 1);

        pushButton = new QPushButton(Window1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 410, 83, 29));

        retranslateUi(Window1);

        QMetaObject::connectSlotsByName(Window1);
    } // setupUi

    void retranslateUi(QDialog *Window1)
    {
        Window1->setWindowTitle(QCoreApplication::translate("Window1", "Dialog", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("Window1", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Window1", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Window1", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Window1", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Window1", "4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Window1", "5", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Window1", "6", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Window1", "7", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Window1", "8", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Window1", "9", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("Window1", "10", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("Window1", "11", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("Window1", "12", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("Window1", "13", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("Window1", "14", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("Window1", "15", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("Window1", "16", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("Window1", "17", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("Window1", "18", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("Window1", "19", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("Window1", "20", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("Window1", "21", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("Window1", "22", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("Window1", "23", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("Window1", "24", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("Window1", "25", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("Window1", "26", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("Window1", "27", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("Window1", "28", nullptr));
        comboBox->setItemText(28, QCoreApplication::translate("Window1", "29", nullptr));
        comboBox->setItemText(29, QCoreApplication::translate("Window1", "30", nullptr));
        comboBox->setItemText(30, QCoreApplication::translate("Window1", "31", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Window1", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Window1", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Window1", "\320\234\320\260\321\200\321\202", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Window1", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Window1", "\320\234\320\260\320\271", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Window1", "\320\230\321\216\320\275\321\214", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("Window1", "\320\230\321\216\320\273\321\214", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("Window1", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("Window1", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("Window1", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("Window1", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("Window1", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label->setText(QCoreApplication::translate("Window1", "\320\224\321\215\320\264\320\273\320\260\320\271\320\275", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Window1", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Window1", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \320\277\321\200\320\276\320\265\320\272\321\202\320\260", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Window1", "1", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Window1", "2", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Window1", "3", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Window1", "4", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Window1", "5", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("Window1", "6", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("Window1", "7", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("Window1", "8", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("Window1", "9", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("Window1", "10", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("Window1", "11", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("Window1", "12", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("Window1", "13", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("Window1", "14", nullptr));
        comboBox_3->setItemText(14, QCoreApplication::translate("Window1", "15", nullptr));
        comboBox_3->setItemText(15, QCoreApplication::translate("Window1", "16", nullptr));
        comboBox_3->setItemText(16, QCoreApplication::translate("Window1", "17", nullptr));
        comboBox_3->setItemText(17, QCoreApplication::translate("Window1", "18", nullptr));
        comboBox_3->setItemText(18, QCoreApplication::translate("Window1", "19", nullptr));
        comboBox_3->setItemText(19, QCoreApplication::translate("Window1", "20", nullptr));
        comboBox_3->setItemText(20, QCoreApplication::translate("Window1", "21", nullptr));
        comboBox_3->setItemText(21, QCoreApplication::translate("Window1", "22", nullptr));
        comboBox_3->setItemText(22, QCoreApplication::translate("Window1", "23", nullptr));
        comboBox_3->setItemText(23, QCoreApplication::translate("Window1", "24", nullptr));
        comboBox_3->setItemText(24, QCoreApplication::translate("Window1", "25", nullptr));
        comboBox_3->setItemText(25, QCoreApplication::translate("Window1", "26", nullptr));
        comboBox_3->setItemText(26, QCoreApplication::translate("Window1", "27", nullptr));
        comboBox_3->setItemText(27, QCoreApplication::translate("Window1", "28", nullptr));
        comboBox_3->setItemText(28, QCoreApplication::translate("Window1", "29", nullptr));
        comboBox_3->setItemText(29, QCoreApplication::translate("Window1", "30", nullptr));
        comboBox_3->setItemText(30, QCoreApplication::translate("Window1", "31", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("Window1", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Window1", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Window1", "\320\234\320\260\321\200\321\202", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Window1", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("Window1", "\320\234\320\260\320\271", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("Window1", "\320\230\321\216\320\275\321\214", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("Window1", "\320\230\321\216\320\273\321\214", nullptr));
        comboBox_4->setItemText(7, QCoreApplication::translate("Window1", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        comboBox_4->setItemText(8, QCoreApplication::translate("Window1", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_4->setItemText(9, QCoreApplication::translate("Window1", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_4->setItemText(10, QCoreApplication::translate("Window1", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        comboBox_4->setItemText(11, QCoreApplication::translate("Window1", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Window1", "\320\230\320\274\321\217 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\217", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("Window1", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\320\260", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("Window1", "1", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Window1", "2", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("Window1", "3", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("Window1", "4", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("Window1", "5", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("Window1", "6", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("Window1", "7", nullptr));
        comboBox_5->setItemText(7, QCoreApplication::translate("Window1", "8", nullptr));
        comboBox_5->setItemText(8, QCoreApplication::translate("Window1", "9", nullptr));
        comboBox_5->setItemText(9, QCoreApplication::translate("Window1", "10", nullptr));
        comboBox_5->setItemText(10, QCoreApplication::translate("Window1", "11", nullptr));
        comboBox_5->setItemText(11, QCoreApplication::translate("Window1", "12", nullptr));
        comboBox_5->setItemText(12, QCoreApplication::translate("Window1", "13", nullptr));
        comboBox_5->setItemText(13, QCoreApplication::translate("Window1", "14", nullptr));
        comboBox_5->setItemText(14, QCoreApplication::translate("Window1", "15", nullptr));
        comboBox_5->setItemText(15, QCoreApplication::translate("Window1", "16", nullptr));
        comboBox_5->setItemText(16, QCoreApplication::translate("Window1", "17", nullptr));
        comboBox_5->setItemText(17, QCoreApplication::translate("Window1", "18", nullptr));
        comboBox_5->setItemText(18, QCoreApplication::translate("Window1", "19", nullptr));
        comboBox_5->setItemText(19, QCoreApplication::translate("Window1", "20", nullptr));
        comboBox_5->setItemText(20, QCoreApplication::translate("Window1", "21", nullptr));
        comboBox_5->setItemText(21, QCoreApplication::translate("Window1", "22", nullptr));
        comboBox_5->setItemText(22, QCoreApplication::translate("Window1", "23", nullptr));
        comboBox_5->setItemText(23, QCoreApplication::translate("Window1", "24", nullptr));
        comboBox_5->setItemText(24, QCoreApplication::translate("Window1", "25", nullptr));
        comboBox_5->setItemText(25, QCoreApplication::translate("Window1", "26", nullptr));
        comboBox_5->setItemText(26, QCoreApplication::translate("Window1", "27", nullptr));
        comboBox_5->setItemText(27, QCoreApplication::translate("Window1", "28", nullptr));
        comboBox_5->setItemText(28, QCoreApplication::translate("Window1", "29", nullptr));
        comboBox_5->setItemText(29, QCoreApplication::translate("Window1", "30", nullptr));
        comboBox_5->setItemText(30, QCoreApplication::translate("Window1", "31", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("Window1", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("Window1", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("Window1", "\320\234\320\260\321\200\321\202", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("Window1", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        comboBox_6->setItemText(4, QCoreApplication::translate("Window1", "\320\234\320\260\320\271", nullptr));
        comboBox_6->setItemText(5, QCoreApplication::translate("Window1", "\320\230\321\216\320\275\321\214", nullptr));
        comboBox_6->setItemText(6, QCoreApplication::translate("Window1", "\320\230\321\216\320\273\321\214", nullptr));
        comboBox_6->setItemText(7, QCoreApplication::translate("Window1", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        comboBox_6->setItemText(8, QCoreApplication::translate("Window1", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_6->setItemText(9, QCoreApplication::translate("Window1", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_6->setItemText(10, QCoreApplication::translate("Window1", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        comboBox_6->setItemText(11, QCoreApplication::translate("Window1", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        lineEdit->setPlaceholderText(QCoreApplication::translate("Window1", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Window1", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\321\217 \320\277\321\200\320\276\320\265\320\272\321\202\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Window1", "\320\222\320\262\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window1: public Ui_Window1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW1_H
