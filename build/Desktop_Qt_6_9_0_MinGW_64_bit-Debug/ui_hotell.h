/********************************************************************************
** Form generated from reading UI file 'hotell.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELL_H
#define UI_HOTELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotell
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *roomNrAddInput;
    QLabel *label_3;
    QDateEdit *startDateInput;
    QLabel *label;
    QDateEdit *endDateInput;
    QPushButton *savePushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *roomNrRemoveInput;
    QPushButton *removePushButton;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Hotell)
    {
        if (Hotell->objectName().isEmpty())
            Hotell->setObjectName("Hotell");
        Hotell->resize(453, 365);
        Hotell->setMaximumSize(QSize(800, 16777215));
        centralwidget = new QWidget(Hotell);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(20);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, label_4);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        roomNrAddInput = new QLineEdit(centralwidget);
        roomNrAddInput->setObjectName("roomNrAddInput");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, roomNrAddInput);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        startDateInput = new QDateEdit(centralwidget);
        startDateInput->setObjectName("startDateInput");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, startDateInput);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label);

        endDateInput = new QDateEdit(centralwidget);
        endDateInput->setObjectName("endDateInput");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, endDateInput);

        savePushButton = new QPushButton(centralwidget);
        savePushButton->setObjectName("savePushButton");

        formLayout->setWidget(4, QFormLayout::ItemRole::SpanningRole, savePushButton);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setMargin(0);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_7);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_8);

        roomNrRemoveInput = new QLineEdit(centralwidget);
        roomNrRemoveInput->setObjectName("roomNrRemoveInput");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, roomNrRemoveInput);

        removePushButton = new QPushButton(centralwidget);
        removePushButton->setObjectName("removePushButton");

        formLayout->setWidget(7, QFormLayout::ItemRole::SpanningRole, removePushButton);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, label_9);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, label_10);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        formLayout->setWidget(9, QFormLayout::ItemRole::SpanningRole, textEdit);

        Hotell->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Hotell);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 453, 17));
        Hotell->setMenuBar(menubar);
        statusbar = new QStatusBar(Hotell);
        statusbar->setObjectName("statusbar");
        Hotell->setStatusBar(statusbar);

        retranslateUi(Hotell);

        QMetaObject::connectSlotsByName(Hotell);
    } // setupUi

    void retranslateUi(QMainWindow *Hotell)
    {
        Hotell->setWindowTitle(QCoreApplication::translate("Hotell", "Hotell", nullptr));
        label_5->setText(QCoreApplication::translate("Hotell", "Broneeri", nullptr));
        label_4->setText(QCoreApplication::translate("Hotell", "Tuba", nullptr));
        label_2->setText(QCoreApplication::translate("Hotell", "Toa Number:", nullptr));
        label_3->setText(QCoreApplication::translate("Hotell", "Algusaeg", nullptr));
        label->setText(QCoreApplication::translate("Hotell", "L\303\265ppaeg", nullptr));
        savePushButton->setText(QCoreApplication::translate("Hotell", "Saada andmed", nullptr));
        label_6->setText(QCoreApplication::translate("Hotell", "Eemalda", nullptr));
        label_7->setText(QCoreApplication::translate("Hotell", "Broneering", nullptr));
        label_8->setText(QCoreApplication::translate("Hotell", "Toa Number: ", nullptr));
        removePushButton->setText(QCoreApplication::translate("Hotell", "Eemalda", nullptr));
        label_9->setText(QCoreApplication::translate("Hotell", "Vabad", nullptr));
        label_10->setText(QCoreApplication::translate("Hotell", "Toad", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Hotell", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Funktsionaalsus tulekul)</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hotell: public Ui_Hotell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELL_H
