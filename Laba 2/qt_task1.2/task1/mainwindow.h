#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "list.h"
#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include "pushbackelement.h"
#include "list.h"
#include "deletewindow.h"
#include "numberchenget.h"
#include "change.h"
#include "nameinfo.h"
#include "dateinfo.h"
#include "costinfo.h"


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

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void recieveInformation(const Value &);

    void deleteElement(const int &);

    void changeElem(const Value &);

    void numchenge(const int &);

    int Duration(QString, QString);

    void showDate(const QString &);

    void showname(const QString &);

    void showCost(const QString &);

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

    void on_action_8_triggered();

    void on_action_9_triggered();

    void on_action_10_triggered();

private:
    Ui::MainWindow *ui;
    Value v;
    list l;
    QString path="";
    int Count=0;
    void makeTablo();
    pushbackelement* sandaliWindow;
    deletewindow* dw;
    numberchenget* nc;
    int nt;
    change* ch;
    nameinfo* ni;
    dateinfo* di;
    costinfo* ci;


};
#endif // MAINWINDOW_H
