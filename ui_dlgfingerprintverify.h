/********************************************************************************
** Form generated from reading UI file 'dlgfingerprintverify.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFINGERPRINTVERIFY_H
#define UI_DLGFINGERPRINTVERIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_CDlgFingerprintVerify
{
public:
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget;
    QPushButton *buttonBoxOk;
    QPushButton *buttonBoxCancel;
    QVBoxLayout *verticalLayout;
    QLabel *lblFPrintMessage;
    QLabel *lblFPrintMessage1;
    QLabel *lblFPrintMessage2;

    void setupUi(QDialog *CDlgFingerprintVerify)
    {
        if (CDlgFingerprintVerify->objectName().isEmpty())
            CDlgFingerprintVerify->setObjectName(QStringLiteral("CDlgFingerprintVerify"));
        CDlgFingerprintVerify->resize(612, 330);
        QFont font;
        font.setPointSize(12);
        CDlgFingerprintVerify->setFont(font);
        line = new QFrame(CDlgFingerprintVerify);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 314, 611, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CDlgFingerprintVerify);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, -3, 611, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CDlgFingerprintVerify);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-6, 9, 20, 311));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CDlgFingerprintVerify);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(595, 8, 20, 311));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CDlgFingerprintVerify);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 601, 400));
        buttonBoxOk = new QPushButton(layoutWidget);
        buttonBoxOk->setObjectName(QStringLiteral("buttonBoxOk"));
        buttonBoxOk->setGeometry(QRect(178, 250, 100, 41));
        buttonBoxCancel = new QPushButton(layoutWidget);
        buttonBoxCancel->setObjectName(QStringLiteral("buttonBoxCancel"));
        buttonBoxCancel->setGeometry(QRect(292, 250, 100, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblFPrintMessage = new QLabel(CDlgFingerprintVerify);
        lblFPrintMessage->setObjectName(QStringLiteral("lblFPrintMessage"));
        lblFPrintMessage->setGeometry(QRect(20, 20, 600, 40));
        QFont font1;
        font1.setPointSize(15);
        lblFPrintMessage->setFont(font1);
        lblFPrintMessage1 = new QLabel(CDlgFingerprintVerify);
        lblFPrintMessage1->setObjectName(QStringLiteral("lblFPrintMessage1"));
        lblFPrintMessage1->setGeometry(QRect(165, 65, 300, 40));
        lblFPrintMessage1->setFont(font1);
        lblFPrintMessage2 = new QLabel(CDlgFingerprintVerify);
        lblFPrintMessage2->setObjectName(QStringLiteral("lblFPrintMessage2"));
        lblFPrintMessage2->setGeometry(QRect(183, 150, 300, 40));
        QFont font2;
        font2.setPointSize(13);
        lblFPrintMessage2->setFont(font2);

        retranslateUi(CDlgFingerprintVerify);

        QMetaObject::connectSlotsByName(CDlgFingerprintVerify);
    } // setupUi

    void retranslateUi(QDialog *CDlgFingerprintVerify)
    {
        CDlgFingerprintVerify->setWindowTitle(QApplication::translate("CDlgFingerprintVerify", "Dialog", 0));
        buttonBoxOk->setText(QApplication::translate("CDlgFingerprintVerify", "Ok", 0));
        buttonBoxCancel->setText(QApplication::translate("CDlgFingerprintVerify", "Cancel", 0));
        lblFPrintMessage->setText(QApplication::translate("CDlgFingerprintVerify", "Please press your finger firmly against the scanner's", 0));
        lblFPrintMessage1->setText(QApplication::translate("CDlgFingerprintVerify", "glass and then remove it", 0));
        lblFPrintMessage2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgFingerprintVerify: public Ui_CDlgFingerprintVerify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFINGERPRINTVERIFY_H
