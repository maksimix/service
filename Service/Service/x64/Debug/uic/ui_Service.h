/********************************************************************************
** Form generated from reading UI file 'Service.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICE_H
#define UI_SERVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServiceClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ServiceClass)
    {
        if (ServiceClass->objectName().isEmpty())
            ServiceClass->setObjectName(QString::fromUtf8("ServiceClass"));
        ServiceClass->resize(600, 400);
        menuBar = new QMenuBar(ServiceClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ServiceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ServiceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ServiceClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ServiceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ServiceClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ServiceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ServiceClass->setStatusBar(statusBar);

        retranslateUi(ServiceClass);

        QMetaObject::connectSlotsByName(ServiceClass);
    } // setupUi

    void retranslateUi(QMainWindow *ServiceClass)
    {
        ServiceClass->setWindowTitle(QCoreApplication::translate("ServiceClass", "Service", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServiceClass: public Ui_ServiceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICE_H
