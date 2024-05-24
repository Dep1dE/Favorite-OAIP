#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QStringList>
#include <string>
#include <QSet>
#include <QFile>
#include <QFileDialog>
#include <fstream>
#include <QTextStream>
#include <QTime>
#include <QDate>
#include <stdio.h>
#include <QDebug>
#include <iostream>
#include <QMessageBox>
#include "work.h"
#include "window1.h"
#include "window2.h"
#include "window3.h"


using namespace std;

class GlobalData{
private:
    QString path;
    int countrows = 0;
};


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_action_triggered();

    void on_action_3_triggered();

    void recieve(QString, QString, QString, QString, QString, QString);

    void on_action_4_triggered();

    void on_action_8_triggered();

    void on_action_7_triggered();

    void on_action_2_triggered();

    void on_tableWidget_cellChanged(int row, int column);

    void on_action_9_triggered();

private:


    Ui::MainWindow *ui;
    Window1* run;
    WIndow2* win2;
    WIndow2* window2;
    window3* win;
    bool tru;

    int srav(int, int, int, int, int, int);


    void toFile();

    void makeTable();
};
#endif // MAINWINDOW_H
