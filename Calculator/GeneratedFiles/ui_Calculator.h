/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QStringLiteral("CalculatorClass"));
        CalculatorClass->resize(600, 400);
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 30, 322, 261));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 10));
        label->setBaseSize(QSize(100, 10));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 10));
        label_2->setBaseSize(QSize(100, 10));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 1, 2, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 3, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 0, 3, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 1, 3, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 2, 3, 1, 1);

        pushButton_14 = new QPushButton(layoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        gridLayout->addWidget(pushButton_14, 3, 3, 1, 1);

        pushButton_15 = new QPushButton(layoutWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        gridLayout->addWidget(pushButton_15, 3, 2, 1, 1);

        pushButton_16 = new QPushButton(layoutWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        gridLayout->addWidget(pushButton_16, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        retranslateUi(CalculatorClass);
        QObject::connect(pushButton_16, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), CalculatorClass, SLOT(OnNumBtnClicked()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), CalculatorClass, SLOT(OnOperBtnClicked()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), CalculatorClass, SLOT(OnOperBtnClicked()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), CalculatorClass, SLOT(OnOperBtnClicked()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), CalculatorClass, SLOT(OnOperBtnClicked()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), CalculatorClass, SLOT(OnOperBtnClicked()));

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("CalculatorClass", "4", nullptr));
        pushButton_6->setText(QApplication::translate("CalculatorClass", "2", nullptr));
        pushButton_4->setText(QApplication::translate("CalculatorClass", "8", nullptr));
        pushButton_8->setText(QApplication::translate("CalculatorClass", "6", nullptr));
        pushButton_10->setText(QApplication::translate("CalculatorClass", ".", nullptr));
        pushButton->setText(QApplication::translate("CalculatorClass", "7", nullptr));
        pushButton_3->setText(QApplication::translate("CalculatorClass", "1", nullptr));
        pushButton_5->setText(QApplication::translate("CalculatorClass", "5", nullptr));
        pushButton_7->setText(QApplication::translate("CalculatorClass", "9", nullptr));
        pushButton_9->setText(QApplication::translate("CalculatorClass", "3", nullptr));
        pushButton_11->setText(QApplication::translate("CalculatorClass", "+", nullptr));
        pushButton_12->setText(QApplication::translate("CalculatorClass", "-", nullptr));
        pushButton_13->setText(QApplication::translate("CalculatorClass", "*", nullptr));
        pushButton_14->setText(QApplication::translate("CalculatorClass", "/", nullptr));
        pushButton_15->setText(QApplication::translate("CalculatorClass", "=", nullptr));
        pushButton_16->setText(QApplication::translate("CalculatorClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
