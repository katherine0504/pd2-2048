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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *B13;
    QLabel *B15;
    QLabel *B1;
    QLabel *B2;
    QLabel *B7;
    QLabel *B3;
    QLabel *B8;
    QLabel *B9;
    QLabel *B4;
    QLabel *B5;
    QLabel *B6;
    QLabel *B10;
    QLabel *B11;
    QLabel *B12;
    QLabel *B16;
    QLabel *B14;

    void setupUi(QWidget *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QStringLiteral("gamewindow"));
        gamewindow->resize(1068, 1319);
        label = new QLabel(gamewindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 40, 200, 200));
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));
        QFont font;
        font.setFamily(QStringLiteral("Copperplate Gothic Bold"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        widget = new QWidget(gamewindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 310, 631, 623));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B13 = new QLabel(widget);
        B13->setObjectName(QStringLiteral("B13"));
        B13->setMinimumSize(QSize(150, 150));
        B13->setMaximumSize(QSize(150, 150));
        B13->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B13, 4, 0, 1, 1);

        B15 = new QLabel(widget);
        B15->setObjectName(QStringLiteral("B15"));
        B15->setMinimumSize(QSize(150, 150));
        B15->setMaximumSize(QSize(150, 150));
        B15->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B15, 4, 2, 1, 1);

        B1 = new QLabel(widget);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setMinimumSize(QSize(150, 150));
        B1->setMaximumSize(QSize(150, 150));
        B1->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B1, 0, 0, 1, 1);

        B2 = new QLabel(widget);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setMinimumSize(QSize(150, 150));
        B2->setMaximumSize(QSize(150, 150));
        B2->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B2, 0, 1, 1, 1);

        B7 = new QLabel(widget);
        B7->setObjectName(QStringLiteral("B7"));
        B7->setMinimumSize(QSize(150, 150));
        B7->setMaximumSize(QSize(150, 150));
        B7->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B7, 1, 2, 1, 1);

        B3 = new QLabel(widget);
        B3->setObjectName(QStringLiteral("B3"));
        B3->setMinimumSize(QSize(150, 150));
        B3->setMaximumSize(QSize(150, 150));
        B3->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B3, 0, 2, 1, 1);

        B8 = new QLabel(widget);
        B8->setObjectName(QStringLiteral("B8"));
        B8->setMinimumSize(QSize(150, 150));
        B8->setMaximumSize(QSize(150, 150));
        B8->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B8, 1, 3, 1, 1);

        B9 = new QLabel(widget);
        B9->setObjectName(QStringLiteral("B9"));
        B9->setMinimumSize(QSize(150, 150));
        B9->setMaximumSize(QSize(150, 150));
        B9->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B9, 2, 0, 1, 1);

        B4 = new QLabel(widget);
        B4->setObjectName(QStringLiteral("B4"));
        B4->setMinimumSize(QSize(150, 150));
        B4->setMaximumSize(QSize(150, 150));
        B4->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B4, 0, 3, 1, 1);

        B5 = new QLabel(widget);
        B5->setObjectName(QStringLiteral("B5"));
        B5->setMinimumSize(QSize(150, 150));
        B5->setMaximumSize(QSize(150, 150));
        B5->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B5, 1, 0, 1, 1);

        B6 = new QLabel(widget);
        B6->setObjectName(QStringLiteral("B6"));
        B6->setMinimumSize(QSize(150, 150));
        B6->setMaximumSize(QSize(150, 150));
        B6->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B6, 1, 1, 1, 1);

        B10 = new QLabel(widget);
        B10->setObjectName(QStringLiteral("B10"));
        B10->setMinimumSize(QSize(150, 150));
        B10->setMaximumSize(QSize(150, 150));
        B10->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B10, 2, 1, 1, 1);

        B11 = new QLabel(widget);
        B11->setObjectName(QStringLiteral("B11"));
        B11->setMinimumSize(QSize(150, 150));
        B11->setMaximumSize(QSize(150, 150));
        B11->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B11, 2, 2, 1, 1);

        B12 = new QLabel(widget);
        B12->setObjectName(QStringLiteral("B12"));
        B12->setMinimumSize(QSize(150, 150));
        B12->setMaximumSize(QSize(150, 150));
        B12->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B12, 2, 3, 1, 1);

        B16 = new QLabel(widget);
        B16->setObjectName(QStringLiteral("B16"));
        B16->setMinimumSize(QSize(150, 150));
        B16->setMaximumSize(QSize(150, 150));
        B16->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B16, 4, 3, 1, 1);

        B14 = new QLabel(widget);
        B14->setObjectName(QStringLiteral("B14"));
        B14->setMinimumSize(QSize(150, 150));
        B14->setMaximumSize(QSize(150, 150));
        B14->setBaseSize(QSize(150, 150));

        gridLayout->addWidget(B14, 4, 1, 1, 1);


        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QWidget *gamewindow)
    {
        gamewindow->setWindowTitle(QApplication::translate("gamewindow", "Form", 0));
        label->setText(QApplication::translate("gamewindow", "2048", 0));
        B13->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B15->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B1->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B2->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B7->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B3->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B8->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B9->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B4->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B5->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B6->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B10->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B11->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B12->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B16->setText(QApplication::translate("gamewindow", "TextLabel", 0));
        B14->setText(QApplication::translate("gamewindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
