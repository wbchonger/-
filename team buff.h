#ifndef BUFF_H
#define BUFF_H

#include <QWidget>

#include <game.h>

namespace Ui {
class buff;
}

class buff : public QWidget
{
    Q_OBJECT

public:
    explicit buff(QWidget *parent = 0);
    ~buff();

    int bufftype1;
    int bufftype2;

private slots:

    void on_buff1_clicked();

    void on_buff2_clicked();

private:
    Ui::buff *ui;
};

#endif // BUFF_H
