/********************************************************************************
** Form generated from reading UI file 'dlgquestions.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGQUESTIONS_H
#define UI_DLGQUESTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <clickablelineedit.h>

QT_BEGIN_NAMESPACE

class Ui_CDlgQuestions
{
public:
    QWidget *widgetEdit;
    QWidget *widgetKeyboard;
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
    QPushButton *btn_Ampersand;
    QPushButton *btn_Dollar;
    QPushButton *btn_Plus;
    QPushButton *btn_Colon;
    QPushButton *btn_Apostrophe;
    QPushButton *btn_Quote;
    QPushButton *btn_QuestionMark;
    QPushButton *btn_Slash;
    QPushButton *btn_Splat;
    QPushButton *btn_LeftParen;
    QPushButton *btn_Exclamation;
    QPushButton *btn_Pound;
    QPushButton *btn_Percent;
    QPushButton *btn_RightParen;
    QPushButton *btn_Caret;
    QPushButton *btn_0;
    QPushButton *btn_7;
    QPushButton *btn_Space;
    QPushButton *btn_9;
    QPushButton *btn_5;
    QPushButton *btn_1;
    QPushButton *btn_3;
    QPushButton *btn_6;
    QPushButton *btn_Return;
    QPushButton *btn_8;
    QPushButton *btn_2;
    QPushButton *btn_4;
    QPushButton *btn_Back;
    QPushButton *btn_Del;
    QPushButton *btn_Close;
    QPushButton *btn_Clear;
    QPushButton *btn_LeftSquare;
    QPushButton *btn_LeftCurly;
    QPushButton *btn_RightSquare;
    QPushButton *btn_Back_Slash;
    QPushButton *btn_LeftAngle;
    QPushButton *btn_Tilde;
    QPushButton *btn_RightAngle;
    QPushButton *btn_RightCurly;
    QPushButton *btn_OpenApost;
    QPushButton *btn_Upper_Lower;
    QLabel *lblCurrentEditFieldName;
    QLineEdit *edText;
    QWidget *widget;
    CClickableLineEdit *codeId;
    QDialogButtonBox *buttonBoxQuestions;
    QLabel *label_question1;
    QLabel *label_question2;
    QLabel *label_question3;
    QLabel *labelLockNum;
    CClickableLineEdit *edtAnswer1;
    QPushButton *clrAnswer1;
    CClickableLineEdit *edtAnswer2;
    QPushButton *clrAnswer2;
    CClickableLineEdit *edtAnswer3;
    QPushButton *clrAnswer3;

    void setupUi(QDialog *CDlgQuestions)
    {
        if (CDlgQuestions->objectName().isEmpty())
            CDlgQuestions->setObjectName(QStringLiteral("CDlgQuestions"));
        CDlgQuestions->resize(800, 480);
        widgetEdit = new QWidget(CDlgQuestions);
        widgetEdit->setObjectName(QStringLiteral("widgetEdit"));
        widgetEdit->setEnabled(true);
        widgetEdit->setGeometry(QRect(0, 0, 800, 480));
        QFont font;
        font.setPointSize(15);
        widgetEdit->setFont(font);
        widgetKeyboard = new QWidget(widgetEdit);
        widgetKeyboard->setObjectName(QStringLiteral("widgetKeyboard"));
        widgetKeyboard->setGeometry(QRect(0, 119, 800, 361));
        widgetKeyboard->setFont(font);
        groupBox_2 = new QGroupBox(widgetKeyboard);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, -10, 781, 371));
        groupBox_2->setFont(font);
        btnA = new QPushButton(groupBox_2);
        btnA->setObjectName(QStringLiteral("btnA"));
        btnA->setGeometry(QRect(0, 17, 55, 55));
        btnA->setFont(font);
        btnB = new QPushButton(groupBox_2);
        btnB->setObjectName(QStringLiteral("btnB"));
        btnB->setGeometry(QRect(60, 17, 55, 55));
        btnB->setFont(font);
        btnC = new QPushButton(groupBox_2);
        btnC->setObjectName(QStringLiteral("btnC"));
        btnC->setGeometry(QRect(120, 17, 55, 55));
        btnC->setFont(font);
        btnD = new QPushButton(groupBox_2);
        btnD->setObjectName(QStringLiteral("btnD"));
        btnD->setGeometry(QRect(180, 17, 55, 55));
        btnD->setFont(font);
        btnG = new QPushButton(groupBox_2);
        btnG->setObjectName(QStringLiteral("btnG"));
        btnG->setGeometry(QRect(360, 17, 55, 55));
        btnG->setFont(font);
        btnE = new QPushButton(groupBox_2);
        btnE->setObjectName(QStringLiteral("btnE"));
        btnE->setGeometry(QRect(240, 17, 55, 55));
        btnE->setFont(font);
        btnF = new QPushButton(groupBox_2);
        btnF->setObjectName(QStringLiteral("btnF"));
        btnF->setGeometry(QRect(300, 17, 55, 55));
        btnF->setFont(font);
        btnH = new QPushButton(groupBox_2);
        btnH->setObjectName(QStringLiteral("btnH"));
        btnH->setGeometry(QRect(420, 17, 55, 55));
        btnH->setFont(font);
        btnJ = new QPushButton(groupBox_2);
        btnJ->setObjectName(QStringLiteral("btnJ"));
        btnJ->setGeometry(QRect(540, 17, 55, 55));
        btnJ->setFont(font);
        btnI = new QPushButton(groupBox_2);
        btnI->setObjectName(QStringLiteral("btnI"));
        btnI->setGeometry(QRect(480, 17, 55, 55));
        btnI->setFont(font);
        btnM = new QPushButton(groupBox_2);
        btnM->setObjectName(QStringLiteral("btnM"));
        btnM->setGeometry(QRect(120, 77, 55, 55));
        btnM->setFont(font);
        btnK = new QPushButton(groupBox_2);
        btnK->setObjectName(QStringLiteral("btnK"));
        btnK->setGeometry(QRect(0, 77, 55, 55));
        btnK->setFont(font);
        btnL = new QPushButton(groupBox_2);
        btnL->setObjectName(QStringLiteral("btnL"));
        btnL->setGeometry(QRect(60, 77, 55, 55));
        btnL->setFont(font);
        btnP = new QPushButton(groupBox_2);
        btnP->setObjectName(QStringLiteral("btnP"));
        btnP->setGeometry(QRect(300, 77, 55, 55));
        btnP->setFont(font);
        btnR = new QPushButton(groupBox_2);
        btnR->setObjectName(QStringLiteral("btnR"));
        btnR->setGeometry(QRect(420, 77, 55, 55));
        btnR->setFont(font);
        btnN = new QPushButton(groupBox_2);
        btnN->setObjectName(QStringLiteral("btnN"));
        btnN->setGeometry(QRect(180, 77, 55, 55));
        btnN->setFont(font);
        btnS = new QPushButton(groupBox_2);
        btnS->setObjectName(QStringLiteral("btnS"));
        btnS->setGeometry(QRect(480, 77, 55, 55));
        btnS->setFont(font);
        btnO = new QPushButton(groupBox_2);
        btnO->setObjectName(QStringLiteral("btnO"));
        btnO->setGeometry(QRect(240, 77, 55, 55));
        btnO->setFont(font);
        btnT = new QPushButton(groupBox_2);
        btnT->setObjectName(QStringLiteral("btnT"));
        btnT->setGeometry(QRect(540, 77, 55, 55));
        btnT->setFont(font);
        btnQ = new QPushButton(groupBox_2);
        btnQ->setObjectName(QStringLiteral("btnQ"));
        btnQ->setGeometry(QRect(360, 77, 55, 55));
        btnQ->setFont(font);
        btnW = new QPushButton(groupBox_2);
        btnW->setObjectName(QStringLiteral("btnW"));
        btnW->setGeometry(QRect(120, 136, 55, 55));
        btnW->setFont(font);
        btn_At = new QPushButton(groupBox_2);
        btn_At->setObjectName(QStringLiteral("btn_At"));
        btn_At->setGeometry(QRect(360, 136, 55, 55));
        btn_At->setFont(font);
        btnX = new QPushButton(groupBox_2);
        btnX->setObjectName(QStringLiteral("btnX"));
        btnX->setGeometry(QRect(180, 136, 55, 55));
        btnX->setFont(font);
        btnU = new QPushButton(groupBox_2);
        btnU->setObjectName(QStringLiteral("btnU"));
        btnU->setGeometry(QRect(0, 136, 55, 55));
        btnU->setFont(font);
        btnY = new QPushButton(groupBox_2);
        btnY->setObjectName(QStringLiteral("btnY"));
        btnY->setGeometry(QRect(240, 136, 55, 55));
        btnY->setFont(font);
        btn_Dash = new QPushButton(groupBox_2);
        btn_Dash->setObjectName(QStringLiteral("btn_Dash"));
        btn_Dash->setGeometry(QRect(540, 136, 55, 55));
        btn_Dash->setFont(font);
        btnPeriod = new QPushButton(groupBox_2);
        btnPeriod->setObjectName(QStringLiteral("btnPeriod"));
        btnPeriod->setGeometry(QRect(420, 136, 55, 55));
        btnPeriod->setFont(font);
        btnZ = new QPushButton(groupBox_2);
        btnZ->setObjectName(QStringLiteral("btnZ"));
        btnZ->setGeometry(QRect(300, 136, 55, 55));
        btnZ->setFont(font);
        btnV = new QPushButton(groupBox_2);
        btnV->setObjectName(QStringLiteral("btnV"));
        btnV->setGeometry(QRect(60, 136, 55, 55));
        btnV->setFont(font);
        btn_Underscore = new QPushButton(groupBox_2);
        btn_Underscore->setObjectName(QStringLiteral("btn_Underscore"));
        btn_Underscore->setGeometry(QRect(480, 136, 55, 55));
        btn_Underscore->setFont(font);
        btn_Semicolon = new QPushButton(groupBox_2);
        btn_Semicolon->setObjectName(QStringLiteral("btn_Semicolon"));
        btn_Semicolon->setGeometry(QRect(240, 196, 55, 55));
        btn_Semicolon->setFont(font);
        btn_Ampersand = new QPushButton(groupBox_2);
        btn_Ampersand->setObjectName(QStringLiteral("btn_Ampersand"));
        btn_Ampersand->setGeometry(QRect(480, 196, 55, 55));
        btn_Ampersand->setFont(font);
        btn_Dollar = new QPushButton(groupBox_2);
        btn_Dollar->setObjectName(QStringLiteral("btn_Dollar"));
        btn_Dollar->setGeometry(QRect(540, 196, 55, 55));
        btn_Dollar->setFont(font);
        btn_Plus = new QPushButton(groupBox_2);
        btn_Plus->setObjectName(QStringLiteral("btn_Plus"));
        btn_Plus->setGeometry(QRect(0, 196, 55, 55));
        btn_Plus->setFont(font);
        btn_Colon = new QPushButton(groupBox_2);
        btn_Colon->setObjectName(QStringLiteral("btn_Colon"));
        btn_Colon->setGeometry(QRect(180, 196, 55, 55));
        btn_Colon->setFont(font);
        btn_Apostrophe = new QPushButton(groupBox_2);
        btn_Apostrophe->setObjectName(QStringLiteral("btn_Apostrophe"));
        btn_Apostrophe->setGeometry(QRect(300, 196, 55, 55));
        btn_Apostrophe->setFont(font);
        btn_Quote = new QPushButton(groupBox_2);
        btn_Quote->setObjectName(QStringLiteral("btn_Quote"));
        btn_Quote->setGeometry(QRect(360, 196, 55, 55));
        btn_Quote->setFont(font);
        btn_QuestionMark = new QPushButton(groupBox_2);
        btn_QuestionMark->setObjectName(QStringLiteral("btn_QuestionMark"));
        btn_QuestionMark->setGeometry(QRect(60, 196, 55, 55));
        btn_QuestionMark->setFont(font);
        btn_Slash = new QPushButton(groupBox_2);
        btn_Slash->setObjectName(QStringLiteral("btn_Slash"));
        btn_Slash->setGeometry(QRect(120, 196, 55, 55));
        btn_Slash->setFont(font);
        btn_Splat = new QPushButton(groupBox_2);
        btn_Splat->setObjectName(QStringLiteral("btn_Splat"));
        btn_Splat->setGeometry(QRect(420, 196, 55, 55));
        btn_Splat->setFont(font);
        btn_LeftParen = new QPushButton(groupBox_2);
        btn_LeftParen->setObjectName(QStringLiteral("btn_LeftParen"));
        btn_LeftParen->setGeometry(QRect(660, 196, 55, 55));
        btn_LeftParen->setFont(font);
        btn_Exclamation = new QPushButton(groupBox_2);
        btn_Exclamation->setObjectName(QStringLiteral("btn_Exclamation"));
        btn_Exclamation->setGeometry(QRect(600, 136, 55, 55));
        btn_Exclamation->setFont(font);
        btn_Pound = new QPushButton(groupBox_2);
        btn_Pound->setObjectName(QStringLiteral("btn_Pound"));
        btn_Pound->setGeometry(QRect(660, 136, 55, 55));
        btn_Pound->setFont(font);
        btn_Percent = new QPushButton(groupBox_2);
        btn_Percent->setObjectName(QStringLiteral("btn_Percent"));
        btn_Percent->setGeometry(QRect(600, 196, 55, 55));
        btn_Percent->setFont(font);
        btn_RightParen = new QPushButton(groupBox_2);
        btn_RightParen->setObjectName(QStringLiteral("btn_RightParen"));
        btn_RightParen->setGeometry(QRect(720, 196, 55, 55));
        btn_RightParen->setFont(font);
        btn_Caret = new QPushButton(groupBox_2);
        btn_Caret->setObjectName(QStringLiteral("btn_Caret"));
        btn_Caret->setGeometry(QRect(720, 136, 55, 55));
        btn_Caret->setFont(font);
        btn_0 = new QPushButton(groupBox_2);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(0, 314, 55, 55));
        btn_0->setFont(font);
        btn_7 = new QPushButton(groupBox_2);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(420, 314, 55, 55));
        btn_7->setFont(font);
        btn_Space = new QPushButton(groupBox_2);
        btn_Space->setObjectName(QStringLiteral("btn_Space"));
        btn_Space->setGeometry(QRect(600, 314, 91, 55));
        QFont font1;
        font1.setPointSize(12);
        btn_Space->setFont(font1);
        btn_9 = new QPushButton(groupBox_2);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(540, 314, 55, 55));
        btn_9->setFont(font);
        btn_5 = new QPushButton(groupBox_2);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(300, 314, 55, 55));
        btn_5->setFont(font);
        btn_1 = new QPushButton(groupBox_2);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(60, 314, 55, 55));
        btn_1->setFont(font);
        btn_3 = new QPushButton(groupBox_2);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(180, 314, 55, 55));
        btn_3->setFont(font);
        btn_6 = new QPushButton(groupBox_2);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(360, 314, 55, 55));
        btn_6->setFont(font);
        btn_Return = new QPushButton(groupBox_2);
        btn_Return->setObjectName(QStringLiteral("btn_Return"));
        btn_Return->setGeometry(QRect(694, 314, 81, 55));
        btn_Return->setFont(font1);
        btn_8 = new QPushButton(groupBox_2);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(480, 314, 55, 55));
        btn_8->setFont(font);
        btn_2 = new QPushButton(groupBox_2);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(120, 314, 55, 55));
        btn_2->setFont(font);
        btn_4 = new QPushButton(groupBox_2);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(240, 314, 55, 55));
        btn_4->setFont(font);
        btn_Back = new QPushButton(groupBox_2);
        btn_Back->setObjectName(QStringLiteral("btn_Back"));
        btn_Back->setGeometry(QRect(600, 17, 91, 55));
        btn_Back->setFont(font1);
        btn_Del = new QPushButton(groupBox_2);
        btn_Del->setObjectName(QStringLiteral("btn_Del"));
        btn_Del->setGeometry(QRect(600, 78, 91, 55));
        btn_Del->setFont(font1);
        btn_Close = new QPushButton(groupBox_2);
        btn_Close->setObjectName(QStringLiteral("btn_Close"));
        btn_Close->setGeometry(QRect(696, 17, 80, 55));
        btn_Close->setFont(font1);
        btn_Clear = new QPushButton(groupBox_2);
        btn_Clear->setObjectName(QStringLiteral("btn_Clear"));
        btn_Clear->setGeometry(QRect(695, 78, 80, 55));
        btn_Clear->setFont(font1);
        btn_LeftSquare = new QPushButton(groupBox_2);
        btn_LeftSquare->setObjectName(QStringLiteral("btn_LeftSquare"));
        btn_LeftSquare->setGeometry(QRect(540, 254, 55, 55));
        btn_LeftSquare->setFont(font);
        btn_LeftCurly = new QPushButton(groupBox_2);
        btn_LeftCurly->setObjectName(QStringLiteral("btn_LeftCurly"));
        btn_LeftCurly->setGeometry(QRect(420, 254, 55, 55));
        btn_LeftCurly->setFont(font);
        btn_RightSquare = new QPushButton(groupBox_2);
        btn_RightSquare->setObjectName(QStringLiteral("btn_RightSquare"));
        btn_RightSquare->setGeometry(QRect(600, 254, 55, 55));
        btn_RightSquare->setFont(font);
        btn_Back_Slash = new QPushButton(groupBox_2);
        btn_Back_Slash->setObjectName(QStringLiteral("btn_Back_Slash"));
        btn_Back_Slash->setGeometry(QRect(120, 254, 55, 55));
        btn_Back_Slash->setFont(font);
        btn_LeftAngle = new QPushButton(groupBox_2);
        btn_LeftAngle->setObjectName(QStringLiteral("btn_LeftAngle"));
        btn_LeftAngle->setGeometry(QRect(300, 254, 55, 55));
        btn_LeftAngle->setFont(font);
        btn_Tilde = new QPushButton(groupBox_2);
        btn_Tilde->setObjectName(QStringLiteral("btn_Tilde"));
        btn_Tilde->setGeometry(QRect(240, 254, 55, 55));
        btn_Tilde->setFont(font);
        btn_RightAngle = new QPushButton(groupBox_2);
        btn_RightAngle->setObjectName(QStringLiteral("btn_RightAngle"));
        btn_RightAngle->setGeometry(QRect(360, 254, 55, 55));
        btn_RightAngle->setFont(font);
        btn_RightCurly = new QPushButton(groupBox_2);
        btn_RightCurly->setObjectName(QStringLiteral("btn_RightCurly"));
        btn_RightCurly->setGeometry(QRect(480, 254, 55, 55));
        btn_RightCurly->setFont(font);
        btn_OpenApost = new QPushButton(groupBox_2);
        btn_OpenApost->setObjectName(QStringLiteral("btn_OpenApost"));
        btn_OpenApost->setGeometry(QRect(180, 254, 55, 55));
        btn_OpenApost->setFont(font);
        btn_Upper_Lower = new QPushButton(groupBox_2);
        btn_Upper_Lower->setObjectName(QStringLiteral("btn_Upper_Lower"));
        btn_Upper_Lower->setGeometry(QRect(660, 254, 111, 55));
        btn_Upper_Lower->setFont(font1);
        btn_Upper_Lower->setCheckable(true);
        btn_Upper_Lower->setChecked(false);
        lblCurrentEditFieldName = new QLabel(widgetEdit);
        lblCurrentEditFieldName->setObjectName(QStringLiteral("lblCurrentEditFieldName"));
        lblCurrentEditFieldName->setGeometry(QRect(20, 20, 411, 21));
        lblCurrentEditFieldName->setFont(font);
        edText = new QLineEdit(widgetEdit);
        edText->setObjectName(QStringLiteral("edText"));
        edText->setGeometry(QRect(10, 50, 771, 71));
        widget = new QWidget(CDlgQuestions);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 800, 480));
        widget->setAutoFillBackground(true);
        codeId = new CClickableLineEdit(widget);
        codeId->setObjectName(QStringLiteral("codeId"));
        codeId->setGeometry(QRect(20, 20, 91, 25));
        codeId->setFont(font1);
        codeId->setVisible(
	false
      );
        buttonBoxQuestions = new QDialogButtonBox(widget);
        buttonBoxQuestions->setObjectName(QStringLiteral("buttonBoxQuestions"));
        buttonBoxQuestions->setGeometry(QRect(230, 380, 241, 51));
        buttonBoxQuestions->setFont(font1);
        buttonBoxQuestions->setOrientation(Qt::Horizontal);
        buttonBoxQuestions->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_question1 = new QLabel(widget);
        label_question1->setObjectName(QStringLiteral("label_question1"));
        label_question1->setGeometry(QRect(40, 79, 580, 28));
        label_question1->setFont(font1);
        label_question2 = new QLabel(widget);
        label_question2->setObjectName(QStringLiteral("label_question2"));
        label_question2->setGeometry(QRect(40, 188, 580, 28));
        label_question2->setFont(font1);
        label_question3 = new QLabel(widget);
        label_question3->setObjectName(QStringLiteral("label_question3"));
        label_question3->setGeometry(QRect(40, 295, 580, 28));
        label_question3->setFont(font1);
        labelLockNum = new QLabel(widget);
        labelLockNum->setObjectName(QStringLiteral("labelLockNum"));
        labelLockNum->setGeometry(QRect(220, 30, 300, 25));
        labelLockNum->setFont(font1);
        edtAnswer1 = new CClickableLineEdit(widget);
        edtAnswer1->setObjectName(QStringLiteral("edtAnswer1"));
        edtAnswer1->setGeometry(QRect(40, 110, 580, 41));
        edtAnswer1->setFont(font1);
        edtAnswer1->setMaxLength(18);
        edtAnswer1->setReadOnly(true);
        clrAnswer1 = new QPushButton(widget);
        clrAnswer1->setObjectName(QStringLiteral("clrAnswer1"));
        clrAnswer1->setGeometry(QRect(665, 110, 75, 41));
        clrAnswer1->setFont(font1);
        edtAnswer2 = new CClickableLineEdit(widget);
        edtAnswer2->setObjectName(QStringLiteral("edtAnswer2"));
        edtAnswer2->setGeometry(QRect(40, 220, 580, 41));
        edtAnswer2->setFont(font1);
        clrAnswer2 = new QPushButton(widget);
        clrAnswer2->setObjectName(QStringLiteral("clrAnswer2"));
        clrAnswer2->setGeometry(QRect(665, 220, 75, 41));
        clrAnswer2->setFont(font1);
        edtAnswer3 = new CClickableLineEdit(widget);
        edtAnswer3->setObjectName(QStringLiteral("edtAnswer3"));
        edtAnswer3->setGeometry(QRect(40, 327, 580, 41));
        edtAnswer3->setFont(font1);
        edtAnswer3->setMaxLength(25);
        edtAnswer3->setReadOnly(true);
        clrAnswer3 = new QPushButton(widget);
        clrAnswer3->setObjectName(QStringLiteral("clrAnswer3"));
        clrAnswer3->setGeometry(QRect(665, 327, 75, 41));
        clrAnswer3->setFont(font1);

        retranslateUi(CDlgQuestions);

        QMetaObject::connectSlotsByName(CDlgQuestions);
    } // setupUi

    void retranslateUi(QDialog *CDlgQuestions)
    {
        CDlgQuestions->setWindowTitle(QApplication::translate("CDlgQuestions", "Dialog", 0));
        groupBox_2->setTitle(QString());
        btnA->setText(QApplication::translate("CDlgQuestions", "A", 0));
        btnB->setText(QApplication::translate("CDlgQuestions", "B", 0));
        btnC->setText(QApplication::translate("CDlgQuestions", "C", 0));
        btnD->setText(QApplication::translate("CDlgQuestions", "D", 0));
        btnG->setText(QApplication::translate("CDlgQuestions", "G", 0));
        btnE->setText(QApplication::translate("CDlgQuestions", "E", 0));
        btnF->setText(QApplication::translate("CDlgQuestions", "F", 0));
        btnH->setText(QApplication::translate("CDlgQuestions", "H", 0));
        btnJ->setText(QApplication::translate("CDlgQuestions", "J", 0));
        btnI->setText(QApplication::translate("CDlgQuestions", "I", 0));
        btnM->setText(QApplication::translate("CDlgQuestions", "M", 0));
        btnK->setText(QApplication::translate("CDlgQuestions", "K", 0));
        btnL->setText(QApplication::translate("CDlgQuestions", "L", 0));
        btnP->setText(QApplication::translate("CDlgQuestions", "P", 0));
        btnR->setText(QApplication::translate("CDlgQuestions", "R", 0));
        btnN->setText(QApplication::translate("CDlgQuestions", "N", 0));
        btnS->setText(QApplication::translate("CDlgQuestions", "S", 0));
        btnO->setText(QApplication::translate("CDlgQuestions", "O", 0));
        btnT->setText(QApplication::translate("CDlgQuestions", "T", 0));
        btnQ->setText(QApplication::translate("CDlgQuestions", "Q", 0));
        btnW->setText(QApplication::translate("CDlgQuestions", "W", 0));
        btn_At->setText(QApplication::translate("CDlgQuestions", "@", 0));
        btnX->setText(QApplication::translate("CDlgQuestions", "X", 0));
        btnU->setText(QApplication::translate("CDlgQuestions", "U", 0));
        btnY->setText(QApplication::translate("CDlgQuestions", "Y", 0));
        btn_Dash->setText(QApplication::translate("CDlgQuestions", "-", 0));
        btnPeriod->setText(QApplication::translate("CDlgQuestions", ".", 0));
        btnZ->setText(QApplication::translate("CDlgQuestions", "Z", 0));
        btnV->setText(QApplication::translate("CDlgQuestions", "V", 0));
        btn_Underscore->setText(QApplication::translate("CDlgQuestions", "_", 0));
        btn_Semicolon->setText(QApplication::translate("CDlgQuestions", ";", 0));
        btn_Ampersand->setText(QApplication::translate("CDlgQuestions", "&&", 0));
        btn_Dollar->setText(QApplication::translate("CDlgQuestions", "$", 0));
        btn_Plus->setText(QApplication::translate("CDlgQuestions", "+", 0));
        btn_Colon->setText(QApplication::translate("CDlgQuestions", ":", 0));
        btn_Apostrophe->setText(QApplication::translate("CDlgQuestions", "'", 0));
        btn_Quote->setText(QApplication::translate("CDlgQuestions", "\"", 0));
        btn_QuestionMark->setText(QApplication::translate("CDlgQuestions", "?", 0));
        btn_Slash->setText(QApplication::translate("CDlgQuestions", "/", 0));
        btn_Splat->setText(QApplication::translate("CDlgQuestions", "*", 0));
        btn_LeftParen->setText(QApplication::translate("CDlgQuestions", "(", 0));
        btn_Exclamation->setText(QApplication::translate("CDlgQuestions", "!", 0));
        btn_Pound->setText(QApplication::translate("CDlgQuestions", "#", 0));
        btn_Percent->setText(QApplication::translate("CDlgQuestions", "%", 0));
        btn_RightParen->setText(QApplication::translate("CDlgQuestions", ")", 0));
        btn_Caret->setText(QApplication::translate("CDlgQuestions", "^", 0));
        btn_0->setText(QApplication::translate("CDlgQuestions", "0", 0));
        btn_7->setText(QApplication::translate("CDlgQuestions", "7", 0));
        btn_Space->setText(QApplication::translate("CDlgQuestions", "Space", 0));
        btn_9->setText(QApplication::translate("CDlgQuestions", "9", 0));
        btn_5->setText(QApplication::translate("CDlgQuestions", "5", 0));
        btn_1->setText(QApplication::translate("CDlgQuestions", "1", 0));
        btn_3->setText(QApplication::translate("CDlgQuestions", "3", 0));
        btn_6->setText(QApplication::translate("CDlgQuestions", "6", 0));
        btn_Return->setText(QApplication::translate("CDlgQuestions", "Enter", 0));
        btn_8->setText(QApplication::translate("CDlgQuestions", "8", 0));
        btn_2->setText(QApplication::translate("CDlgQuestions", "2", 0));
        btn_4->setText(QApplication::translate("CDlgQuestions", "4", 0));
        btn_Back->setText(QApplication::translate("CDlgQuestions", "Back", 0));
        btn_Del->setText(QApplication::translate("CDlgQuestions", "Del", 0));
        btn_Close->setText(QApplication::translate("CDlgQuestions", "Close", 0));
        btn_Clear->setText(QApplication::translate("CDlgQuestions", "Clear", 0));
        btn_LeftSquare->setText(QApplication::translate("CDlgQuestions", "[", 0));
        btn_LeftCurly->setText(QApplication::translate("CDlgQuestions", "{", 0));
        btn_RightSquare->setText(QApplication::translate("CDlgQuestions", "]", 0));
        btn_Back_Slash->setText(QApplication::translate("CDlgQuestions", "\\", 0));
        btn_LeftAngle->setText(QApplication::translate("CDlgQuestions", "<", 0));
        btn_Tilde->setText(QApplication::translate("CDlgQuestions", "~", 0));
        btn_RightAngle->setText(QApplication::translate("CDlgQuestions", ">", 0));
        btn_RightCurly->setText(QApplication::translate("CDlgQuestions", "}", 0));
        btn_OpenApost->setText(QApplication::translate("CDlgQuestions", "`", 0));
        btn_Upper_Lower->setText(QApplication::translate("CDlgQuestions", "Lower", 0));
        lblCurrentEditFieldName->setText(QApplication::translate("CDlgQuestions", "TextLabel", 0));
        label_question1->setText(QString());
        label_question2->setText(QString());
        label_question3->setText(QString());
        labelLockNum->setText(QApplication::translate("CDlgQuestions", "Please answer the following questions:", 0));
        clrAnswer1->setText(QApplication::translate("CDlgQuestions", "Clear", 0));
        clrAnswer2->setText(QApplication::translate("CDlgQuestions", "Clear", 0));
        edtAnswer3->setInputMask(QString());
        clrAnswer3->setText(QApplication::translate("CDlgQuestions", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class CDlgQuestions: public Ui_CDlgQuestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGQUESTIONS_H
