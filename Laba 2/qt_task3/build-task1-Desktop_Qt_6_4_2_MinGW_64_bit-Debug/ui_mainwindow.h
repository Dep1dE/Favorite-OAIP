/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 761);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, -1, 801, 711));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        gridLayout->addLayout(horizontalLayout_2, 20, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 15, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 12, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 13, 0, 1, 1);

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
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 14, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 16, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(gridLayoutWidget);
        textBrowser_2->setObjectName("textBrowser_2");

        horizontalLayout->addWidget(textBrowser_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 9, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 17, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout->addWidget(lineEdit_6, 18, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 10, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 19, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "D:", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "a/(b-c)*(d+e)", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "(a+b)*(c-d)/e", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "a-(b+c*d)/e", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "a/b-((c+d)*e)", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "a*(b-c+d)/e", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "(a+b)*(c-d)/e", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "a*(b-c)/(d+e)", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "a/(b*(c+d))-e", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "(a+(b/c-d))*e", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "a*(b+c)/(d-e)", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "a-(b/c*(d+e))", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "(a-b)/(c+d)*e", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MainWindow", "a/(b+c-d*e)", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("MainWindow", "a*(b-c)/(d+e)", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("MainWindow", "(a+b*c)/(d-e)", nullptr));

        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "E:", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
