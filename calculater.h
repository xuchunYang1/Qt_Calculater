#ifndef CALCULATER_H
#define CALCULATER_H

#include <QWidget>

namespace Ui {
class Calculater;
}

class Calculater : public QWidget
{
    Q_OBJECT

public:
    explicit Calculater(QWidget *parent = 0);
    ~Calculater();

private slots:
    void on_pushButton_num0_clicked();

    void on_pushButton_num1_clicked();

    void on_pushButton_num2_clicked();

    void on_pushButton_num3_clicked();

    void on_pushButton_num4_clicked();

    void on_pushButton_num5_clicked();

    void on_pushButton_num6_clicked();

    void on_pushButton_num7_clicked();

    void on_pushButton_num8_clicked();

    void on_pushButton_num9_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_equ_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::Calculater *ui;



    QString m_expression;

    void calcuNum(QString num);
};

#endif // CALCULATER_H
