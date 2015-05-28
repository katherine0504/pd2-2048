#include "gamewindow.h"
#include "ui_gamewindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    //設定背景為白色
    this->setStyleSheet("background-color: white;");

}

//設定每個位置的圖片
void gamewindow::SetPic(blank & b)
{
    //先找到位置 再找他的數字 開啟對應圖片
    switch (b.position)
    {
    case 1:
        switch (b.number)
        {
            case 0:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B1->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;


        }
        break;

    case 2:
        switch (b.number)
        {
            case 0:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B2->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 3:
        switch (b.number)
        {
            case 0:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B3->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 4:
        switch (b.number)
        {
            case 0:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B4->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 5:
        switch (b.number)
        {
            case 0:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B5->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 6:
        switch (b.number)
        {
            case 0:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B6->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 7:
        switch (b.number)
        {
            case 0:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B7->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 8:
        switch (b.number)
        {
            case 0:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B8->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 9:
        switch (b.number)
        {
            case 0:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B9->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 10:
        switch (b.number)
        {
            case 0:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B10->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 11:
        switch (b.number)
        {
            case 0:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B11->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 12:
        switch (b.number)
        {
            case 0:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B12->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 13:
        switch (b.number)
        {
            case 0:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B13->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 14:
        switch (b.number)
        {
            case 0:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B14->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 15:
        switch (b.number)
        {
            case 0:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B15->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;

    case 16:
        switch (b.number)
        {
            case 0:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/0.jpg"));
                break;

            case 2:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/2.jpg"));
                break;

            case 4:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/4.jpg"));
                break;

            case 8:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/8.jpg"));
                break;

            case 16:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/16.jpg"));
                break;

            case 32:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/32.jpg"));
                break;

            case 64:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/64.jpg"));
                break;

            case 128:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/128.jpg"));
                break;

            case 256:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/256.jpg"));
                break;

            case 512:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/512.jpg"));
                break;

            case 1024:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/1024.jpg"));
                break;

            case 2048:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/2048.jpg"));
                break;

            case 4096:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/4096.jpg"));
                break;

            case 8192:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/8192.jpg"));
                break;

            case 16384:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/16384.jpg"));
                break;

            case 32768:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/32768.jpg"));
                break;

            case 65536:
                ui->B16->setPixmap(QPixmap(":/pic/PIC/65536.jpg"));
                break;
        }
        break;
    }
    return;
}

//初始化
void gamewindow::init()
{
    for (int i=0; i<17; i++)
    {
        score=0;
        check= true;
        win= true;
        b[i].number=0;
        b[i].position=i;
        SetPic(b[i]);
        b[i].isMoved= false;
        b[i].isAdded= false;
    }
    return;
}

//讓他隨機產一個2或4的位置
void gamewindow::SetRandom(void)
{
    while(1)
    {
        int a= rand()%16+1;
        int x= rand()%2+1;
        int num= 2*x;

        if (b[a].number == 0)
        {
            b[a].number=num;
            SetPic(b[a]);
            return;
        }
    }
}

//遊戲開始
void gamewindow::GameStart()
{
    ui->WIN->hide();
    ui->LOSE->hide();
    ui->pushButton_cont->hide();
    qDebug()<< "init";
    init();
    SetRandom();
    SetRandom();
    return;
}

//用keyPressEvent接收鍵盤輸入的指令並移動
void gamewindow::keyPressEvent(QKeyEvent *event)
{
    //如果不再在win的畫面
    if (check == true)
    {
        if (event->key()== Qt::Key_Left)
        {
            for (int i=0; i<4; i++)
            {
                for (int k=2+4*i; k<=4+4*i; k++)
                {
                    for (int j=k; j>4*i+1; j--)
                    {
                        if ((b[j].number!=0) && (b[j-1].number == b[j].number) && (b[j-1].isAdded==false) && (b[j].isAdded==false))
                        {
                            b[j-1].number*=2;
                            score= score+ b[j-1].number*2;
                            b[j-1].isAdded= true;
                            b[j-1].isMoved= true;
                            SetPic(b[j-1]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }
                        else if ((b[j].number!=0) && (b[j-1].number == 0))
                        {
                            b[j-1].number= b[j].number;
                            score= score+2;
                            b[j-1].isAdded= b[j].isAdded;
                            b[j-1].isMoved= true;
                            SetPic(b[j-1]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }
                    }
                }
            }
        }
        else if (event->key()==Qt::Key_Right)
        {
            for (int i=0; i<4; i++)
            {
                for (int k=3+4*i; k>=1+4*i; k--)
                {
                    for (int j=k; j<(i+1)*4; j++)
                    {
                        if ((b[j].number!=0) && (b[j+1].number == b[j].number) && (b[j+1].isAdded==false) && (b[j].isAdded==false) )
                        {
                            b[j+1].number*=2;
                            score= score+ b[j+1].number*2;
                            b[j+1].isAdded= true;
                            b[j+1].isMoved= true;
                            SetPic(b[j+1]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }

                        else if ((b[j].number!=0) && (b[j+1].number == 0))
                        {
                            b[j+1].number= b[j].number;
                            score=score+2;
                            b[j+1].isAdded= b[j].isAdded;
                            b[j+1].isMoved= true;
                            SetPic(b[j+1]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }
                    }
                }
            }
        }
        else if (event->key()==Qt::Key_Up)
        {
            for (int i=0; i<4; i++)
            {
                for (int k=5+i; k<=13+i; k=k+4)
                {
                    for(int j= k; j>1+i; j=j-4)
                    {
                        if ((b[j].number!=0) && (b[j-4].number == b[j].number) && (b[j-4].isAdded==false) && (b[j].isAdded==false) )
                        {
                            b[j-4].number*=2;
                            score= score+ b[j-4].number*2;
                            b[j-4].isAdded= true;
                            b[j-4].isMoved= true;
                            SetPic(b[j-4]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }

                        else if ((b[j].number!=0) && (b[j-4].number == 0))
                        {
                            b[j-4].number= b[j].number;
                            score=score+2;
                            b[j-4].isAdded= b[j].isAdded;
                            b[j-4].isMoved= true;
                            SetPic(b[j-4]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }
                    }
                }
            }
        }
        else if (event->key()==Qt::Key_Down)
        {
            for (int i=0; i<4; i++)
            {
                for (int k=9+i; k>=1+i; k=k-4)
                {
                    for (int j=k; j<13+i; j=j+4)
                    {
                        if ((b[j].number!=0) && (b[j+4].number == b[j].number) && (b[j+4].isAdded==false) && (b[j].isAdded==false) )
                        {
                            b[j+4].number*=2;
                            score= score+ b[j+4].number*2;
                            b[j+4].isAdded= true;
                            b[j+4].isMoved= true;
                            SetPic(b[j+4]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }

                        else if ((b[j].number!=0) && (b[j+4].number == 0))
                        {
                            b[j+4].number= b[j].number;
                            score=score+2;
                            b[j+4].isAdded= b[j].isAdded;
                            b[j+4].isMoved= true;
                            SetPic(b[j+4]);

                            b[j].number=0;
                            b[j].isAdded= false;
                            b[j].isMoved= false;
                            SetPic(b[j]);
                        }
                    }

                }
            }
        }
    }

    //如果有格子順利被移動
    //先隨機產生新的2 再把move 跟 add 初始化
    if (Moved())
    {
        SetRandom();
        initMoveAdd();
        str= QString::number(score,10);
        ui->SCORE->setText(str);

        //如果還沒達到2048過
        if (win==true)
        {
            if (GameWin())
            {
                ui->WIN->setPixmap(QPixmap(":/pic/PIC/win.jpg"));
                ui->WIN->show();
                ui->pushButton_cont->show();
                check= false;
            }

            else if(GameOver())
            {
                ui->LOSE->setPixmap(QPixmap(":/pic/PIC/lose.jpg"));
                ui->LOSE->show();
            }
        }

        //若已經達到2048
        else
        {
            if(GameOver())
            {
                ui->LOSE->setPixmap(QPixmap(":/pic/PIC/lose.jpg"));
                ui->LOSE->show();
            }
        }
    }
}

//檢查有沒有格子移動過
bool gamewindow::Moved()
{
    for (int i=1; i<17; i++)
    {
        if (b[i].isMoved == true)
            return true;
    }
    return false;
}

//初始move 跟 add
void gamewindow::initMoveAdd()
{
    for (int i=1; i<17; i++)
    {
        b[i].isAdded=false;
        b[i].isMoved=false;
    }
    return;
}

//如果順利達到2048 代表贏了
bool gamewindow::GameWin()
{
    for (int i=1; i<17; i++)
    {
        if ( b[i].number == 2048 )
        {
            return true;
        }
    }
    return false;
}

//如果沒有格子可以移動 代表結束了
bool gamewindow::GameOver()
{
    //若有任何一個位置是空白的 表示遊戲還沒結束
    for (int i=1; i<17; i++)
    {
        if (b[i].number == 0)
            return false;
    }

    //若有任何一個位置左右是一樣的 表示可以相加 遊戲還沒結束
    for (int i=0; i<4; i++)
    {
        for (int j=1+4*i; j<4+4*i; j++)
        {
            if (b[j].number == b[j+1].number)
                return false;
        }
    }

    //若有任何一個位置上下是一樣的 表示可以相加 遊戲還沒結束
    for (int i=0; i<4; i++)
    {
        for (int j=i+4; j<13+i; j=j+4)
        {
            if (b[j].number == b[j-4].number)
                return false;
        }
    }

    return true;
}

gamewindow::~gamewindow()
{
    delete ui;
}

//設定重新開始的按鈕
void gamewindow::on_pushButton_Restart_clicked()
{
    init();
    SetRandom();
    SetRandom();
    ui->WIN->hide();
    ui->LOSE->hide();
    ui->pushButton_cont->hide();
    return;
}



void gamewindow::on_pushButton_cont_clicked()
{
    check= true;
    ui->WIN->hide();
    ui->pushButton_cont->hide();
    win= false;
}
