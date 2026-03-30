/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *numero1;
    QLineEdit *numero2;
    QLineEdit *resultado;
    QPushButton *mais;
    QPushButton *dividido;
    QPushButton *vezes;
    QPushButton *menos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        numero1 = new QLineEdit(centralwidget);
        numero1->setObjectName("numero1");
        numero1->setGeometry(QRect(220, 160, 201, 31));
        numero2 = new QLineEdit(centralwidget);
        numero2->setObjectName("numero2");
        numero2->setGeometry(QRect(220, 190, 201, 31));
        resultado = new QLineEdit(centralwidget);
        resultado->setObjectName("resultado");
        resultado->setGeometry(QRect(220, 220, 201, 31));
        mais = new QPushButton(centralwidget);
        mais->setObjectName("mais");
        mais->setGeometry(QRect(200, 280, 61, 51));
        QFont font1;
        font1.setPointSize(30);
        mais->setFont(font1);
        dividido = new QPushButton(centralwidget);
        dividido->setObjectName("dividido");
        dividido->setGeometry(QRect(380, 280, 61, 51));
        dividido->setFont(font1);
        vezes = new QPushButton(centralwidget);
        vezes->setObjectName("vezes");
        vezes->setGeometry(QRect(320, 280, 61, 51));
        vezes->setFont(font1);
        menos = new QPushButton(centralwidget);
        menos->setObjectName("menos");
        menos->setGeometry(QRect(260, 280, 61, 51));
        menos->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mais->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        dividido->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        vezes->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        menos->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
