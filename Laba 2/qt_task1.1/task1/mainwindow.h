#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include "list.h"
#include <QDebug>
#include "pushbackelement.h"
#include "deletewindow.h"
#include "numberchenget.h"
#include "change.h"
#include "fioinfo.h"
#include "otdelinfo.h"
#include "dateinfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    int Duration(QString filedata, QString randomdate);
private slots:

    void on_action_10_triggered();

    void on_action_triggered();

    void recieveInformation(const Value &);

    void on_action_11_triggered();

    void on_action_2_triggered();

    void deleteElement(const int &);

    void numchenge(const int &);

    void changeElem(const Value &);

    void showfio(const QString &);

    void showOtdel(const QString &);

    void showDate(const QString &);


    void on_action_3_triggered();

    void on_action_6_triggered();

    void on_action_9_triggered();

    void on_action_7_triggered();

    void on_action_4_triggered();

    void on_action_13_triggered();

    void on_action_5_triggered();

    void on_action_14_triggered();

    void on_action_8_triggered();

private:
    int Count=0;
    Value v;
    list* l;
    QString path="";
    Ui::MainWindow *ui;
    pushBackElement* sandaliWindow;
    deletewindow* dw;
    numberchenget* nc;
    change* ch;
    int nt;
    void makeTablo();
    fioInfo* fi;
    otdelinfo* oi;
    dateinfo* di;
};
#endif // MAINWINDOW_H
