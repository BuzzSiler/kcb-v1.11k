/********************************************************************************
** Form generated from reading UI file 'qwerty_keypad.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWERTY_KEYPAD_H
#define UI_QWERTY_KEYPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *grpKeyboardType;
    QRadioButton *rbtn_Qwerty;
    QRadioButton *rbtn_Alpha;
    QRadioButton *rbtn_Sumbols;
    QGroupBox *groupBox_2;
    QPushButton *btnA;
    QPushButton *btnB;
    QPushButton *btnC;
    QPushButton *btnD;
    QPushButton *btnG;
    QPushButton *btnE;
    QPushButton *btnF;
    QPushButton *btnH;
    QPushButton *btnJ;
    QPushButton *btnI;
    QPushButton *btnM;
    QPushButton *btnK;
    QPushButton *btnL;
    QPushButton *btnP;
    QPushButton *btnR;
    QPushButton *btnN;
    QPushButton *btnS;
    QPushButton *btnO;
    QPushButton *btnT;
    QPushButton *btnQ;
    QPushButton *btnW;
    QPushButton *btn_At;
    QPushButton *btnX;
    QPushButton *btnU;
    QPushButton *btnY;
    QPushButton *btn_Dash;
    QPushButton *btnPeriod;
    QPushButton *btnZ;
    QPushButton *btnV;
    QPushButton *btn_Underscore;
    QPushButton *btn_Semicolon;
    QPushButton *btn_Plus;
    QPushButton *btn_Colon;
    QPushButton *btn_QuestionMark;
    QPushButton *btn_Slash;
    QPushButton *btn_Exclamation;
    QPushButton *btn_Pound;
    QPushButton *btn_Caret;
    QPushButton *btn_Space;
    QPushButton *btn_Return;
    QPushButton *btn_BackSpace;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(800, 333);
        grpKeyboardType = new QGroupBox(Form);
        grpKeyboardType->setObjectName(QStringLiteral("grpKeyboardType"));
        grpKeyboardType->setGeometry(QRect(640, 0, 161, 131));
        rbtn_Qwerty = new QRadioButton(grpKeyboardType);
        rbtn_Qwerty->setObjectName(QStringLiteral("rbtn_Qwerty"));
        rbtn_Qwerty->setGeometry(QRect(20, 10, 131, 31));
        QFont font;
        font.setPointSize(20);
        rbtn_Qwerty->setFont(font);
        rbtn_Alpha = new QRadioButton(grpKeyboardType);
        rbtn_Alpha->setObjectName(QStringLiteral("rbtn_Alpha"));
        rbtn_Alpha->setGeometry(QRect(20, 50, 131, 31));
        rbtn_Alpha->setFont(font);
        rbtn_Sumbols = new QRadioButton(grpKeyboardType);
        rbtn_Sumbols->setObjectName(QStringLiteral("rbtn_Sumbols"));
        rbtn_Sumbols->setGeometry(QRect(20, 90, 121, 31));
        rbtn_Sumbols->setFont(font);
        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, 0, 781, 321));
        btnA = new QPushButton(groupBox_2);
        btnA->setObjectName(QStringLiteral("btnA"));
        btnA->setGeometry(QRect(20, 120, 55, 55));
        btnB = new QPushButton(groupBox_2);
        btnB->setObjectName(QStringLiteral("btnB"));
        btnB->setGeometry(QRect(290, 190, 55, 55));
        btnC = new QPushButton(groupBox_2);
        btnC->setObjectName(QStringLiteral("btnC"));
        btnC->setGeometry(QRect(170, 190, 55, 55));
        btnD = new QPushButton(groupBox_2);
        btnD->setObjectName(QStringLiteral("btnD"));
        btnD->setGeometry(QRect(140, 120, 55, 55));
        btnG = new QPushButton(groupBox_2);
        btnG->setObjectName(QStringLiteral("btnG"));
        btnG->setGeometry(QRect(260, 120, 55, 55));
        btnE = new QPushButton(groupBox_2);
        btnE->setObjectName(QStringLiteral("btnE"));
        btnE->setGeometry(QRect(120, 60, 55, 55));
        btnF = new QPushButton(groupBox_2);
        btnF->setObjectName(QStringLiteral("btnF"));
        btnF->setGeometry(QRect(200, 120, 55, 55));
        btnH = new QPushButton(groupBox_2);
        btnH->setObjectName(QStringLiteral("btnH"));
        btnH->setGeometry(QRect(320, 120, 55, 55));
        btnJ = new QPushButton(groupBox_2);
        btnJ->setObjectName(QStringLiteral("btnJ"));
        btnJ->setGeometry(QRect(380, 120, 55, 55));
        btnI = new QPushButton(groupBox_2);
        btnI->setObjectName(QStringLiteral("btnI"));
        btnI->setGeometry(QRect(420, 60, 55, 55));
        btnM = new QPushButton(groupBox_2);
        btnM->setObjectName(QStringLiteral("btnM"));
        btnM->setGeometry(QRect(410, 190, 55, 55));
        btnK = new QPushButton(groupBox_2);
        btnK->setObjectName(QStringLiteral("btnK"));
        btnK->setGeometry(QRect(440, 120, 55, 55));
        btnL = new QPushButton(groupBox_2);
        btnL->setObjectName(QStringLiteral("btnL"));
        btnL->setGeometry(QRect(500, 120, 55, 55));
        btnP = new QPushButton(groupBox_2);
        btnP->setObjectName(QStringLiteral("btnP"));
        btnP->setGeometry(QRect(540, 60, 55, 55));
        btnR = new QPushButton(groupBox_2);
        btnR->setObjectName(QStringLiteral("btnR"));
        btnR->setGeometry(QRect(180, 60, 55, 55));
        btnN = new QPushButton(groupBox_2);
        btnN->setObjectName(QStringLiteral("btnN"));
        btnN->setGeometry(QRect(350, 190, 55, 55));
        btnS = new QPushButton(groupBox_2);
        btnS->setObjectName(QStringLiteral("btnS"));
        btnS->setGeometry(QRect(80, 120, 55, 55));
        btnO = new QPushButton(groupBox_2);
        btnO->setObjectName(QStringLiteral("btnO"));
        btnO->setGeometry(QRect(480, 60, 55, 55));
        btnT = new QPushButton(groupBox_2);
        btnT->setObjectName(QStringLiteral("btnT"));
        btnT->setGeometry(QRect(240, 60, 55, 55));
        btnQ = new QPushButton(groupBox_2);
        btnQ->setObjectName(QStringLiteral("btnQ"));
        btnQ->setGeometry(QRect(0, 60, 55, 55));
        btnW = new QPushButton(groupBox_2);
        btnW->setObjectName(QStringLiteral("btnW"));
        btnW->setGeometry(QRect(60, 60, 55, 55));
        btn_At = new QPushButton(groupBox_2);
        btn_At->setObjectName(QStringLiteral("btn_At"));
        btn_At->setGeometry(QRect(600, 190, 55, 55));
        btnX = new QPushButton(groupBox_2);
        btnX->setObjectName(QStringLiteral("btnX"));
        btnX->setGeometry(QRect(110, 190, 55, 55));
        btnU = new QPushButton(groupBox_2);
        btnU->setObjectName(QStringLiteral("btnU"));
        btnU->setGeometry(QRect(360, 60, 55, 55));
        btnY = new QPushButton(groupBox_2);
        btnY->setObjectName(QStringLiteral("btnY"));
        btnY->setGeometry(QRect(300, 60, 55, 55));
        btn_Dash = new QPushButton(groupBox_2);
        btn_Dash->setObjectName(QStringLiteral("btn_Dash"));
        btn_Dash->setGeometry(QRect(540, 190, 55, 55));
        btnPeriod = new QPushButton(groupBox_2);
        btnPeriod->setObjectName(QStringLiteral("btnPeriod"));
        btnPeriod->setGeometry(QRect(480, 260, 55, 55));
        btnZ = new QPushButton(groupBox_2);
        btnZ->setObjectName(QStringLiteral("btnZ"));
        btnZ->setGeometry(QRect(50, 190, 55, 55));
        btnV = new QPushButton(groupBox_2);
        btnV->setObjectName(QStringLiteral("btnV"));
        btnV->setGeometry(QRect(230, 190, 55, 55));
        btn_Underscore = new QPushButton(groupBox_2);
        btn_Underscore->setObjectName(QStringLiteral("btn_Underscore"));
        btn_Underscore->setGeometry(QRect(480, 190, 55, 55));
        btn_Semicolon = new QPushButton(groupBox_2);
        btn_Semicolon->setObjectName(QStringLiteral("btn_Semicolon"));
        btn_Semicolon->setGeometry(QRect(560, 120, 55, 55));
        btn_Plus = new QPushButton(groupBox_2);
        btn_Plus->setObjectName(QStringLiteral("btn_Plus"));
        btn_Plus->setGeometry(QRect(0, 260, 55, 55));
        btn_Colon = new QPushButton(groupBox_2);
        btn_Colon->setObjectName(QStringLiteral("btn_Colon"));
        btn_Colon->setGeometry(QRect(190, 270, 55, 55));
        btn_QuestionMark = new QPushButton(groupBox_2);
        btn_QuestionMark->setObjectName(QStringLiteral("btn_QuestionMark"));
        btn_QuestionMark->setGeometry(QRect(70, 260, 55, 55));
        btn_Slash = new QPushButton(groupBox_2);
        btn_Slash->setObjectName(QStringLiteral("btn_Slash"));
        btn_Slash->setGeometry(QRect(130, 260, 55, 55));
        btn_Exclamation = new QPushButton(groupBox_2);
        btn_Exclamation->setObjectName(QStringLiteral("btn_Exclamation"));
        btn_Exclamation->setGeometry(QRect(250, 260, 55, 55));
        btn_Pound = new QPushButton(groupBox_2);
        btn_Pound->setObjectName(QStringLiteral("btn_Pound"));
        btn_Pound->setGeometry(QRect(660, 190, 55, 55));
        btn_Caret = new QPushButton(groupBox_2);
        btn_Caret->setObjectName(QStringLiteral("btn_Caret"));
        btn_Caret->setGeometry(QRect(720, 190, 55, 55));
        btn_Space = new QPushButton(groupBox_2);
        btn_Space->setObjectName(QStringLiteral("btn_Space"));
        btn_Space->setGeometry(QRect(540, 260, 121, 55));
        btn_Return = new QPushButton(groupBox_2);
        btn_Return->setObjectName(QStringLiteral("btn_Return"));
        btn_Return->setGeometry(QRect(664, 260, 111, 55));
        btn_BackSpace = new QPushButton(groupBox_2);
        btn_BackSpace->setObjectName(QStringLiteral("btn_BackSpace"));
        btn_BackSpace->setGeometry(QRect(460, 0, 161, 55));
        groupBox_2->raise();
        grpKeyboardType->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        grpKeyboardType->setTitle(QString());
        rbtn_Qwerty->setText(QApplication::translate("Form", "QWERTY", 0));
        rbtn_Alpha->setText(QApplication::translate("Form", "Alpha", 0));
        rbtn_Sumbols->setText(QApplication::translate("Form", "Symbols", 0));
        groupBox_2->setTitle(QString());
        btnA->setText(QApplication::translate("Form", "A", 0));
        btnB->setText(QApplication::translate("Form", "B", 0));
        btnC->setText(QApplication::translate("Form", "C", 0));
        btnD->setText(QApplication::translate("Form", "D", 0));
        btnG->setText(QApplication::translate("Form", "G", 0));
        btnE->setText(QApplication::translate("Form", "E", 0));
        btnF->setText(QApplication::translate("Form", "F", 0));
        btnH->setText(QApplication::translate("Form", "H", 0));
        btnJ->setText(QApplication::translate("Form", "J", 0));
        btnI->setText(QApplication::translate("Form", "I", 0));
        btnM->setText(QApplication::translate("Form", "M", 0));
        btnK->setText(QApplication::translate("Form", "K", 0));
        btnL->setText(QApplication::translate("Form", "L", 0));
        btnP->setText(QApplication::translate("Form", "P", 0));
        btnR->setText(QApplication::translate("Form", "R", 0));
        btnN->setText(QApplication::translate("Form", "N", 0));
        btnS->setText(QApplication::translate("Form", "S", 0));
        btnO->setText(QApplication::translate("Form", "O", 0));
        btnT->setText(QApplication::translate("Form", "T", 0));
        btnQ->setText(QApplication::translate("Form", "Q", 0));
        btnW->setText(QApplication::translate("Form", "W", 0));
        btn_At->setText(QApplication::translate("Form", "@", 0));
        btnX->setText(QApplication::translate("Form", "X", 0));
        btnU->setText(QApplication::translate("Form", "U", 0));
        btnY->setText(QApplication::translate("Form", "Y", 0));
        btn_Dash->setText(QApplication::translate("Form", "-", 0));
        btnPeriod->setText(QApplication::translate("Form", ".", 0));
        btnZ->setText(QApplication::translate("Form", "Z", 0));
        btnV->setText(QApplication::translate("Form", "V", 0));
        btn_Underscore->setText(QApplication::translate("Form", "_", 0));
        btn_Semicolon->setText(QApplication::translate("Form", ";", 0));
        btn_Plus->setText(QApplication::translate("Form", "+", 0));
        btn_Colon->setText(QApplication::translate("Form", ":", 0));
        btn_QuestionMark->setText(QApplication::translate("Form", "?", 0));
        btn_Slash->setText(QApplication::translate("Form", "/", 0));
        btn_Exclamation->setText(QApplication::translate("Form", "!", 0));
        btn_Pound->setText(QApplication::translate("Form", "#", 0));
        btn_Caret->setText(QApplication::translate("Form", "^", 0));
        btn_Space->setText(QApplication::translate("Form", "Space", 0));
        btn_Return->setText(QApplication::translate("Form", "Enter", 0));
        btn_BackSpace->setText(QApplication::translate("Form", "Back Space", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWERTY_KEYPAD_H
