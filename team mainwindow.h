#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "help.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    game *gamepromoter;
    help w;

private slots:
    void on_startgame_clicked();

    void on_closegame_clicked();

    void on_ranklist_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
