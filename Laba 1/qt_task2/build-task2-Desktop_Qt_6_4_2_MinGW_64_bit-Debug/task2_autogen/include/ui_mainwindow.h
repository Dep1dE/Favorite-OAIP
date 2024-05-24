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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 485);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        action_6 = new QAction(MainWindow);
        action_6->setObjectName("action_6");
        action_7 = new QAction(MainWindow);
        action_7->setObjectName("action_7");
        action_8 = new QAction(MainWindow);
        action_8->setObjectName("action_8");
        action_9 = new QAction(MainWindow);
        action_9->setObjectName("action_9");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 801, 401));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_3->addAction(action_7);
        menu_3->addAction(action_8);
        menu_3->addAction(action_9);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\264\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\321\201\320\265\321\205 \320\277\321\200\320\276\320\265\320\272\321\202\320\276\320\262 \321\204\320\270\321\200\320\274\321\213, \320\276\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\321\205 \320\277\320\276 \320\264\320\260\321\202\320\265\n"
"\320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\321\217 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\264\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\321\201\320\265\321\205 \320\267\320\260\320\264\320\260\321\207, \321\200\320\260\320\261\320\276\321\202\320\260 \320\275\320\260\320\264 \320\272\320\276\321\202\320\276\321\200\321\213\320\274\320\270 \320\262\320\265\320\273\320\260\321\201\321\214 \320\276\320\264\320\275\320\270\320\274\n"
"\321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\274 \320\267\320\260 \321\202\320\265\320\272\321\203\321\211\320\270\320\265 \321\201\321\203\321\202\320\272\320\270", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\264\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262 \321\201 \321\203\320\272\320\260\320\267\320\260\320\275\320\270\320\265\320\274 \321\201\321\203\320\274\320\274\320\260\321\200\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \321\200\320\260\320\261\320\276\321\202\321\213\n"
"\320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\267\320\260 \320\277\321\200\320\276\321\210\320\265\320\264\321\210\320\270\320\271 \320\274\320\265\321\201\321\217\321\206", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
