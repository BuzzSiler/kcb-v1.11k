/********************************************************************************
** Form generated from reading UI file 'frmusercode.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMUSERCODE_H
#define UI_FRMUSERCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CFrmUserCode
{
public:
    QLabel *lVersion;
    QGroupBox *grpKeypad;
    QPushButton *btn_0;
    QPushButton *btn_7;
    QPushButton *btn_9;
    QPushButton *btn_5;
    QPushButton *btn_1;
    QPushButton *btn_3;
    QPushButton *btn_6;
    QPushButton *btn_Return;
    QPushButton *btn_8;
    QPushButton *btn_2;
    QPushButton *btn_Del;
    QPushButton *btn_4;
    QPushButton *btn_Clear;
    QPushButton *btn_Cancel;
    QFrame *frame;
    QLineEdit *edCode;
    QPushButton *btnShowPassword;
    QPushButton *btnIdentifyFingerPrint;
    QLabel *lblDateTime;

    void setupUi(QDialog *CFrmUserCode)
    {
        if (CFrmUserCode->objectName().isEmpty())
            CFrmUserCode->setObjectName(QStringLiteral("CFrmUserCode"));
        CFrmUserCode->resize(800, 480);
        CFrmUserCode->setFocusPolicy(Qt::NoFocus);
        lVersion = new QLabel(CFrmUserCode);
        lVersion->setObjectName(QStringLiteral("lVersion"));
        lVersion->setGeometry(QRect(760, 460, 60, 20));
        QFont font;
        font.setPointSize(10);
        lVersion->setFont(font);
        grpKeypad = new QGroupBox(CFrmUserCode);
        grpKeypad->setObjectName(QStringLiteral("grpKeypad"));
        grpKeypad->setEnabled(true);
        grpKeypad->setGeometry(QRect(40, 120, 401, 351));
        btn_0 = new QPushButton(grpKeypad);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(80, 257, 75, 75));
        QFont font1;
        font1.setPointSize(35);
        btn_0->setFont(font1);
        btn_0->setFocusPolicy(Qt::NoFocus);
        btn_0->setAutoRepeatDelay(500);
        btn_0->setAutoRepeatInterval(1000);
        btn_7 = new QPushButton(grpKeypad);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(0, 174, 75, 75));
        btn_7->setFont(font1);
        btn_7->setFocusPolicy(Qt::NoFocus);
        btn_7->setAutoRepeatDelay(500);
        btn_7->setAutoRepeatInterval(1000);
        btn_9 = new QPushButton(grpKeypad);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(164, 174, 75, 75));
        btn_9->setFont(font1);
        btn_9->setFocusPolicy(Qt::NoFocus);
        btn_9->setAutoRepeatDelay(500);
        btn_9->setAutoRepeatInterval(1000);
        btn_5 = new QPushButton(grpKeypad);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(83, 92, 75, 75));
        btn_5->setFont(font1);
        btn_5->setFocusPolicy(Qt::NoFocus);
        btn_5->setAutoRepeatDelay(500);
        btn_5->setAutoRepeatInterval(1000);
        btn_1 = new QPushButton(grpKeypad);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(0, 10, 75, 75));
        btn_1->setFont(font1);
        btn_1->setFocusPolicy(Qt::NoFocus);
        btn_1->setAutoRepeatDelay(500);
        btn_1->setAutoRepeatInterval(1000);
        btn_3 = new QPushButton(grpKeypad);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(166, 10, 75, 75));
        btn_3->setFont(font1);
        btn_3->setFocusPolicy(Qt::NoFocus);
        btn_3->setAutoRepeatDelay(500);
        btn_3->setAutoRepeatInterval(1000);
        btn_6 = new QPushButton(grpKeypad);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(165, 92, 75, 75));
        btn_6->setFont(font1);
        btn_6->setFocusPolicy(Qt::NoFocus);
        btn_6->setAutoRepeatDelay(500);
        btn_6->setAutoRepeatInterval(1000);
        btn_Return = new QPushButton(grpKeypad);
        btn_Return->setObjectName(QStringLiteral("btn_Return"));
        btn_Return->setGeometry(QRect(201, 254, 180, 75));
        QFont font2;
        font2.setPointSize(15);
        btn_Return->setFont(font2);
        btn_Return->setFocusPolicy(Qt::NoFocus);
        btn_8 = new QPushButton(grpKeypad);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(82, 174, 75, 75));
        btn_8->setFont(font1);
        btn_8->setFocusPolicy(Qt::NoFocus);
        btn_8->setAutoRepeatDelay(500);
        btn_8->setAutoRepeatInterval(1000);
        btn_2 = new QPushButton(grpKeypad);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(82, 10, 75, 75));
        btn_2->setFont(font1);
        btn_2->setFocusPolicy(Qt::NoFocus);
        btn_2->setAutoRepeatDelay(500);
        btn_2->setAutoRepeatInterval(1000);
        btn_Del = new QPushButton(grpKeypad);
        btn_Del->setObjectName(QStringLiteral("btn_Del"));
        btn_Del->setGeometry(QRect(270, 173, 111, 75));
        btn_Del->setFont(font2);
        btn_Del->setFocusPolicy(Qt::NoFocus);
        btn_4 = new QPushButton(grpKeypad);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(0, 92, 75, 75));
        btn_4->setFont(font1);
        btn_4->setFocusPolicy(Qt::NoFocus);
        btn_4->setAutoRepeatDelay(500);
        btn_4->setAutoRepeatInterval(1000);
        btn_Clear = new QPushButton(grpKeypad);
        btn_Clear->setObjectName(QStringLiteral("btn_Clear"));
        btn_Clear->setGeometry(QRect(270, 92, 111, 75));
        btn_Clear->setFont(font2);
        btn_Clear->setFocusPolicy(Qt::NoFocus);
        btn_Cancel = new QPushButton(grpKeypad);
        btn_Cancel->setObjectName(QStringLiteral("btn_Cancel"));
        btn_Cancel->setGeometry(QRect(271, 10, 111, 75));
        btn_Cancel->setFont(font2);
        btn_Cancel->setFocusPolicy(Qt::NoFocus);
        frame = new QFrame(CFrmUserCode);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(18, 9, 761, 111));
        frame->setFocusPolicy(Qt::NoFocus);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        edCode = new QLineEdit(frame);
        edCode->setObjectName(QStringLiteral("edCode"));
        edCode->setGeometry(QRect(4, 4, 752, 101));
        QFont font3;
        font3.setFamily(QStringLiteral("Bitstream Charter"));
        font3.setPointSize(25);
        edCode->setFont(font3);
        edCode->setMouseTracking(false);
        edCode->setFocusPolicy(Qt::StrongFocus);
        edCode->setContextMenuPolicy(Qt::DefaultContextMenu);
        edCode->setAcceptDrops(false);
        edCode->setMaxLength(18);
        edCode->setEchoMode(QLineEdit::Password);
        edCode->setReadOnly(false);
        btnShowPassword = new QPushButton(CFrmUserCode);
        btnShowPassword->setObjectName(QStringLiteral("btnShowPassword"));
        btnShowPassword->setGeometry(QRect(470, 374, 97, 75));
        btnShowPassword->setFont(font2);
        btnShowPassword->setFocusPolicy(Qt::NoFocus);
        btnShowPassword->setCheckable(true);
        btnShowPassword->setChecked(false);
        btnIdentifyFingerPrint = new QPushButton(CFrmUserCode);
        btnIdentifyFingerPrint->setObjectName(QStringLiteral("btnIdentifyFingerPrint"));
        btnIdentifyFingerPrint->setGeometry(QRect(585, 374, 194, 75));
        btnIdentifyFingerPrint->setFont(font2);
        btnIdentifyFingerPrint->setCheckable(true);
        btnIdentifyFingerPrint->setChecked(false);
        btnIdentifyFingerPrint->setFocusPolicy(Qt::NoFocus);
        btnIdentifyFingerPrint->setVisible(
       true
     );
        lblDateTime = new QLabel(CFrmUserCode);
        lblDateTime->setObjectName(QStringLiteral("lblDateTime"));
        lblDateTime->setGeometry(QRect(455, 120, 321, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 127, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 63, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 0, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lblDateTime->setPalette(palette);
        QFont font4;
        font4.setPointSize(12);
        font4.setUnderline(false);
        lblDateTime->setFont(font4);
        lblDateTime->setTextFormat(Qt::PlainText);
        frame->raise();
        grpKeypad->raise();
        btnShowPassword->raise();
        lblDateTime->raise();

        retranslateUi(CFrmUserCode);

        QMetaObject::connectSlotsByName(CFrmUserCode);
    } // setupUi

    void retranslateUi(QDialog *CFrmUserCode)
    {
        CFrmUserCode->setWindowTitle(QApplication::translate("CFrmUserCode", "Dialog", 0));
        lVersion->setText(QApplication::translate("CFrmUserCode", "v1.11.k", 0));
        grpKeypad->setTitle(QString());
        btn_0->setText(QApplication::translate("CFrmUserCode", "0", 0));
        btn_7->setText(QApplication::translate("CFrmUserCode", "7", 0));
        btn_9->setText(QApplication::translate("CFrmUserCode", "9", 0));
        btn_5->setText(QApplication::translate("CFrmUserCode", "5", 0));
        btn_1->setText(QApplication::translate("CFrmUserCode", "1", 0));
        btn_3->setText(QApplication::translate("CFrmUserCode", "3", 0));
        btn_6->setText(QApplication::translate("CFrmUserCode", "6", 0));
        btn_Return->setText(QApplication::translate("CFrmUserCode", "Enter", 0));
        btn_8->setText(QApplication::translate("CFrmUserCode", "8", 0));
        btn_2->setText(QApplication::translate("CFrmUserCode", "2", 0));
        btn_Del->setText(QApplication::translate("CFrmUserCode", "Del", 0));
        btn_4->setText(QApplication::translate("CFrmUserCode", "4", 0));
        btn_Clear->setText(QApplication::translate("CFrmUserCode", "Clear", 0));
        btn_Cancel->setText(QApplication::translate("CFrmUserCode", "Cancel", 0));
        edCode->setText(QString());
        edCode->setPlaceholderText(QApplication::translate("CFrmUserCode", "<Please Enter Code #1>", 0));
        btnShowPassword->setText(QApplication::translate("CFrmUserCode", "Show", 0));
        btnIdentifyFingerPrint->setText(QApplication::translate("CFrmUserCode", "Fingerprint", 0));
        lblDateTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CFrmUserCode: public Ui_CFrmUserCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMUSERCODE_H
