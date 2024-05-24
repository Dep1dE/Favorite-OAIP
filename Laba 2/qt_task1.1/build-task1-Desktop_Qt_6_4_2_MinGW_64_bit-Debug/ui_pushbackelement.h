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

class Ui_pushBackElement
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *fioLineEdit;
    QLabel *label_3;
    QLineEdit *dolzhnostSpinBox;
    QSpinBox *otdelSpinBox;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *dayComboBox;
    QComboBox *monthComboBox;
    QSpinBox *yearSpinBox;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *pushBackElement)
    {
        if (pushBackElement->objectName().isEmpty())
            pushBackElement->setObjectName("pushBackElement");
        pushBackElement->resize(367, 284);
        gridLayoutWidget = new QWidget(pushBackElement);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 364, 283));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fioLineEdit = new QLineEdit(gridLayoutWidget);
        fioLineEdit->setObjectName("fioLineEdit");

        gridLayout->addWidget(fioLineEdit, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        dolzhnostSpinBox = new QLineEdit(gridLayoutWidget);
        dolzhnostSpinBox->setObjectName("dolzhnostSpinBox");

        gridLayout->addWidget(dolzhnostSpinBox, 7, 0, 1, 1);

        otdelSpinBox = new QSpinBox(gridLayoutWidget);
        otdelSpinBox->setObjectName("otdelSpinBox");
        otdelSpinBox->setMinimum(1);
        otdelSpinBox->setMaximum(99999);

        gridLayout->addWidget(otdelSpinBox, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

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
        yearSpinBox->setMinimum(1);
        yearSpinBox->setMaximum(9999);

        horizontalLayout->addWidget(yearSpinBox);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 10, 0, 1, 1);


        retranslateUi(pushBackElement);

        QMetaObject::connectSlotsByName(pushBackElement);
    } // setupUi

    void retranslateUi(QDialog *pushBackElement)
    {
        pushBackElement->setWindowTitle(QCoreApplication::translate("pushBackElement", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("pushBackElement", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label->setText(QCoreApplication::translate("pushBackElement", "\320\244.\320\230.\320\236:", nullptr));
        label_2->setText(QCoreApplication::translate("pushBackElement", "\320\235\320\276\320\274\320\265\321\200 \320\276\321\202\320\264\320\265\320\273\320\260:", nullptr));
        dayComboBox->setItemText(0, QCoreApplication::translate("pushBackElement", "1", nullptr));
        dayComboBox->setItemText(1, QCoreApplication::translate("pushBackElement", "2", nullptr));
        dayComboBox->setItemText(2, QCoreApplication::translate("pushBackElement", "3", nullptr));
        dayComboBox->setItemText(3, QCoreApplication::translate("pushBackElement", "4", nullptr));
        dayComboBox->setItemText(4, QCoreApplication::translate("pushBackElement", "5", nullptr));
        dayComboBox->setItemText(5, QCoreApplication::translate("pushBackElement", "6", nullptr));
        dayComboBox->setItemText(6, QCoreApplication::translate("pushBackElement", "7", nullptr));
        dayComboBox->setItemText(7, QCoreApplication::translate("pushBackElement", "8", nullptr));
        dayComboBox->setItemText(8, QCoreApplication::translate("pushBackElement", "9", nullptr));
        dayComboBox->setItemText(9, QCoreApplication::translate("pushBackElement", "10", nullptr));
        dayComboBox->setItemText(10, QCoreApplication::translate("pushBackElement", "11", nullptr));
        dayComboBox->setItemText(11, QCoreApplication::translate("pushBackElement", "12", nullptr));
        dayComboBox->setItemText(12, QCoreApplication::translate("pushBackElement", "13", nullptr));
        dayComboBox->setItemText(13, QCoreApplication::translate("pushBackElement", "14", nullptr));
        dayComboBox->setItemText(14, QCoreApplication::translate("pushBackElement", "15", nullptr));
        dayComboBox->setItemText(15, QCoreApplication::translate("pushBackElement", "16", nullptr));
        dayComboBox->setItemText(16, QCoreApplication::translate("pushBackElement", "17", nullptr));
        dayComboBox->setItemText(17, QCoreApplication::translate("pushBackElement", "18", nullptr));
        dayComboBox->setItemText(18, QCoreApplication::translate("pushBackElement", "19", nullptr));
        dayComboBox->setItemText(19, QCoreApplication::translate("pushBackElement", "20", nullptr));
        dayComboBox->setItemText(20, QCoreApplication::translate("pushBackElement", "21", nullptr));
        dayComboBox->setItemText(21, QCoreApplication::translate("pushBackElement", "22", nullptr));
        dayComboBox->setItemText(22, QCoreApplication::translate("pushBackElement", "23", nullptr));
        dayComboBox->setItemText(23, QCoreApplication::translate("pushBackElement", "24", nullptr));
        dayComboBox->setItemText(24, QCoreApplication::translate("pushBackElement", "25", nullptr));
        dayComboBox->setItemText(25, QCoreApplication::translate("pushBackElement", "26", nullptr));
        dayComboBox->setItemText(26, QCoreApplication::translate("pushBackElement", "27", nullptr));
        dayComboBox->setItemText(27, QCoreApplication::translate("pushBackElement", "28", nullptr));
        dayComboBox->setItemText(28, QCoreApplication::translate("pushBackElement", "29", nullptr));
        dayComboBox->setItemText(29, QCoreApplication::translate("pushBackElement", "30", nullptr));
        dayComboBox->setItemText(30, QCoreApplication::translate("pushBackElement", "31", nullptr));

        monthComboBox->setItemText(0, QCoreApplication::translate("pushBackElement", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        monthComboBox->setItemText(1, QCoreApplication::translate("pushBackElement", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        monthComboBox->setItemText(2, QCoreApplication::translate("pushBackElement", "\320\234\320\260\321\200\321\202", nullptr));
        monthComboBox->setItemText(3, QCoreApplication::translate("pushBackElement", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        monthComboBox->setItemText(4, QCoreApplication::translate("pushBackElement", "\320\234\320\260\320\271", nullptr));
        monthComboBox->setItemText(5, QCoreApplication::translate("pushBackElement", "\320\230\321\216\320\275\321\214", nullptr));
        monthComboBox->setItemText(6, QCoreApplication::translate("pushBackElement", "\320\230\321\216\320\273\321\214", nullptr));
        monthComboBox->setItemText(7, QCoreApplication::translate("pushBackElement", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        monthComboBox->setItemText(8, QCoreApplication::translate("pushBackElement", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox->setItemText(9, QCoreApplication::translate("pushBackElement", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox->setItemText(10, QCoreApplication::translate("pushBackElement", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        monthComboBox->setItemText(11, QCoreApplication::translate("pushBackElement", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label_4->setText(QCoreApplication::translate("pushBackElement", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        pushButton->setText(QCoreApplication::translate("pushBackElement", "\320\276\320\272\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pushBackElement: public Ui_pushBackElement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHBACKELEMENT_H
