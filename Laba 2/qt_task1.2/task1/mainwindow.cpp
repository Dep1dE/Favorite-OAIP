#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sandaliWindow = new pushbackelement;

    connect(sandaliWindow, SIGNAL(sendIformation(const Value &)), this, SLOT(recieveInformation(const Value &)));
    dw = new deletewindow;

    connect(dw, SIGNAL(sendIndex(const int &)), this, SLOT(deleteElement(const int &)));

    nc = new numberchenget;

    connect(nc, SIGNAL(sendIndex(const int &)), this, SLOT(numchenge(const int &)));

    ch = new change;

    connect(ch, SIGNAL(sendIformation(const Value &)), this, SLOT(changeElem(const Value &)));

    ni= new nameinfo;

    connect(ni, SIGNAL(sendName(const QString &)), this, SLOT(showname(const QString)));

    di=new dateinfo;
    connect(di, SIGNAL(sendDate(const QString &)), this, SLOT(showDate(const QString)));

    ci=new costinfo;

    connect(ci, SIGNAL(sendCost(const QString &)), this, SLOT(showCost(const QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    path = QFileDialog::getOpenFileName(this,"Выбрать файл","C:/",
                                                "All Files (*.txt)");
    QFile file(path);
         if (file.open(QIODevice::ReadOnly))
         {
             int k=0;
             Count=0;
             Count++;
             ui->textBrowser->clear();
             QString text;
              QTextStream out(&file);
              //l = new list;
               while(!out.atEnd()){
                   text=out.readLine();
                   if(k==0){
                       v.setName(text);
                       k++;
                   }
                   else if(k==1){
                       v.setCount(text.toInt());
                       k++;
                   }
                   else if(k==2){
                       v.setCost(text.toInt());
                       k++;
                   }
                   else if(k==3){
                       v.setDate(text);
                       k=0;
                       l.pushback(v);

                       Count++;
                   }
               }
               file.close();
         }
     makeTablo();
 }
void MainWindow::makeTablo()
{
    ui->textBrowser->clear();
    for (int i = 0; i < l.getCapacity(); ++i)
    {
        ui->textBrowser->append("------------------------------");
        ui->textBrowser->append(QString::number(i + 1)+":");
        ui->textBrowser->append("  *"+l.arr[i].value.getName());
        ui->textBrowser->append("  *"+QString::number(l.arr[i].value.getCount()));
        ui->textBrowser->append("  *"+QString::number(l.arr[i].value.getCost()));
        ui->textBrowser->append("  *"+l.arr[i].value.getDate());
    }
}


void MainWindow::on_action_2_triggered()
{
    QFile file(path);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream fl(&file);

        for (int i = 0; i <l.getCapacity(); ++i)
        {
            fl<<l.arr[i].value.getName()<<'\n'<<l.arr[i].value.getCount()<<'\n'<<l.arr[i].value.getCost()<<'\n'<<l.arr[i].value.getDate()<<'\n';
        }
    }
    file.close();
}


void MainWindow::on_action_3_triggered()
{
    makeTablo();
}

void MainWindow::recieveInformation(const Value &v)
{
    l.pushback(v);
    makeTablo();
}


void MainWindow::on_action_4_triggered()
{
    sandaliWindow->show();
}


void MainWindow::on_action_5_triggered()
{
    dw->addSize(l.getCapacity());
    dw->show();
}

void MainWindow::deleteElement(const int &n)
{
    l.remove(n-1);

    makeTablo();
}


void MainWindow::on_action_6_triggered()
{
    nc->addSize(l.getCapacity());
    nc->show();
}

void MainWindow::numchenge(const int &n)
{
    nt=n - 1;
    ch->show();
}

void MainWindow::changeElem(const Value &v)
{
    l.changeElement(nt, v);
    makeTablo();

}


void MainWindow::on_action_7_triggered()
{
    ni->show();
}

void MainWindow::showname(const QString &s)
{
    int col=0;
    ui->textBrowser->clear();
    for(int i=0; i<l.getCapacity();i++){
        if(l.arr[i].value.getName()==s){
            ui->textBrowser->append("------------------------------");
            ui->textBrowser->append(QString::number(col + 1)+":");
            ui->textBrowser->append("  *"+l.arr[i].value.getName());
            ui->textBrowser->append("  *"+QString::number(l.arr->value.getCount()));
            ui->textBrowser->append("  *"+QString::number(l.arr->value.getCost()));
            ui->textBrowser->append("  *"+l.arr->value.getDate());
            col++;
        }
    }
}

int MainWindow::Duration(QString filedata, QString randomdate){
    int day1 = (filedata.mid(0, 2)).toInt();
    int month1 = (filedata.mid(3, 2)).toInt();
    int year1 = (filedata.mid(6, 4)).toInt();
    int day2 = (randomdate.mid(0, 2)).toInt();
    int month2 = (randomdate.mid(3, 2)).toInt();
    int year2 = (randomdate.mid(6, 4)).toInt();
    int count1=0, count2=0,count=0;

    for (int i = 0; i < year1; i++) {
        if (i % 4 == 0 || i % 100 == 0 || i % 400 == 0) {
            count1 += 366;
        }
        else {
            count1 += 365;
        }
    }
    if (year1 % 4 == 0 || year1 % 100 == 0 || year1 % 400 == 0) {
        int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
        for (int i = 0; i < month1; i++) {
            count1 += months[i];
        }
    }
    else {
        int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        for (int i = 0; i < month1; i++) {
            count1 += months[i];
        }
    }
    count1 += day1;

    for (int i = 0; i < year2; i++) {
        if (i % 4 == 0 || i % 100 == 0 || i % 400 == 0) {
            count2 += 366;
        }
        else {
            count2 += 365;
        }
    }
    if (year2 % 4 == 0 || year2 % 100 == 0 || year2 % 400 == 0) {
        int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
        for (int i = 0; i < month2; i++) {
            count2 += months[i];
        }
    }
    else {
        int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        for (int i = 0; i < month2; i++) {
            count2 += months[i];
        }
    }
    count2 += day2;
    count = abs(count2-count1);
    return count;
}

void MainWindow::showDate(const QString &s)
{
    QDate cd = QDate::currentDate();
    QString qs = cd.toString("dd.MM.yyyy");
    int col=0;
    ui->textBrowser->clear();
    for(int i=0; i<l.getCapacity();i++){
        int k=Duration(l.arr[i].value.getDate(), qs);
        if(k>=s.toInt()){
            ui->textBrowser->append("------------------------------");
            ui->textBrowser->append(QString::number(col + 1)+":");
            ui->textBrowser->append("  *"+l.arr[i].value.getName());
            ui->textBrowser->append("  *"+QString::number(l.arr[i].value.getCount()));
            ui->textBrowser->append("  *"+QString::number(l.arr[i].value.getCost()));
            ui->textBrowser->append("  *"+l.arr[i].value.getDate());
            col++;
        }
    }
}

void MainWindow::on_action_8_triggered()
{
    di->show();
}


void MainWindow::on_action_9_triggered()
{
    ci->show();
}

void MainWindow::showCost(const QString &s)
{
    int col=0;
    ui->textBrowser->clear();
    for(int i=0; i<l.getCapacity();i++){
        if(s.toInt()>=l.arr[i].value.getCost()){
            ui->textBrowser->append("------------------------------");
            ui->textBrowser->append(QString::number(col + 1)+":");
            ui->textBrowser->append("  *"+l.arr[i].value.getName());
            ui->textBrowser->append("  *"+QString::number(l.arr[i].value.getCount()));
            ui->textBrowser->append("  *"+QString::number(l.arr[i].value.getCost()));
            ui->textBrowser->append("  *"+l.arr[i].value.getDate());
            col++;
        }
    }
}


void MainWindow::on_action_10_triggered()
{
    l.mergeSortCost(0, l.getCapacity() - 1);

    makeTablo();
}

