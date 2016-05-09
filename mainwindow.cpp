#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "boothcore.h"
#include "string"
#include <iostream>

#define ADD 1
#define SUB 2
#define NOOP 0

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->Multiplicand_dec->setText("-127");
    ui->Multiplier_dec->setText("127");
    ui->tableWidget->setColumnWidth(0,77);
    ui->tableWidget->setColumnWidth(1,60);
    ui->tableWidget->setColumnWidth(2,60);
    ui->tableWidget->setColumnWidth(3,25);
    ui->tableWidget->setColumnWidth(4,105);
    ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    string op;
    QString product;
    ui->tableWidget->setRowCount(16);
    int s2d=0;
    qminus=0;
    ac=0;
    mc=ui->Multiplicand_dec->text().toInt();
    m=ui->Multiplier_dec->text().toInt();

    string mcand="";
    boothcore b(ui->Multiplicand_dec->text().toInt(),ui->Multiplier_dec->text().toInt());
    int i;
    for(i=0;i<=7;i++){
        mcand=mcand+char((b.multiplicandbits[i]+48));
    }
    ui->Multiplicand_bin->setText(QString::fromStdString(mcand));

    ui->Result_dec->setText(QString("%1").arg(mc*m));
    string mplier="";
    for(i=0;i<=7;i++){
        mplier=mplier+char((b.multiplierbits[i]+48));
    }
    while(s2d<=15){


        if(s2d%2==1){

            QTableWidgetItem *item1=new QTableWidgetItem(QString("SHIFT"));
            ui->tableWidget->setItem(s2d,0,item1);
            sr();


        }
        else{
            int opcode=opset();
            if(opcode==ADD){
                QTableWidgetItem *item1=new QTableWidgetItem(QString("ADD"));
                ui->tableWidget->setItem(s2d,0,item1);
                add();
            }
            else if(opcode==SUB){
                QTableWidgetItem *item1=new QTableWidgetItem(QString("SUB"));
                ui->tableWidget->setItem(s2d,0,item1);
                sub();
            }
            else{
                QTableWidgetItem *item1=new QTableWidgetItem(QString("NO OP"));
                ui->tableWidget->setItem(s2d,0,item1);
            }
        }
        QString i2=QString("");
        b.tobinary(ac,b.extrabits);
        for(i=0;i<=7;i++){
            i2=i2+char((b.extrabits[i]+48));
        }
        QTableWidgetItem *item2=new QTableWidgetItem(i2);
        ui->tableWidget->setItem(s2d,1,item2);



        QString i3= QString("");
        b.tobinary(m,b.extrabits);
        for(i=0;i<=7;i++){
            i3=i3+char((b.extrabits[i]+48));
        }
        QTableWidgetItem *item3=new QTableWidgetItem(i3);
        ui->tableWidget->setItem(s2d,2,item3);


        QString i4= QString::number(qminus);
        QTableWidgetItem *item4=new QTableWidgetItem(i4);
        ui->tableWidget->setItem(s2d,3,item4);

        QString i5=i2+i3;
        QTableWidgetItem *item5=new QTableWidgetItem(i5);

        ui->tableWidget->setItem(s2d,4,item5);

        product = i5;


        s2d++;

    }



    ui->Multiplier_bin->setText(QString::fromStdString(mplier));
    ui->Result_bin->setText(QString::fromStdString(product.toStdString()));
}

int MainWindow::opset(){
    m=m&255;
    int temp=(m)&1;

    if(temp==1&&qminus==0)return SUB;
    if(temp==0&&qminus==1)return ADD;
    return NOOP;
}

void MainWindow::sr(){
    qminus=m%2;
    int sign;


    sign=(ac>>7)&1;



    m=m>>1;
    if(ac%2)m=m+128;
    ac=ac>>1;
    if(sign)ac=ac+128;
}

void MainWindow::add(){
    ac=(ac+mc)&255;
}
void MainWindow::sub(){
    ac=(ac-mc)&255;
}

