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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(611, 424);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 240, 611, 131));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(420, 0, 429, 66));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 421, 239));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 611, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\274\320\270", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\273\320\260\321\201\321\201\321\213, \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213, \320\274\320\260\321\201\321\201\320\270\320\262\321\213", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\202\320\276\321\202\320\270\320\277\321\213 \321\204\321\203\320\275\320\272\321\206\320\270\320\271", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \320\270\320\273\320\270 \320\274\320\260\321\201\321\201\320\270\320\262\320\276\320\262 \320\270 \320\270\321\205 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\233\320\276\320\272\320\260\320\273\321\214\320\275\321\213\320\265 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\265 \320\270 \320\270\321\205 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\265\321\200\320\265\320\263\321\200\321\203\320\266\320\265\320\275\320\275\321\213\321\205 \321\204\321\203\320\275\320\272\321\206\320\270\320\271 \320\270 \320\270\321\205\n"
"\320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
