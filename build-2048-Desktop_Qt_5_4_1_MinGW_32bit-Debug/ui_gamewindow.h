/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *B14;
    QLabel *B13;
    QLabel *B15;
    QLabel *B1;
    QLabel *B7;
    QLabel *B2;
    QLabel *B8;
    QLabel *B4;
    QLabel *B9;
    QLabel *B3;
    QLabel *B11;
    QLabel *B10;
    QLabel *B6;
    QLabel *B5;
    QLabel *B12;
    QLabel *B16;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Restart;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_End;
    QLabel *WIN;
    QLabel *LOSE;
    QLabel *SCORE;
    QPushButton *pushButton_cont;

    void setupUi(QWidget *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QStringLiteral("gamewindow"));
        gamewindow->resize(920, 1000);
        label = new QLabel(gamewindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 375, 100));
        label->setMinimumSize(QSize(375, 100));
        label->setMaximumSize(QSize(375, 100));
        QFont font;
        font.setFamily(QStringLiteral("Copperplate Gothic Bold"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/PIC/score.jpg")));
        layoutWidget = new QWidget(gamewindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 310, 664, 664));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B14 = new QLabel(layoutWidget);
        B14->setObjectName(QStringLiteral("B14"));
        B14->setMinimumSize(QSize(155, 155));
        B14->setMaximumSize(QSize(155, 155));
        B14->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B14, 6, 2, 1, 1);

        B13 = new QLabel(layoutWidget);
        B13->setObjectName(QStringLiteral("B13"));
        B13->setMinimumSize(QSize(155, 155));
        B13->setMaximumSize(QSize(155, 155));
        B13->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B13, 6, 0, 1, 1);

        B15 = new QLabel(layoutWidget);
        B15->setObjectName(QStringLiteral("B15"));
        B15->setMinimumSize(QSize(155, 155));
        B15->setMaximumSize(QSize(155, 155));
        B15->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B15, 6, 4, 1, 1);

        B1 = new QLabel(layoutWidget);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setMinimumSize(QSize(155, 155));
        B1->setMaximumSize(QSize(155, 155));
        B1->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B1, 0, 0, 1, 1);

        B7 = new QLabel(layoutWidget);
        B7->setObjectName(QStringLiteral("B7"));
        B7->setMinimumSize(QSize(155, 155));
        B7->setMaximumSize(QSize(155, 155));
        B7->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B7, 2, 4, 1, 1);

        B2 = new QLabel(layoutWidget);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setMinimumSize(QSize(155, 155));
        B2->setMaximumSize(QSize(155, 155));
        B2->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B2, 0, 2, 1, 1);

        B8 = new QLabel(layoutWidget);
        B8->setObjectName(QStringLiteral("B8"));
        B8->setMinimumSize(QSize(155, 155));
        B8->setMaximumSize(QSize(155, 155));
        B8->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B8, 2, 6, 1, 1);

        B4 = new QLabel(layoutWidget);
        B4->setObjectName(QStringLiteral("B4"));
        B4->setMinimumSize(QSize(155, 155));
        B4->setMaximumSize(QSize(155, 155));
        B4->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B4, 0, 6, 1, 1);

        B9 = new QLabel(layoutWidget);
        B9->setObjectName(QStringLiteral("B9"));
        B9->setMinimumSize(QSize(155, 155));
        B9->setMaximumSize(QSize(155, 155));
        B9->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B9, 4, 0, 1, 1);

        B3 = new QLabel(layoutWidget);
        B3->setObjectName(QStringLiteral("B3"));
        B3->setMinimumSize(QSize(155, 155));
        B3->setMaximumSize(QSize(155, 155));
        B3->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B3, 0, 4, 1, 1);

        B11 = new QLabel(layoutWidget);
        B11->setObjectName(QStringLiteral("B11"));
        B11->setMinimumSize(QSize(155, 155));
        B11->setMaximumSize(QSize(155, 155));
        B11->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B11, 4, 4, 1, 1);

        B10 = new QLabel(layoutWidget);
        B10->setObjectName(QStringLiteral("B10"));
        B10->setMinimumSize(QSize(155, 155));
        B10->setMaximumSize(QSize(155, 155));
        B10->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B10, 4, 2, 1, 1);

        B6 = new QLabel(layoutWidget);
        B6->setObjectName(QStringLiteral("B6"));
        B6->setMinimumSize(QSize(155, 155));
        B6->setMaximumSize(QSize(155, 155));
        B6->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B6, 2, 2, 1, 1);

        B5 = new QLabel(layoutWidget);
        B5->setObjectName(QStringLiteral("B5"));
        B5->setMinimumSize(QSize(155, 155));
        B5->setMaximumSize(QSize(155, 155));
        B5->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B5, 2, 0, 1, 1);

        B12 = new QLabel(layoutWidget);
        B12->setObjectName(QStringLiteral("B12"));
        B12->setMinimumSize(QSize(155, 155));
        B12->setMaximumSize(QSize(155, 155));
        B12->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B12, 4, 6, 1, 1);

        B16 = new QLabel(layoutWidget);
        B16->setObjectName(QStringLiteral("B16"));
        B16->setMinimumSize(QSize(155, 155));
        B16->setMaximumSize(QSize(155, 155));
        B16->setBaseSize(QSize(155, 155));

        gridLayout->addWidget(B16, 6, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(gamewindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(710, 10, 122, 276));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Restart = new QPushButton(layoutWidget1);
        pushButton_Restart->setObjectName(QStringLiteral("pushButton_Restart"));
        pushButton_Restart->setMinimumSize(QSize(120, 120));
        pushButton_Restart->setMaximumSize(QSize(120, 120));
        QFont font1;
        font1.setFamily(QStringLiteral("Copperplate Gothic Bold"));
        font1.setPointSize(20);
        pushButton_Restart->setFont(font1);
        pushButton_Restart->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_Restart->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/PIC/reset.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Restart->setIcon(icon);
        pushButton_Restart->setIconSize(QSize(120, 120));

        verticalLayout->addWidget(pushButton_Restart);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        pushButton_End = new QPushButton(layoutWidget1);
        pushButton_End->setObjectName(QStringLiteral("pushButton_End"));
        pushButton_End->setMinimumSize(QSize(120, 120));
        pushButton_End->setMaximumSize(QSize(120, 120));
        pushButton_End->setBaseSize(QSize(0, 0));
        pushButton_End->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pic/PIC/end.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_End->setIcon(icon1);
        pushButton_End->setIconSize(QSize(120, 120));

        verticalLayout->addWidget(pushButton_End);

        WIN = new QLabel(gamewindow);
        WIN->setObjectName(QStringLiteral("WIN"));
        WIN->setGeometry(QRect(220, 550, 450, 225));
        WIN->setMinimumSize(QSize(450, 225));
        WIN->setMaximumSize(QSize(450, 225));
        WIN->setBaseSize(QSize(450, 225));
        LOSE = new QLabel(gamewindow);
        LOSE->setObjectName(QStringLiteral("LOSE"));
        LOSE->setGeometry(QRect(220, 550, 450, 225));
        LOSE->setMinimumSize(QSize(450, 225));
        LOSE->setMaximumSize(QSize(450, 225));
        LOSE->setBaseSize(QSize(450, 225));
        SCORE = new QLabel(gamewindow);
        SCORE->setObjectName(QStringLiteral("SCORE"));
        SCORE->setGeometry(QRect(70, 150, 450, 100));
        SCORE->setMinimumSize(QSize(450, 100));
        SCORE->setMaximumSize(QSize(450, 100));
        SCORE->setBaseSize(QSize(450, 100));
        QFont font2;
        font2.setFamily(QStringLiteral("New Waltograph"));
        font2.setPointSize(72);
        font2.setBold(true);
        font2.setWeight(75);
        SCORE->setFont(font2);
        pushButton_cont = new QPushButton(gamewindow);
        pushButton_cont->setObjectName(QStringLiteral("pushButton_cont"));
        pushButton_cont->setGeometry(QRect(530, 75, 150, 150));
        pushButton_cont->setMinimumSize(QSize(150, 150));
        pushButton_cont->setMaximumSize(QSize(150, 150));
        pushButton_cont->setBaseSize(QSize(150, 150));
        pushButton_cont->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pic/PIC/cont.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cont->setIcon(icon2);
        pushButton_cont->setIconSize(QSize(150, 150));

        retranslateUi(gamewindow);
        QObject::connect(pushButton_End, SIGNAL(clicked()), gamewindow, SLOT(close()));

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QWidget *gamewindow)
    {
        gamewindow->setWindowTitle(QApplication::translate("gamewindow", "2048", 0));
        label->setText(QString());
        B14->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B13->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B15->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B1->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B7->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B2->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B8->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B4->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B9->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B3->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B11->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B10->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B6->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B5->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B12->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B16->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        pushButton_Restart->setText(QString());
        pushButton_End->setText(QString());
        WIN->setText(QString());
        LOSE->setText(QString());
        SCORE->setText(QString());
        pushButton_cont->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
