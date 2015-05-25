#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gamewindow.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Start_clicked();

private:
    Ui::MainWindow *ui;
    gamewindow GameWindow;
};

#endif // MAINWINDOW_H
