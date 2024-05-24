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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *Edit;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 523);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 30, 601, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        gridLayout->addWidget(textBrowser, 0, 1, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName("listWidget");
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        listWidget->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 601, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8("../32743.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        Edit = new QLineEdit(horizontalLayoutWidget);
        Edit->setObjectName("Edit");

        horizontalLayout->addWidget(Edit);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../png-transparent-gradient-arrow-arrow-gradual-change-instruction.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_2);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 370, 601, 102));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 2);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName("pushButton_6");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../png-clipart-computer-icons-insert-computer-software-column-blue-angle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);

        gridLayout_2->addWidget(pushButton_6, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName("pushButton_5");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../336-3366890_free-online-tool-to-convert-png-to-ico.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);

        gridLayout_2->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../png-clipart-check-mark-computer-icons-icon-design-fleche-angle-text-thumbnail.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        gridLayout_2->addWidget(pushButton_3, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 25));
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
        pushButton->setText(QString());
        Edit->setText(QString());
        Edit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217 :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265/\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
