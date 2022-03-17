/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button1;
    QPushButton *Subtract;
    QPushButton *Add;
    QPushButton *Button4;
    QPushButton *Button6;
    QPushButton *Divide;
    QLineEdit *Display;
    QPushButton *Times;
    QPushButton *Cube;
    QPushButton *MemAdd;
    QPushButton *Button3;
    QPushButton *Dot;
    QPushButton *Button8;
    QPushButton *MemClear;
    QPushButton *Button7;
    QPushButton *Button0;
    QPushButton *SquareRoot;
    QPushButton *ChangeSign;
    QPushButton *Equals;
    QPushButton *MemGet;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *Button9;
    QPushButton *Square;
    QPushButton *Clear;
    QPushButton *RemoveLastChar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(802, 371);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setEnabled(true);
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button1, 7, 0, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setEnabled(true);
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        Subtract->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Subtract, 8, 3, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setEnabled(true);
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        Add->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Add, 7, 3, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setEnabled(true);
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button4->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button4, 6, 0, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setEnabled(true);
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button6, 6, 2, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setEnabled(true);
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        Divide->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Divide, 4, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #342f2d;\n"
"	border: 1px #342f2d;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Times = new QPushButton(centralwidget);
        Times->setObjectName(QString::fromUtf8("Times"));
        Times->setEnabled(true);
        sizePolicy.setHeightForWidth(Times->sizePolicy().hasHeightForWidth());
        Times->setSizePolicy(sizePolicy);
        Times->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        Times->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Times, 6, 3, 1, 1);

        Cube = new QPushButton(centralwidget);
        Cube->setObjectName(QString::fromUtf8("Cube"));
        Cube->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #474241;\n"
"	border: 1px #342f2d;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Cube, 3, 1, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        MemAdd->setEnabled(true);
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        MemAdd->setIconSize(QSize(20, 20));

        gridLayout->addWidget(MemAdd, 6, 4, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setEnabled(true);
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button3, 7, 2, 1, 1);

        Dot = new QPushButton(centralwidget);
        Dot->setObjectName(QString::fromUtf8("Dot"));
        Dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #474241;\n"
"	border: 1px #342f2d;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Dot, 8, 2, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setEnabled(true);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button8->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button8, 4, 1, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        MemClear->setEnabled(true);
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        MemClear->setIconSize(QSize(20, 20));

        gridLayout->addWidget(MemClear, 7, 4, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setEnabled(true);
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button7->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button7, 4, 0, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setEnabled(true);
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button0->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button0, 8, 1, 1, 1);

        SquareRoot = new QPushButton(centralwidget);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #474241;\n"
"	border: 1px #342f2d;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 3, 2, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setEnabled(true);
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #474241;\n"
"	border: 1px #342f2d;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ChangeSign->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ChangeSign, 8, 0, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setEnabled(true);
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        Equals->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Equals, 8, 4, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        MemGet->setEnabled(true);
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        MemGet->setIconSize(QSize(20, 20));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setEnabled(true);
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button5, 6, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setEnabled(true);
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button2, 7, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setEnabled(true);
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #656160;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Button9, 4, 2, 1, 1);

        Square = new QPushButton(centralwidget);
        Square->setObjectName(QString::fromUtf8("Square"));
        Square->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #474241;\n"
"	border: 1px #342f2d;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Square, 3, 0, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setEnabled(true);
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));
        Clear->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Clear, 3, 4, 1, 1);

        RemoveLastChar = new QPushButton(centralwidget);
        RemoveLastChar->setObjectName(QString::fromUtf8("RemoveLastChar"));
        RemoveLastChar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ff9e0b;\n"
"	border: 1px #c78021;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px #c78021;\n"
"	color: #FFFFFF;\n"
"}"));

        gridLayout->addWidget(RemoveLastChar, 3, 3, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 802, 25));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Times->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Cube->setText(QCoreApplication::translate("Calculator", "x^3", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Dot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculator", "sqrt(x)", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Square->setText(QCoreApplication::translate("Calculator", "x^2", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        RemoveLastChar->setText(QCoreApplication::translate("Calculator", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
