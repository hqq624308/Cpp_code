/********************************************************************************
** Form generated from reading UI file 'Helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloworldClass
{
public:

    void setupUi(QWidget *HelloworldClass)
    {
        if (HelloworldClass->objectName().isEmpty())
            HelloworldClass->setObjectName(QStringLiteral("HelloworldClass"));
        HelloworldClass->resize(600, 400);

        retranslateUi(HelloworldClass);

        QMetaObject::connectSlotsByName(HelloworldClass);
    } // setupUi

    void retranslateUi(QWidget *HelloworldClass)
    {
        HelloworldClass->setWindowTitle(QApplication::translate("HelloworldClass", "Helloworld", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloworldClass: public Ui_HelloworldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
