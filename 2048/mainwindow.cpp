#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_Start, SIGNAL(click()),
            this, SLOT(on_pushButton_Start_clicked()) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{
    GameWindow.show();
    this->close();
    GameWindow.GameStart();

}
