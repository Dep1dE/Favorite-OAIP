#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sandaliWindow = new pushBackElement;

    connect(sandaliWindow, SIGNAL(sendIformation(const Value &)), this, SLOT(recieveInformation(const Value &)));

    dw = new deletewindow;

    connect(dw, SIGNAL(sendIndex(const int &)), this, SLOT(deleteElement(const int &)));

    nc = new numberchenget;

    connect(nc, SIGNAL(sendIndex(const int &)), this, SLOT(numchenge(const int &)));

    ch = new change;

    connect(ch, SIGNAL(sendIformation(const Value &)), this, SLOT(changeElem(const Value &)));

    fi= new fioInfo;

    connect(fi, SIGNAL(sendFio(const QString &)), this, SLOT(showfio(const QString)));

    oi=new otdelinfo;

    connect(oi, SIGNAL(sendOtdel(const QString &)), this, SLOT(showOtdel(const QString)));
    di=new dateinfo;
    connect(di, SIGNAL(sendDate(const QString &)), this, SLOT(showDate(const QString)));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_10_triggered()
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
             l = new list;
              while(!out.atEnd()){
                  text=out.readLine();
                  if(k==0){
                      v.setFio(text);
                      k++;
                  }
                  else if(k==1){
                      v.setNumberOfOtdel(text.toInt());
                      k++;
                  }
                  else if(k==2){
                      v.setDoljnost(text);
                      k++;
                  }
                  else if(k==3){
                      v.setDate(text);
                      k=0;
                      l->push_back(v);

                      Count++;
                  }
              }
              file.close();
        }
    makeTablo();
}


void MainWindow::on_action_triggered()
{
    sandaliWindow->show();
}

void MainWindow::recieveInformation(const Value &v)
{
    l->push_back(v);

    for(int i=0; i<l->Size();++i){
       l->print();
    }

    makeTablo();
}



void MainWindow::makeTablo()
{
    ui->textBrowser->clear();
    for (int i = 0; i < l->Size(); ++i)
    {
        ui->textBrowser->append("------------------------------");
        ui->textBrowser->append(QString::number(i + 1)+":");
        ui->textBrowser->append("  *"+l->getElement(i)->value.getFio());
        ui->textBrowser->append("  *"+QString::number(l->getElement(i)->value.getNumberOfOtdel()));
        ui->textBrowser->append("  *"+l->getElement(i)->value.getDoljnost());
        ui->textBrowser->append("  *"+l->getElement(i)->value.getDate());
    }
}


void MainWindow::on_action_11_triggered()
{
    QFile file(path);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream fl(&file);

        for (int i = 0; i <l->Size(); ++i)
        {
            fl<<l->getElement(i)->value.getFio()<<'\n'<<l->getElement(i)->value.getNumberOfOtdel()<<'\n'<<l->getElement(i)->value.getDoljnost()<<'\n'<<l->getElement(i)->value.getDate()<<'\n';
        }
    }
    file.close();
}


void MainWindow::on_action_2_triggered()
{
    dw->addSize(l->Size());
    dw->show();
}

void MainWindow::deleteElement(const int &n)
{
    l->remove(n - 1);

    makeTablo();
}


void MainWindow::on_action_3_triggered()
{
    nc->addSize(l->Size());
    nc->show();
}

void MainWindow::numchenge(const int &n)
{
    nt=n - 1;
    ch->show();
}

void MainWindow::changeElem(const Value &v)
{
    l->changeElement(nt, v);
    makeTablo();

}

void MainWindow::showfio(const QString &s)
{
    int col=0;
    ui->textBrowser->clear();
    for(int i=0; i<l->Size();i++){
        if(l->getElement(i)->value.getFio()==s){
            ui->textBrowser->append("------------------------------");
            ui->textBrowser->append(QString::number(col + 1)+":");
            ui->textBrowser->append("  *"+l->getElement(i)->value.getFio());
            ui->textBrowser->append("  *"+QString::number(l->getElement(i)->value.getNumberOfOtdel()));
            ui->textBrowser->append("  *"+l->getElement(i)->value.getDoljnost());
            ui->textBrowser->append("  *"+l->getElement(i)->value.getDate());
            col++;
        }
    }
}

void MainWindow::showOtdel(const QString &s)
{
    int col=0;
    ui->textBrowser->clear();
    for(int i=0; i<l->Size();i++){
        if(l->getElement(i)->value.getNumberOfOtdel()==s.toInt()){
            ui->textBrowser->append("------------------------------");
            ui->textBrowser->append(QString::number(col + 1)+":");
            ui->textBrowser->append("  *"+l->getElement(i)->value.getFio());
            ui->textBrowser->append("  *"+QString::number(l->getElement(i)->value.getNumberOfOtdel()));
            ui->textBrowser->append("  *"+l->getElement(i)->value.getDoljnost());
            ui->textBrowser->append("  *"+l->getElement(i)->value.getDate());
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
    for(int i=0; i<l->Size();i++){
        int k=Duration(l->getElement(i)->value.getDate(), qs);
        if(k>=s.toInt()){
            ui->textBrowser->append("------------------------------");
            ui->textBrowser->append(QString::number(col + 1)+":");
            ui->textBrowser->append("  *"+l->getElement(i)->value.getFio());
            ui->textBrowser->append("  *"+QString::number(l->getElement(i)->value.getNumberOfOtdel()));
            ui->textBrowser->append("  *"+l->getElement(i)->value.getDoljnost());
            ui->textBrowser->append("  *"+l->getElement(i)->value.getDate());
            col++;
        }
    }
}





void MainWindow::on_action_4_triggered()
{
    fi->show();
}


void MainWindow::on_action_13_triggered()
{
    makeTablo();
}


void MainWindow::on_action_5_triggered()
{
    oi->show();

}


void MainWindow::on_action_14_triggered()
{
    di->show();
}


void MainWindow::on_action_6_triggered()
{
    l->first = l->mergeSortFio(l->first);
    makeTablo();
}

void MainWindow::on_action_7_triggered()
{
    l->first = l->mergeSortOtdel(l->first);
    makeTablo();

}


void MainWindow::on_action_8_triggered()

{
    l->first = l->mergeSortDoljnost(l->first);
    makeTablo();

}


void MainWindow::on_action_9_triggered()
{
    makeTablo();
}

