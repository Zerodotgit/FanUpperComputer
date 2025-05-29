/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *pushButtonConnection;
    QSlider *horizontalSliderRotateSpeedSet;
    QPushButton *pushButtonSwitch;
    QLineEdit *lineEditRotateSpeedSet;
    QLineEdit *lineEditCurrentRotateSpeed;
    QPushButton *pushButtonSteer;
    QLabel *labelRotateSpeedSet;
    QLabel *labelCurrentRotateSpeed;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 337);
        pushButtonConnection = new QPushButton(MainWindow);
        pushButtonConnection->setObjectName("pushButtonConnection");
        pushButtonConnection->setGeometry(QRect(160, 48, 80, 30));
        horizontalSliderRotateSpeedSet = new QSlider(MainWindow);
        horizontalSliderRotateSpeedSet->setObjectName("horizontalSliderRotateSpeedSet");
        horizontalSliderRotateSpeedSet->setEnabled(false);
        horizontalSliderRotateSpeedSet->setGeometry(QRect(130, 170, 141, 16));
        horizontalSliderRotateSpeedSet->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        horizontalSliderRotateSpeedSet->setMaximum(100);
        horizontalSliderRotateSpeedSet->setOrientation(Qt::Orientation::Horizontal);
        pushButtonSwitch = new QPushButton(MainWindow);
        pushButtonSwitch->setObjectName("pushButtonSwitch");
        pushButtonSwitch->setEnabled(false);
        pushButtonSwitch->setGeometry(QRect(160, 84, 80, 30));
        lineEditRotateSpeedSet = new QLineEdit(MainWindow);
        lineEditRotateSpeedSet->setObjectName("lineEditRotateSpeedSet");
        lineEditRotateSpeedSet->setEnabled(false);
        lineEditRotateSpeedSet->setGeometry(QRect(160, 210, 91, 26));
        lineEditCurrentRotateSpeed = new QLineEdit(MainWindow);
        lineEditCurrentRotateSpeed->setObjectName("lineEditCurrentRotateSpeed");
        lineEditCurrentRotateSpeed->setEnabled(false);
        lineEditCurrentRotateSpeed->setGeometry(QRect(160, 250, 91, 26));
        pushButtonSteer = new QPushButton(MainWindow);
        pushButtonSteer->setObjectName("pushButtonSteer");
        pushButtonSteer->setEnabled(false);
        pushButtonSteer->setGeometry(QRect(160, 120, 80, 30));
        labelRotateSpeedSet = new QLabel(MainWindow);
        labelRotateSpeedSet->setObjectName("labelRotateSpeedSet");
        labelRotateSpeedSet->setGeometry(QRect(90, 210, 66, 18));
        labelCurrentRotateSpeed = new QLabel(MainWindow);
        labelCurrentRotateSpeed->setObjectName("labelCurrentRotateSpeed");
        labelCurrentRotateSpeed->setGeometry(QRect(90, 250, 66, 18));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonConnection->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\351\243\216\346\211\207", nullptr));
        pushButtonSwitch->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        lineEditRotateSpeedSet->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEditCurrentRotateSpeed->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonSteer->setText(QCoreApplication::translate("MainWindow", "\346\255\243\350\275\254", nullptr));
        labelRotateSpeedSet->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232\350\275\254\351\200\237", nullptr));
        labelCurrentRotateSpeed->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\275\254\351\200\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
