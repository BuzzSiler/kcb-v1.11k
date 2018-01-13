/********************************************************************************
** Form generated from reading UI file 'dlgfingerprint.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFINGERPRINT_H
#define UI_DLGFINGERPRINT_H

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

QT_BEGIN_NAMESPACE

class Ui_CDlgFingerprint
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
    QLabel *lblStageText;
    QLabel *lblFPrintStageNumber;
    QLabel *lblFPrintOf;
    QLabel *lblFPrintStageTotal;
    QLabel *lblFPrintMessage2;

    void setupUi(QDialog *CDlgFingerprint)
    {
        if (CDlgFingerprint->objectName().isEmpty())
            CDlgFingerprint->setObjectName(QStringLiteral("CDlgFingerprint"));
        CDlgFingerprint->resize(612, 330);
        QFont font;
        font.setPointSize(12);
        CDlgFingerprint->setFont(font);
        line = new QFrame(CDlgFingerprint);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 314, 611, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CDlgFingerprint);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, -3, 611, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CDlgFingerprint);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-6, 9, 20, 311));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CDlgFingerprint);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(595, 8, 20, 311));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CDlgFingerprint);
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
        lblFPrintMessage = new QLabel(CDlgFingerprint);
        lblFPrintMessage->setObjectName(QStringLiteral("lblFPrintMessage"));
        lblFPrintMessage->setGeometry(QRect(20, 20, 600, 40));
        QFont font1;
        font1.setPointSize(15);
        lblFPrintMessage->setFont(font1);
        lblFPrintMessage1 = new QLabel(CDlgFingerprint);
        lblFPrintMessage1->setObjectName(QStringLiteral("lblFPrintMessage1"));
        lblFPrintMessage1->setGeometry(QRect(165, 65, 300, 40));
        lblFPrintMessage1->setFont(font1);
        lblStageText = new QLabel(CDlgFingerprint);
        lblStageText->setObjectName(QStringLiteral("lblStageText"));
        lblStageText->setGeometry(QRect(163, 130, 300, 60));
        QFont font2;
        font2.setPointSize(30);
        lblStageText->setFont(font2);
        lblFPrintStageNumber = new QLabel(CDlgFingerprint);
        lblFPrintStageNumber->setObjectName(QStringLiteral("lblFPrintStageNumber"));
        lblFPrintStageNumber->setGeometry(QRect(281, 135, 50, 50));
        lblFPrintStageNumber->setFont(font2);
        lblFPrintOf = new QLabel(CDlgFingerprint);
        lblFPrintOf->setObjectName(QStringLiteral("lblFPrintOf"));
        lblFPrintOf->setGeometry(QRect(330, 135, 50, 50));
        lblFPrintOf->setFont(font2);
        lblFPrintStageTotal = new QLabel(CDlgFingerprint);
        lblFPrintStageTotal->setObjectName(QStringLiteral("lblFPrintStageTotal"));
        lblFPrintStageTotal->setGeometry(QRect(397, 135, 50, 50));
        lblFPrintStageTotal->setFont(font2);
        lblFPrintMessage2 = new QLabel(CDlgFingerprint);
        lblFPrintMessage2->setObjectName(QStringLiteral("lblFPrintMessage2"));
        lblFPrintMessage2->setGeometry(QRect(183, 200, 300, 40));
        QFont font3;
        font3.setPointSize(13);
        lblFPrintMessage2->setFont(font3);

        retranslateUi(CDlgFingerprint);

        QMetaObject::connectSlotsByName(CDlgFingerprint);
    } // setupUi

    void retranslateUi(QDialog *CDlgFingerprint)
    {
        CDlgFingerprint->setWindowTitle(QApplication::translate("CDlgFingerprint", "Dialog", 0));
        buttonBoxOk->setText(QApplication::translate("CDlgFingerprint", "Ok", 0));
        buttonBoxCancel->setText(QApplication::translate("CDlgFingerprint", "Cancel", 0));
        lblFPrintMessage->setText(QApplication::translate("CDlgFingerprint", "Please press any finger firmly against the scanner's", 0));
        lblFPrintMessage1->setText(QApplication::translate("CDlgFingerprint", "glass and then remove it", 0));
        lblStageText->setText(QApplication::translate("CDlgFingerprint", "Step", 0));
        lblFPrintStageNumber->setText(QApplication::translate("CDlgFingerprint", "1", 0));
        lblFPrintOf->setText(QApplication::translate("CDlgFingerprint", "of", 0));
        lblFPrintStageTotal->setText(QApplication::translate("CDlgFingerprint", "5", 0));
        lblFPrintMessage2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgFingerprint: public Ui_CDlgFingerprint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFINGERPRINT_H
