#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "window1.h"
#include <QMessageBox>



/*bool chek1(QString s);
bool chek(QString line);*/


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    run = new Window1;

    connect(run, SIGNAL(send(QString, QString, QString, QString, QString, QString)), this, SLOT(recieve(QString, QString, QString, QString, QString, QString)));

    tru = 0;
}


MainWindow::~MainWindow()
{
    delete ui;
}

int countrows=0;
QString path="";
int sizearray=0;
WORK array1[200];

void MainWindow::on_action_triggered()
{
    path = QFileDialog::getOpenFileName(this,"Выбрать файл","C:/",
                                               "All Files (*.txt)");

    tru = 0;

   QFile file(path);
        if (file.open(QIODevice::ReadOnly))
        {
            sizearray=0;
            countrows=0;
            ui->tableWidget->clear();
            bool flag=false;
            QTextStream out(&file);
            ui->tableWidget->setColumnCount(6);
            ui->tableWidget->setRowCount(countrows);
            ui->tableWidget->horizontalHeader()->resizeSection(1, 149);
            ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("ФИО"));
            ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Название проекта"));
            ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Задание"));
            ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Дедлайн"));
            ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("Дата начала"));
            ui->tableWidget->setHorizontalHeaderItem(5,new QTableWidgetItem("Дата конца"));

            QString line{};
            QString buff{};
            QString arr[6];
            int k;
            int pos = 0;
            while(!out.atEnd()){
                ++countrows;
                ui->tableWidget->setRowCount(countrows);
                line = out.readLine();

                k=0;
                pos = 0;
                for (int i = 0; i <line.length(); ++i){
                   if (line[i] == ',')
                   {
                       ui->tableWidget->setItem(countrows - 1, pos++, new QTableWidgetItem(buff));
                       arr[k++]=buff;
                       buff = "";
                       continue;
                   }

                   buff += line[i];

                   if (i == line.length()-1)
                   {
                       arr[k++]=buff;
                       ui->tableWidget->setItem(countrows - 1, pos++, new QTableWidgetItem(buff));
                       buff = "";
                       continue;
                   }

                }

                array1[sizearray++]=WORK(arr[0], arr[1],arr[2],arr[3],arr[4],arr[5]);

            }
            tru = 1;
            file.close();
        }


}







 bool flag=false;
void MainWindow::on_action_3_triggered()
{


    run->setModal(true);
    run->exec();
    if(flag){
    tru = 0;
    QFile file(path);
         if (file.open(QIODevice::ReadOnly))
         {
             countrows=0;
             ui->tableWidget->clear();
             bool flag=false;
             QTextStream out(&file);
             ui->tableWidget->setColumnCount(6);
             ui->tableWidget->setRowCount(countrows);
             ui->tableWidget->horizontalHeader()->resizeSection(1, 149);
             ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("ФИО"));
             ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Название проекта"));
             ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Задание"));
             ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Дедлайн"));
             ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("Дата начала"));
             ui->tableWidget->setHorizontalHeaderItem(5,new QTableWidgetItem("Дата конца"));

             QString line{};
             QString buff{};
             int pos = 0;
             while(!out.atEnd()){
                 ++countrows;
                 ui->tableWidget->setRowCount(countrows);
                 line = out.readLine();
                 pos = 0;
                 for (int i = 0; i <line.length(); ++i){
                    if (line[i] == ',')
                    {
                        ui->tableWidget->setItem(countrows - 1, pos++, new QTableWidgetItem(buff));
                        buff = "";
                        continue;
                    }

                    buff += line[i];

                    if (i == line.length()-1)
                    {
                        ui->tableWidget->setItem(countrows - 1, pos++, new QTableWidgetItem(buff));
                        buff = "";
                        continue;
                    }
                 }
             }
             tru = 1;
             file.close();
}
    }
}

void MainWindow::recieve(QString s1, QString s2, QString s3, QString s4, QString s5, QString s6)
{
    array1[sizearray++] = WORK(s1, s2, s3, s4, s5, s6);
    qDebug() << sizearray;
}

void MainWindow::on_action_4_triggered()
{
    tru = 0;
    int setRow = ui->tableWidget->currentRow();

    if (setRow != sizearray - 1)
    {
        for(int i = setRow; i < sizearray - 1; ++i)
        {
            array1[i] = array1[i + 1];
        }
    }

    --sizearray;

    makeTable();
    toFile();
    tru = 1;

}

void MainWindow::toFile()
{
    QFile file(path);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream fl(&file);

        for (int i = 0; i < sizearray; ++i)
        {
            fl << array1[i].getQString();
        }
    }
    file.close();
}

