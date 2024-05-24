#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
#include <QFile>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    QString text,s,s1;
    path = QFileDialog::getOpenFileName(this,"Выбрать файл","C:/",
                                               "All Files (*.h *.cpp)");
   QFile file(path);
   if(file.open(QIODevice::ReadOnly))
       {
           bool flag=false;
           QTextStream out(&file);
           s = out.readAll();
              ui->textEdit->setText(s);

       }
}


void MainWindow::on_pushButton_clicked()
{
    String mainstr(ui->textEdit->toPlainText().toStdString().c_str());
    int k=ui->comboBox->currentIndex();
    String str;
    switch (k) {
    case 0:
    {
        QString boof="";
        String t[32] = { String("unsigned\\s+long\\s+long"), String("unsigned\\s+long"), String("unsigned\\s+int"), String("long\\s+double"),
                               String("long\\s+long"), String("float"), String("double"), String("long"), String("char"), String("bool"), String("const\\s+bool"),
                               String("size_t"), String("std::size_t"), String("short"), String("int"), String("auto"), String("void"), String("const\\s+void"),
                               String("const\\s+unsigned\\s+long\\s+long"), String("const\\s+unsigned\\s+long"), String("const\\s+unsigned\\s+int"), String("const\\s+long\\s+double"),
                               String("const\\s+long\\s+long"), String("const\\s+float"), String("const\\s+double"), String("const\\s+long"), String("const\\s+char"),
                               String("const\\s+size_t"), String("const\\s+std::size_t"), String("const\\s+short"), String("const\\s+int"), String("const\\s+auto") };
        qDebug()<<QString(mainstr.c_str());
        for(int i=0; i<mainstr.Size();++i){

            if(mainstr[i]=='\n' || i == mainstr.Size() - 1){

                qDebug()<<QString(str.c_str());

                for (int j = 0; j < 32; ++j) {
                    if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*" + t[j].to_string() + "\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*[^()]*.*;$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str());
                    }
                }
                str.clear();
            }
            str+=mainstr[i];
        }
        ui->textBrowser->setText(boof);
        break;}
    case 1:
    {
        QString boof="";
        for(int i=0; i<mainstr.Size();++i){

            if(mainstr[i]=='\n' || i == mainstr.Size() - 1){

                qDebug()<<QString(str.c_str());

                    if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*class\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*.*$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str());

                }
                    else if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*struct\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*.*$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str());

                }
                    else if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*arr\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*\\[.*$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str());

                }
                str.clear();
            }
            str+=mainstr[i];
        }
        ui->textBrowser->setText(boof);
    }
        break;
    case 2:
    {
        QString boof="";
        String t[32] = { String("unsigned\\s+long\\s+long"), String("unsigned\\s+long"), String("unsigned\\s+int"), String("long\\s+double"),
                               String("long\\s+long"), String("float"), String("double"), String("long"), String("char"), String("bool"), String("const\\s+bool"),
                               String("size_t"), String("std::size_t"), String("short"), String("int"), String("auto"), String("void"), String("const\\s+void"),
                               String("const\\s+unsigned\\s+long\\s+long"), String("const\\s+unsigned\\s+long"), String("const\\s+unsigned\\s+int"), String("const\\s+long\\s+double"),
                               String("const\\s+long\\s+long"), String("const\\s+float"), String("const\\s+double"), String("const\\s+long"), String("const\\s+char"),
                               String("const\\s+size_t"), String("const\\s+std::size_t"), String("const\\s+short"), String("const\\s+int"), String("const\\s+auto") };
        qDebug()<<QString(mainstr.c_str());
        for(int i=0; i<mainstr.Size();++i){

            if(mainstr[i]=='\n' || i == mainstr.Size() - 1){

                qDebug()<<QString(str.c_str());

                for (int j = 0; j < 32; ++j) {
                    if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*" + t[j].to_string() + "\\s*[\\*\\&]*\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*\\(.*$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str());
                    }
                }
                str.clear();
            }
            str+=mainstr[i];
        }
        ui->textBrowser->setText(boof);
        break;}
    case 3:
    {
        int y=0;
        QString boof="";
        for(int i=0; i<mainstr.Size();++i){

            if(mainstr[i]=='\n' || i == mainstr.Size() - 1){
                y++;
                qDebug()<<QString(str.c_str());

                    if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*=.*$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str())+" "+"("+QString::number(y)+" строка)";

                }
                    else if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*[a-zA-Z][a-zA-Z0-9_]*\\[[a-zA-Z]*\\]\\s*=.*$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str())+" "+"("+QString::number(y)+" строка)"    ;

                }
                str.clear();
            }
            str+=mainstr[i];
        }
        ui->textBrowser->setText(boof);
    }
        break;
        break;
    case 4:
    {
        int y=0;
        int r=0;
        QString boof="";
        String t[32] = { String("unsigned\\s+long\\s+long"), String("unsigned\\s+long"), String("unsigned\\s+int"), String("long\\s+double"),
                               String("long\\s+long"), String("float"), String("double"), String("long"), String("char"), String("bool"), String("const\\s+bool"),
                               String("size_t"), String("std::size_t"), String("short"), String("int"), String("auto"), String("void"), String("const\\s+void"),
                               String("const\\s+unsigned\\s+long\\s+long"), String("const\\s+unsigned\\s+long"), String("const\\s+unsigned\\s+int"), String("const\\s+long\\s+double"),
                               String("const\\s+long\\s+long"), String("const\\s+float"), String("const\\s+double"), String("const\\s+long"), String("const\\s+char"),
                               String("const\\s+size_t"), String("const\\s+std::size_t"), String("const\\s+short"), String("const\\s+int"), String("const\\s+auto") };
        qDebug()<<QString(mainstr.c_str());
        for(int i=0; i<mainstr.Size();++i){
            if(mainstr[i]=='{'){
                r++;
            }
            else if(mainstr[i]=='}'){
                r--;
            }
            if(mainstr[i]=='\n' || i == mainstr.Size() - 1){
                y++;
                qDebug()<<QString(str.c_str());
                 if(r!=0){
                for (int j = 0; j < 32; ++j) {
                    if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*" + t[j].to_string() + "\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*[^()]*.*;$"))){
                        qDebug()<<11;
                        boof+=QString(str.c_str())+" "+"("+QString::number(y)+" строка)" ;
                    }
                }}
                str.clear();
            }
            str+=mainstr[i];
        }
        ui->textBrowser->setText(boof);
        break;}
    case 5:
    {

        QString boof="";
        QString BOOF="";
        String t[32] = { String("unsigned\\s+long\\s+long"), String("unsigned\\s+long"), String("unsigned\\s+int"), String("long\\s+double"),
                               String("long\\s+long"), String("float"), String("double"), String("long"), String("char"), String("bool"), String("const\\s+bool"),
                               String("size_t"), String("std::size_t"), String("short"), String("int"), String("auto"), String("void"), String("const\\s+void"),
                               String("const\\s+unsigned\\s+long\\s+long"), String("const\\s+unsigned\\s+long"), String("const\\s+unsigned\\s+int"), String("const\\s+long\\s+double"),
                               String("const\\s+long\\s+long"), String("const\\s+float"), String("const\\s+double"), String("const\\s+long"), String("const\\s+char"),
                               String("const\\s+size_t"), String("const\\s+std::size_t"), String("const\\s+short"), String("const\\s+int"), String("const\\s+auto") };
        qDebug()<<QString(mainstr.c_str());
        for(int i=0; i<mainstr.Size();++i){

            if(mainstr[i]=='\n' || i == mainstr.Size() - 1){

                qDebug()<<QString(str.c_str());

                for (int j = 0; j < 32; ++j) {
                    if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*" + t[j].to_string() + "\\s*[\\*\\&]*\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*\\(.*$"))&&BOOF==str.c_str()){
                        qDebug()<<11;
                        boof+=QString(str.c_str());
                    }
                    else if(std::regex_match(std::string(str.c_str()), std::regex("^\\s*" + t[j].to_string() + "\\s*[\\*\\&]*\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*\\(.*$"))){
                            BOOF=str.c_str();
                }
                }

                str.clear();
            }
            str+=mainstr[i];
        }
        ui->textBrowser->setText(boof);
        break;}

    default:
        break;
    }
}

