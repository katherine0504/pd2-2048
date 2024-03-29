/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Start;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_End;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(650, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 381, 251));
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("New Waltograph"));
        font.setPointSize(70);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 320, 516, 202));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Start = new QPushButton(layoutWidget);
        pushButton_Start->setObjectName(QStringLiteral("pushButton_Start"));
        pushButton_Start->setMinimumSize(QSize(200, 200));
        pushButton_Start->setMaximumSize(QSize(200, 200));
        QFont font1;
        font1.setFamily(QStringLiteral("Copperplate Gothic Bold"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Start->setFont(font1);
        pushButton_Start->setFocusPolicy(Qt::NoFocus);
        pushButton_Start->setLayoutDirection(Qt::RightToLeft);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/PIC/start.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Start->setIcon(icon);
        pushButton_Start->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(pushButton_Start);

        verticalSpacer = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        pushButton_End = new QPushButton(layoutWidget);
        pushButton_End->setObjectName(QStringLiteral("pushButton_End"));
        pushButton_End->setMinimumSize(QSize(200, 200));
        pushButton_End->setMaximumSize(QSize(200, 200));
        QFont font2;
        font2.setFamily(QStringLiteral("Copperplate Gothic Bold"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_End->setFont(font2);
        pushButton_End->setFocusPolicy(Qt::NoFocus);
        pushButton_End->setLayoutDirection(Qt::RightToLeft);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pic/PIC/end.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_End->setIcon(icon1);
        pushButton_End->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(pushButton_End);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_End, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "2 0 4 8", 0));
        pushButton_Start->setText(QString());
        pushButton_End->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
