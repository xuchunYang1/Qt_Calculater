#include "calculater.h"
#include "ui_calculater.h"
#include <QDebug>

Calculater::Calculater(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculater)
{
    ui->setupUi(this);
    on_pushButton_clear_clicked();
}

Calculater::~Calculater()
{
    delete ui;
}

void Calculater::on_pushButton_num0_clicked()
{
    calcuNum("0");
}

void Calculater::on_pushButton_num1_clicked()
{
    calcuNum("1");
}

void Calculater::on_pushButton_num2_clicked()
{
    calcuNum("2");
}

void Calculater::on_pushButton_num3_clicked()
{
    calcuNum("3");
}

void Calculater::on_pushButton_num4_clicked()
{
    calcuNum("4");
}

void Calculater::on_pushButton_num5_clicked()
{
    calcuNum("5");
}

void Calculater::on_pushButton_num6_clicked()
{
    calcuNum("6");
}

void Calculater::on_pushButton_num7_clicked()
{
    calcuNum("7");
}

void Calculater::on_pushButton_num8_clicked()
{
    calcuNum("8");
}

void Calculater::on_pushButton_num9_clicked()
{
    calcuNum("9");
}

void Calculater::on_pushButton_point_clicked()
{
    calcuNum(".");
}

void Calculater::on_pushButton_add_clicked()
{
    calcuNum(" + ");
}

void Calculater::on_pushButton_sub_clicked()
{
    calcuNum(" - ");
}

void Calculater::on_pushButton_mul_clicked()
{
    calcuNum(" * ");
}

void Calculater::on_pushButton_div_clicked()
{
   calcuNum(" / ");
}

void Calculater::on_pushButton_equ_clicked()
{

//    QStringList list = m_expression.split(" ");
//    int result = list.at(0).toInt();
//    for (int i = 1; i < list.size(); i += 2)  //1+2*3 = 9;
//    {
//        if (list.at(i) == "+")
//        {
//            result += list.at(i+1).toInt();
//        }
//        else if (list.at(i) == "-")
//        {
//            result -= list.at(i+1).toInt();
//        }
//        else if (list.at(i) == "*")
//        {
//            result *= list.at(i+1).toInt();
//        }
//        else if (list.at(i) == "/")
//        {
//            result /= list.at(i + 1).toInt();
//        }
//    }

    QStringList listAll = m_expression.split(" ");
    QStringList listTemp;

    int temp = listAll.at(0).toInt();

    for (int i = 1; i < listAll.length(); i += 2)
    {
        if (listAll.at(i) == "+" || listAll.at(i) == "-")
        {
            listTemp.append(QString::number(temp));
            listTemp.append(listAll.at(i));
            temp = listAll.at( i + 1 ).toInt();
        }
        else if (listAll.at(i) == "*")
        {
            temp *= listAll.at(i + 1).toInt();
        }
        else if (listAll.at(i) == "/")
        {
            temp /= listAll.at(i + 1).toInt();
        }
    }

    listTemp.append(QString::number(temp));

    int result = listTemp.at(0).toInt();
    for (int i = 1; i < listTemp.length(); i += 2)
    {
        if (listTemp.at(i) == "+")
        {
            result += listTemp.at(i + 1).toInt();
        }
        else if (listTemp.at(i) == "-")
        {
            result -= listTemp.at(i + 1).toInt();
        }
    }

    ui->label_result->setText(QString::number(result));
    m_expression.clear();
    listAll.clear();
    listTemp.clear();
}

void Calculater::on_pushButton_clear_clicked()
{
   ui->label_expression->setText("0");
   ui->label_result->setText("0");
   m_expression.clear();
}

void Calculater::calcuNum(QString num)
{
    m_expression += num;
    ui->label_expression->setText(m_expression);
}