void MainWindow::makeTable()
{
    tru = 0;
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(sizearray);
    ui->tableWidget->horizontalHeader()->resizeSection(1, 149);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("ФИО"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Название проекта"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Задание"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Дедлайн"));
    ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("Дата начала"));
    ui->tableWidget->setHorizontalHeaderItem(5,new QTableWidgetItem("Дата конца"));

    for (int i = 0; i < sizearray; ++i)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(array1[i].getFio()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(array1[i].getName()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(array1[i].getTask()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(array1[i].getDeadline()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(array1[i].getStartDate()));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(array1[i].getFinishDate()));
    }
    tru = 1;
}

void MainWindow::on_action_8_triggered()
{
    window2 = new WIndow2;

    QDate cd = QDate::currentDate();

    for (int i = 0; i < sizearray; ++i)
    {
        //qDebug() << srav(array1[i].getStartDay(), array1[i].getStartMonth(), array1[i].getStartYear(), cd.day(), cd.month(), cd.year());
        //qDebug() << srav(array1[i].getDay(), array1[i].getMonth(), array1[i].getYear(), cd.day(), cd.month(), cd.year());

        qDebug() << array1[i].getStartDay();
        qDebug() << array1[i].getDay();

        if ((srav(array1[i].getStartDay(), array1[i].getStartMonth(), array1[i].getStartYear(), cd.day(), cd.month(), cd.year()) != 1) && ((srav(array1[i].getDay(), array1[i].getMonth(), array1[i].getYear(), cd.day(), cd.month(), cd.year()) != -1)))
        {
            window2->addItem(array1[i]);
        }
    }

    window2->show();
}

int MainWindow::srav(int day1, int month1, int year1, int day2, int month2, int year2)
{

            if (year1 < year2) return -1;
            else if (year2 < year1) return 1;

            if (month1 < month2) return -1;
            else if (month2 < month1) return 1;

            if (day1 < day2) return -1;
            else if (day2 < day1) return 1;

            return 0;
}

void MainWindow::on_action_7_triggered()
{
    win2 = new WIndow2;

    win2->addArray(array1, sizearray);
    win2->show();
}


void MainWindow::on_action_2_triggered()
{
    toFile();
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    if (tru) array1[row] = WORK(ui->tableWidget->item(row,0)->text(),ui->tableWidget->item(row,1)->text(),ui->tableWidget->item(row,2)->text(),ui->tableWidget->item(row,3)->text(),ui->tableWidget->item(row,4)->text(),ui->tableWidget->item(row,5)->text());
}



void MainWindow::on_action_9_triggered()
{
    win = new window3;

    for (int i = 0; i < sizearray; ++i)
        win->addItem(array1[i]);

    win->show();
}


/*bool chek(QString line){
    bool fl = false;
    int count = 0;
    QString buf = "";
    for(int i = 0; i < line.length();i++){
        if(line[i] != ',' && count < 3){
            count++;
            continue;
        }

        if((line[i] != ',' || line[i] != ' ') && count >= 3){
           buf+=line[i];

        }
        else if (line[i] == ','){
            qDebug() << buf;
          if(chek1(buf)){
              fl = true;
              ++i;
              buf = "";
              continue;
          }
          else{
              fl = false;
              return fl;
          }

        }
    }
    return fl;
}
*/
/*bool chek1(QString s){
    QString text, s1;
    bool flag1= false, flag2=false;
    for(int i=0;i<s.size();i++){
        if((s[i]>='0' && s[i]<='9')||s[i]=='.' || s[i]==' ' || s[i]=='\0' || s[i]=='\n' || s[i]=='\xd'){
            flag2=true;
        }
        else{
            flag2=false;

            break;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
        s1+=s[i];
        }
        if(s1.size()==10){
            int day = (s1.mid(0, 2)).toInt();
            int month= (s1.mid(3, 2)).toInt();
            int year= (s1.mid(6, 4)).toInt();
            if(year<0 || year>9999){
                flag1=false;
                break;
            }
            else{
                if(month<1 || month >12){
                    flag1=false;
                    break;
                }
                else{
                    if (year % 4 == 0 || year % 100 == 0 || year % 400==0) {
                        int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                        if(day<1 || day>months[month-1]){
                            flag1=false;
                            break;
                        }
                        else{
                            flag1=true;
                        }
                    }
                    else {
                        int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                        if(day<1 || day>months[month-1]){
                            flag1=false;
                            break;
                        }
                        else{
                            flag1=true;
                        }
                    }
                }
            }
            s1="";
        }
    }
    if(flag1==true && flag2==true){
        return true;
    }
    else{
        return false;
    }
}*/
