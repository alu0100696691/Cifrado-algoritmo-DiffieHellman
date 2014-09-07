/********************************************************************************
** Form generated from reading UI file 'diffiehellmann.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFIEHELLMANN_H
#define UI_DIFFIEHELLMANN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiffieHellmann
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *pw;
    QLineEdit *alphaw;
    QLineEdit *xaw;
    QLineEdit *xbw;
    QPushButton *ejecutar;
    QPushButton *exit;
    QLabel *label_6;
    QLineEdit *yaw;
    QLineEdit *ybw;
    QLineEdit *kaw;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *kbw;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DiffieHellmann)
    {
        if (DiffieHellmann->objectName().isEmpty())
            DiffieHellmann->setObjectName(QStringLiteral("DiffieHellmann"));
        DiffieHellmann->resize(709, 485);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        DiffieHellmann->setFont(font);
        centralWidget = new QWidget(DiffieHellmann);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 30, 321, 31));
        QFont font1;
        font1.setPointSize(26);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 130, 141, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 170, 131, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 210, 121, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 240, 131, 17));
        pw = new QLineEdit(centralWidget);
        pw->setObjectName(QStringLiteral("pw"));
        pw->setGeometry(QRect(220, 120, 113, 27));
        alphaw = new QLineEdit(centralWidget);
        alphaw->setObjectName(QStringLiteral("alphaw"));
        alphaw->setGeometry(QRect(220, 160, 113, 27));
        xaw = new QLineEdit(centralWidget);
        xaw->setObjectName(QStringLiteral("xaw"));
        xaw->setGeometry(QRect(220, 200, 113, 27));
        xbw = new QLineEdit(centralWidget);
        xbw->setObjectName(QStringLiteral("xbw"));
        xbw->setGeometry(QRect(220, 240, 113, 27));
        ejecutar = new QPushButton(centralWidget);
        ejecutar->setObjectName(QStringLiteral("ejecutar"));
        ejecutar->setGeometry(QRect(540, 360, 99, 27));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(430, 360, 99, 27));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(460, 120, 121, 17));
        QFont font2;
        font2.setPointSize(14);
        label_6->setFont(font2);
        yaw = new QLineEdit(centralWidget);
        yaw->setObjectName(QStringLiteral("yaw"));
        yaw->setGeometry(QRect(520, 150, 113, 27));
        ybw = new QLineEdit(centralWidget);
        ybw->setObjectName(QStringLiteral("ybw"));
        ybw->setGeometry(QRect(520, 190, 113, 27));
        kaw = new QLineEdit(centralWidget);
        kaw->setObjectName(QStringLiteral("kaw"));
        kaw->setGeometry(QRect(520, 230, 113, 27));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(410, 160, 67, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 190, 67, 17));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(410, 230, 67, 17));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(410, 270, 67, 17));
        kbw = new QLineEdit(centralWidget);
        kbw->setObjectName(QStringLiteral("kbw"));
        kbw->setGeometry(QRect(520, 270, 113, 27));
        DiffieHellmann->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DiffieHellmann);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 709, 25));
        DiffieHellmann->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DiffieHellmann);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DiffieHellmann->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DiffieHellmann);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DiffieHellmann->setStatusBar(statusBar);

        retranslateUi(DiffieHellmann);

        QMetaObject::connectSlotsByName(DiffieHellmann);
    } // setupUi

    void retranslateUi(QMainWindow *DiffieHellmann)
    {
        DiffieHellmann->setWindowTitle(QApplication::translate("DiffieHellmann", "DiffieHellmann", 0));
        label->setText(QApplication::translate("DiffieHellmann", "DIFFIE-HELLMANN", 0));
        label_2->setText(QApplication::translate("DiffieHellmann", "NUMERO PRIMO P:", 0));
        label_3->setText(QApplication::translate("DiffieHellmann", "NUMERO ALPHA:", 0));
        label_4->setText(QApplication::translate("DiffieHellmann", "SECRETO X(A):", 0));
        label_5->setText(QApplication::translate("DiffieHellmann", "SECRETO X(B):", 0));
        pw->setText(QApplication::translate("DiffieHellmann", "13", 0));
        alphaw->setText(QApplication::translate("DiffieHellmann", "4", 0));
        xaw->setText(QApplication::translate("DiffieHellmann", "5", 0));
        xbw->setText(QApplication::translate("DiffieHellmann", "2", 0));
        ejecutar->setText(QApplication::translate("DiffieHellmann", "EJECUTAR", 0));
        exit->setText(QApplication::translate("DiffieHellmann", "SALIR", 0));
        label_6->setText(QApplication::translate("DiffieHellmann", "RESULTADO:", 0));
        label_7->setText(QApplication::translate("DiffieHellmann", "Y(A):", 0));
        label_8->setText(QApplication::translate("DiffieHellmann", "Y(B):", 0));
        label_9->setText(QApplication::translate("DiffieHellmann", "K(A):", 0));
        label_10->setText(QApplication::translate("DiffieHellmann", "K(B):", 0));
    } // retranslateUi

};

namespace Ui {
    class DiffieHellmann: public Ui_DiffieHellmann {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFIEHELLMANN_H
