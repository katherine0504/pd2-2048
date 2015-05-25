#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QDebug>
#include <QKeyEvent>

#include "blank.h"
namespace Ui {
class gamewindow;
}

class gamewindow : public QWidget
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = 0);
    void SetPic(blank &b);
    void init(void);
    void SetRandom();
    void GameStart(void);
    void keyPressEvent(QKeyEvent *event);
    bool Moved(void);
    void initMoveAdd(void);
    bool GameWin(void);
    bool GameOver(void);
    ~gamewindow();


private:
    Ui::gamewindow *ui;
    blank b[17];
};

#endif // GAMEWINDOW_H
