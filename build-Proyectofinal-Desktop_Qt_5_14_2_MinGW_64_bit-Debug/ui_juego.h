/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName(QString::fromUtf8("Juego"));
        Juego->resize(800, 600);
        centralwidget = new QWidget(Juego);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Juego->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Juego);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Juego->setMenuBar(menubar);
        statusbar = new QStatusBar(Juego);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Juego->setStatusBar(statusbar);

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QCoreApplication::translate("Juego", "Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
