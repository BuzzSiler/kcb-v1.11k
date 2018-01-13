/********************************************************************************
** Form generated from reading UI file 'frmadmininfo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMADMININFO_H
#define UI_FRMADMININFO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_CFrmAdminInfo
{
public:
    QTabWidget *tabWidget;
    QWidget *tabAdministrator;
    QPushButton *btnDone;
    QLabel *lKey;
    QCheckBox *chkUsePredictive;
    CClickableLabel *lblKey;
    QLabel *lPredictiveCodeGenResolution;
    QSpinBox *spinCodeGenResolution;
    QFrame *line_3;
    QDateTimeEdit *dtSystemTime;
    QCheckBox *cbInternetTime;
    QPushButton *btnSetTime;
    QComboBox *cbTimeZone;
    QGroupBox *gpAdminInfo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *lName;
    QLabel *lEmail;
    QLabel *lPhone;
    QLabel *lAccessCd;
    QLabel *lPassword;
    QLabel *lAssistCode;
    QLabel *lAssistPassword;
    QFrame *line_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    CClickableLabel *lblName;
    CClickableLabel *lblEmail;
    CClickableLabel *lblPhone;
    CClickableLabel *lblAccessCode;
    CClickableLabel *lblPassword;
    CClickableLabel *lblAssistCode;
    CClickableLabel *lblAssistPassword;
    QWidget *tabUtilities;
    QLineEdit *edInfo;
    QDial *dialBright;
    QPushButton *btnSetupSMTP;
    QPushButton *btnSetupVNC;
    QLabel *lblBrightness;
    QLabel *lblIpAddress;
    QLabel *lblIPAddress;
    QPushButton *btnCopyToggleSource;
    QTreeView *treeViewCopy;
    QPushButton *btnCopyFile;
    QPushButton *btnCopyFileLoadCodes;
    QLabel *lblBrandingImage;
    QPushButton *btnCopyFileBrandingImage;
    QPushButton *btnCopyFileBrandingImageReset;
    QPushButton *btnPurgeCodes;
    QPushButton *btnRebootSystem;
    QFrame *line_4;
    QLabel *lblInstallNewApp;
    QLabel *lblLoadBulkCodes;
    QCheckBox *chkShowFingerprint;
    QWidget *tabReport;
    QLabel *lReportFreq;
    QPushButton *btnSaveSettings;
    QLabel *lStartTime;
    QComboBox *cbReportFreq;
    QDateTimeEdit *dtStart;
    QCheckBox *cbReportToFile;
    QWidget *widgetImmediateReport;
    QDateTimeEdit *dtStartReport;
    QLabel *lblPrintImmediate;
    QLabel *lblStarting;
    QLabel *lblEnding;
    QDateTimeEdit *dtEndReport;
    QPushButton *btnPrintReport;
    QTreeView *treeView;
    QCheckBox *cbReportViaEmail;
    QPushButton *btnToggleSource;
    QWidget *tabDoors;
    QPushButton *btnOpenAllDoors_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridDoorLayout;
    QPushButton *cbBox7;
    QPushButton *cbBox8;
    QPushButton *cbBox63;
    QPushButton *cbBox64;
    QPushButton *cbBox6;
    QPushButton *cbBox5;
    QPushButton *cbBox1;
    QPushButton *cbBox2;
    QPushButton *cbBox3;
    QPushButton *cbBox4;
    QPushButton *cbBox9;
    QPushButton *cbBox17;
    QPushButton *cbBox25;
    QPushButton *cbBox33;
    QPushButton *cbBox41;
    QPushButton *cbBox49;
    QPushButton *cbBox57;
    QPushButton *cbBox10;
    QPushButton *cbBox11;
    QPushButton *cbBox12;
    QPushButton *cbBox13;
    QPushButton *cbBox14;
    QPushButton *cbBox15;
    QPushButton *cbBox16;
    QPushButton *cbBox18;
    QPushButton *cbBox23;
    QPushButton *cbBox19;
    QPushButton *cbBox20;
    QPushButton *cbBox21;
    QPushButton *cbBox22;
    QPushButton *cbBox24;
    QPushButton *cbBox26;
    QPushButton *cbBox27;
    QPushButton *cbBox28;
    QPushButton *cbBox29;
    QPushButton *cbBox30;
    QPushButton *cbBox31;
    QPushButton *cbBox32;
    QPushButton *cbBox34;
    QPushButton *cbBox35;
    QPushButton *cbBox36;
    QPushButton *cbBox37;
    QPushButton *cbBox39;
    QPushButton *cbBox38;
    QPushButton *cbBox40;
    QPushButton *cbBox42;
    QPushButton *cbBox43;
    QPushButton *cbBox44;
    QPushButton *cbBox45;
    QPushButton *cbBox46;
    QPushButton *cbBox47;
    QPushButton *cbBox48;
    QPushButton *cbBox50;
    QPushButton *cbBox51;
    QPushButton *cbBox52;
    QPushButton *cbBox53;
    QPushButton *cbBox54;
    QPushButton *cbBox56;
    QPushButton *cbBox55;
    QPushButton *cbBox58;
    QPushButton *cbBox59;
    QPushButton *cbBox60;
    QPushButton *cbBox61;
    QPushButton *cbBox62;
    QSpinBox *spinMaxLocks;
    QLabel *lblMaxLock;
    QWidget *tabCodes;
    QTableWidget *tblCodesList;
    QDateTimeEdit *dtStartCodeList;
    QLabel *lblCodeFrom;
    QLabel *lblCodeTo;
    QPushButton *btnReadCodes;
    QDateTimeEdit *dtEndCodeList;
    QComboBox *cbLockNum;
    QWidget *tab;
    QPushButton *btnRead;
    QLabel *lblHistoryTo;
    QLabel *lblHistoryFrom;
    QDateTimeEdit *dtEndCodeHistoryList;
    QComboBox *cbLockNumHistory;
    QDateTimeEdit *dtStartCodeHistoryList;
    QTableWidget *tblHistory;
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

    void setupUi(QDialog *CFrmAdminInfo)
    {
        if (CFrmAdminInfo->objectName().isEmpty())
            CFrmAdminInfo->setObjectName(QStringLiteral("CFrmAdminInfo"));
        CFrmAdminInfo->setWindowModality(Qt::NonModal);
        CFrmAdminInfo->resize(800, 480);
        CFrmAdminInfo->setBaseSize(QSize(800, 480));
        tabWidget = new QTabWidget(CFrmAdminInfo);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(1, 9, 800, 481));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabAdministrator = new QWidget();
        tabAdministrator->setObjectName(QStringLiteral("tabAdministrator"));
        btnDone = new QPushButton(tabAdministrator);
        btnDone->setObjectName(QStringLiteral("btnDone"));
        btnDone->setGeometry(QRect(600, 380, 175, 49));
        QFont font1;
        font1.setPointSize(15);
        btnDone->setFont(font1);
        lKey = new QLabel(tabAdministrator);
        lKey->setObjectName(QStringLiteral("lKey"));
        lKey->setGeometry(QRect(12, 316, 201, 31));
        QFont font2;
        font2.setPointSize(12);
        lKey->setFont(font2);
        chkUsePredictive = new QCheckBox(tabAdministrator);
        chkUsePredictive->setObjectName(QStringLiteral("chkUsePredictive"));
        chkUsePredictive->setGeometry(QRect(16, 280, 301, 26));
        chkUsePredictive->setFont(font2);
        chkUsePredictive->setChecked(true);
        lblKey = new CClickableLabel(tabAdministrator);
        lblKey->setObjectName(QStringLiteral("lblKey"));
        lblKey->setGeometry(QRect(230, 317, 551, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(true);
        lblKey->setFont(font3);
        lPredictiveCodeGenResolution = new QLabel(tabAdministrator);
        lPredictiveCodeGenResolution->setObjectName(QStringLiteral("lPredictiveCodeGenResolution"));
        lPredictiveCodeGenResolution->setGeometry(QRect(470, 281, 131, 21));
        lPredictiveCodeGenResolution->setFont(font2);
        spinCodeGenResolution = new QSpinBox(tabAdministrator);
        spinCodeGenResolution->setObjectName(QStringLiteral("spinCodeGenResolution"));
        spinCodeGenResolution->setGeometry(QRect(610, 275, 171, 41));
        spinCodeGenResolution->setMinimum(5);
        spinCodeGenResolution->setMaximum(360);
        spinCodeGenResolution->setSingleStep(5);
        line_3 = new QFrame(tabAdministrator);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 338, 771, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        dtSystemTime = new QDateTimeEdit(tabAdministrator);
        dtSystemTime->setObjectName(QStringLiteral("dtSystemTime"));
        dtSystemTime->setGeometry(QRect(10, 350, 281, 41));
        dtSystemTime->setFont(font2);
        dtSystemTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dtSystemTime->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtSystemTime->setAccelerated(true);
        dtSystemTime->setProperty("showGroupSeparator", QVariant(true));
        dtSystemTime->setMaximumDate(QDate(2055, 12, 31));
        dtSystemTime->setMinimumDate(QDate(2016, 6, 1));
        dtSystemTime->setCurrentSection(QDateTimeEdit::MonthSection);
        dtSystemTime->setCalendarPopup(false);
        cbInternetTime = new QCheckBox(tabAdministrator);
        cbInternetTime->setObjectName(QStringLiteral("cbInternetTime"));
        cbInternetTime->setGeometry(QRect(320, 360, 131, 26));
        cbInternetTime->setFont(font2);
        cbInternetTime->setFocusPolicy(Qt::WheelFocus);
        btnSetTime = new QPushButton(tabAdministrator);
        btnSetTime->setObjectName(QStringLiteral("btnSetTime"));
        btnSetTime->setGeometry(QRect(320, 400, 140, 30));
        btnSetTime->setFont(font2);
        cbTimeZone = new QComboBox(tabAdministrator);
        cbTimeZone->setObjectName(QStringLiteral("cbTimeZone"));
        cbTimeZone->setGeometry(QRect(10, 400, 281, 31));
        cbTimeZone->setFont(font2);
        gpAdminInfo = new QGroupBox(tabAdministrator);
        gpAdminInfo->setObjectName(QStringLiteral("gpAdminInfo"));
        gpAdminInfo->setGeometry(QRect(0, 10, 781, 261));
        QFont font4;
        font4.setPointSize(9);
        gpAdminInfo->setFont(font4);
        layoutWidget1 = new QWidget(gpAdminInfo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 201, 241));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lName = new QLabel(layoutWidget1);
        lName->setObjectName(QStringLiteral("lName"));
        lName->setFont(font2);

        verticalLayout->addWidget(lName);

        lEmail = new QLabel(layoutWidget1);
        lEmail->setObjectName(QStringLiteral("lEmail"));
        lEmail->setFont(font2);

        verticalLayout->addWidget(lEmail);

        lPhone = new QLabel(layoutWidget1);
        lPhone->setObjectName(QStringLiteral("lPhone"));
        lPhone->setFont(font2);

        verticalLayout->addWidget(lPhone);

        lAccessCd = new QLabel(layoutWidget1);
        lAccessCd->setObjectName(QStringLiteral("lAccessCd"));
        lAccessCd->setFont(font2);

        verticalLayout->addWidget(lAccessCd);

        lPassword = new QLabel(layoutWidget1);
        lPassword->setObjectName(QStringLiteral("lPassword"));
        lPassword->setFont(font2);

        verticalLayout->addWidget(lPassword);

        lAssistCode = new QLabel(layoutWidget1);
        lAssistCode->setObjectName(QStringLiteral("lAssistCode"));
        lAssistCode->setFont(font2);

        verticalLayout->addWidget(lAssistCode);

        lAssistPassword = new QLabel(layoutWidget1);
        lAssistPassword->setObjectName(QStringLiteral("lAssistPassword"));
        lAssistPassword->setFont(font2);

        verticalLayout->addWidget(lAssistPassword);

        line_2 = new QFrame(gpAdminInfo);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(210, 10, 20, 241));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget2 = new QWidget(gpAdminInfo);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(230, 10, 541, 241));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblName = new CClickableLabel(layoutWidget2);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setFont(font3);
        lblName->setMouseTracking(false);
        lblName->setFocusPolicy(Qt::NoFocus);
        lblName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(lblName);

        lblEmail = new CClickableLabel(layoutWidget2);
        lblEmail->setObjectName(QStringLiteral("lblEmail"));
        lblEmail->setFont(font3);
        lblEmail->setMouseTracking(false);

        verticalLayout_2->addWidget(lblEmail);

        lblPhone = new CClickableLabel(layoutWidget2);
        lblPhone->setObjectName(QStringLiteral("lblPhone"));
        lblPhone->setFont(font3);
        lblPhone->setMouseTracking(false);

        verticalLayout_2->addWidget(lblPhone);

        lblAccessCode = new CClickableLabel(layoutWidget2);
        lblAccessCode->setObjectName(QStringLiteral("lblAccessCode"));
        lblAccessCode->setFont(font3);

        verticalLayout_2->addWidget(lblAccessCode);

        lblPassword = new CClickableLabel(layoutWidget2);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setFont(font3);

        verticalLayout_2->addWidget(lblPassword);

        lblAssistCode = new CClickableLabel(layoutWidget2);
        lblAssistCode->setObjectName(QStringLiteral("lblAssistCode"));
        lblAssistCode->setFont(font3);

        verticalLayout_2->addWidget(lblAssistCode);

        lblAssistPassword = new CClickableLabel(layoutWidget2);
        lblAssistPassword->setObjectName(QStringLiteral("lblAssistPassword"));
        lblAssistPassword->setFont(font3);

        verticalLayout_2->addWidget(lblAssistPassword);

        tabWidget->addTab(tabAdministrator, QString());
        gpAdminInfo->raise();
        btnDone->raise();
        lKey->raise();
        chkUsePredictive->raise();
        lblKey->raise();
        lPredictiveCodeGenResolution->raise();
        spinCodeGenResolution->raise();
        line_3->raise();
        dtSystemTime->raise();
        cbInternetTime->raise();
        btnSetTime->raise();
        cbTimeZone->raise();
        tabUtilities = new QWidget();
        tabUtilities->setObjectName(QStringLiteral("tabUtilities"));
        tabUtilities->setStyleSheet(QStringLiteral("QTabWidget::tab:disabled { width: 0; height: 0; margin: 0; padding: 0; border: none; }"));
        edInfo = new QLineEdit(tabUtilities);
        edInfo->setObjectName(QStringLiteral("edInfo"));
        edInfo->setGeometry(QRect(229, 4, 451, 100));
        edInfo->setFont(font2);
        edInfo->setFocusPolicy(Qt::NoFocus);
        edInfo->setVisible(false);
        edInfo->setAcceptDrops(false);
        edInfo->setReadOnly(true);
        dialBright = new QDial(tabUtilities);
        dialBright->setObjectName(QStringLiteral("dialBright"));
        dialBright->setGeometry(QRect(650, 45, 141, 131));
        dialBright->setMinimum(25);
        dialBright->setMaximum(255);
        dialBright->setValue(75);
        dialBright->setNotchTarget(10);
        dialBright->setNotchesVisible(true);
        btnSetupSMTP = new QPushButton(tabUtilities);
        btnSetupSMTP->setObjectName(QStringLiteral("btnSetupSMTP"));
        btnSetupSMTP->setGeometry(QRect(10, 90, 171, 50));
        QFont font5;
        font5.setFamily(QStringLiteral("Cantarell"));
        font5.setPointSize(12);
        btnSetupSMTP->setFont(font5);
        btnSetupVNC = new QPushButton(tabUtilities);
        btnSetupVNC->setObjectName(QStringLiteral("btnSetupVNC"));
        btnSetupVNC->setGeometry(QRect(191, 90, 342, 50));
        btnSetupVNC->setFont(font5);
        lblBrightness = new QLabel(tabUtilities);
        lblBrightness->setObjectName(QStringLiteral("lblBrightness"));
        lblBrightness->setGeometry(QRect(650, 0, 91, 41));
        lblBrightness->setFont(font2);
        lblIpAddress = new QLabel(tabUtilities);
        lblIpAddress->setObjectName(QStringLiteral("lblIpAddress"));
        lblIpAddress->setGeometry(QRect(21, 56, 201, 28));
        lblIpAddress->setFont(font5);
        lblIPAddress = new QLabel(tabUtilities);
        lblIPAddress->setObjectName(QStringLiteral("lblIPAddress"));
        lblIPAddress->setGeometry(QRect(230, 56, 311, 28));
        lblIPAddress->setFont(font5);
        btnCopyToggleSource = new QPushButton(tabUtilities);
        btnCopyToggleSource->setObjectName(QStringLiteral("btnCopyToggleSource"));
        btnCopyToggleSource->setGeometry(QRect(10, 190, 111, 51));
        btnCopyToggleSource->setFont(font2);
        btnCopyToggleSource->setCheckable(true);
        btnCopyToggleSource->setChecked(false);
        treeViewCopy = new QTreeView(tabUtilities);
        treeViewCopy->setObjectName(QStringLiteral("treeViewCopy"));
        treeViewCopy->setGeometry(QRect(10, 250, 480, 181));
        treeViewCopy->header()->setCascadingSectionResizes(true);
        treeViewCopy->header()->setDefaultSectionSize(200);
        btnCopyFile = new QPushButton(tabUtilities);
        btnCopyFile->setObjectName(QStringLiteral("btnCopyFile"));
        btnCopyFile->setEnabled(false);
        btnCopyFile->setGeometry(QRect(130, 189, 111, 51));
        btnCopyFile->setFont(font2);
        btnCopyFile->setCheckable(false);
        btnCopyFile->setChecked(false);
        btnCopyFileLoadCodes = new QPushButton(tabUtilities);
        btnCopyFileLoadCodes->setObjectName(QStringLiteral("btnCopyFileLoadCodes"));
        btnCopyFileLoadCodes->setEnabled(false);
        btnCopyFileLoadCodes->setGeometry(QRect(300, 189, 131, 51));
        btnCopyFileLoadCodes->setFont(font2);
        btnCopyFileLoadCodes->setCheckable(false);
        btnCopyFileLoadCodes->setChecked(false);
        lblBrandingImage = new QLabel(tabUtilities);
        lblBrandingImage->setObjectName(QStringLiteral("lblBrandingImage"));
        lblBrandingImage->setGeometry(QRect(500, 160, 191, 28));
        lblBrandingImage->setFont(font5);
        btnCopyFileBrandingImage = new QPushButton(tabUtilities);
        btnCopyFileBrandingImage->setObjectName(QStringLiteral("btnCopyFileBrandingImage"));
        btnCopyFileBrandingImage->setEnabled(false);
        btnCopyFileBrandingImage->setGeometry(QRect(500, 189, 75, 51));
        btnCopyFileBrandingImage->setFont(font2);
        btnCopyFileBrandingImage->setCheckable(false);
        btnCopyFileBrandingImage->setChecked(false);
        btnCopyFileBrandingImageReset = new QPushButton(tabUtilities);
        btnCopyFileBrandingImageReset->setObjectName(QStringLiteral("btnCopyFileBrandingImageReset"));
        btnCopyFileBrandingImageReset->setEnabled(false);
        btnCopyFileBrandingImageReset->setGeometry(QRect(585, 189, 75, 51));
        btnCopyFileBrandingImageReset->setFont(font2);
        btnCopyFileBrandingImageReset->setCheckable(false);
        btnCopyFileBrandingImageReset->setChecked(false);
        btnPurgeCodes = new QPushButton(tabUtilities);
        btnPurgeCodes->setObjectName(QStringLiteral("btnPurgeCodes"));
        btnPurgeCodes->setGeometry(QRect(520, 350, 300, 45));
        btnPurgeCodes->setFont(font1);
        btnRebootSystem = new QPushButton(tabUtilities);
        btnRebootSystem->setObjectName(QStringLiteral("btnRebootSystem"));
        btnRebootSystem->setGeometry(QRect(520, 395, 300, 45));
        btnRebootSystem->setFont(font1);
        line_4 = new QFrame(tabUtilities);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 140, 521, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lblInstallNewApp = new QLabel(tabUtilities);
        lblInstallNewApp->setObjectName(QStringLiteral("lblInstallNewApp"));
        lblInstallNewApp->setGeometry(QRect(10, 160, 271, 28));
        lblInstallNewApp->setFont(font5);
        lblLoadBulkCodes = new QLabel(tabUtilities);
        lblLoadBulkCodes->setObjectName(QStringLiteral("lblLoadBulkCodes"));
        lblLoadBulkCodes->setGeometry(QRect(300, 160, 171, 28));
        lblLoadBulkCodes->setFont(font5);
        chkShowFingerprint = new QCheckBox(tabUtilities);
        chkShowFingerprint->setObjectName(QStringLiteral("chkShowFingerprint"));
        chkShowFingerprint->setGeometry(QRect(20, 20, 250, 28));
        chkShowFingerprint->setFont(font5);
        tabWidget->addTab(tabUtilities, QString());
        tabReport = new QWidget();
        tabReport->setObjectName(QStringLiteral("tabReport"));
        lReportFreq = new QLabel(tabReport);
        lReportFreq->setObjectName(QStringLiteral("lReportFreq"));
        lReportFreq->setGeometry(QRect(19, 23, 241, 28));
        lReportFreq->setFont(font2);
        btnSaveSettings = new QPushButton(tabReport);
        btnSaveSettings->setObjectName(QStringLiteral("btnSaveSettings"));
        btnSaveSettings->setGeometry(QRect(625, 30, 145, 100));
        btnSaveSettings->setFont(font2);
        lStartTime = new QLabel(tabReport);
        lStartTime->setObjectName(QStringLiteral("lStartTime"));
        lStartTime->setGeometry(QRect(19, 87, 211, 28));
        lStartTime->setFont(font5);
        cbReportFreq = new QComboBox(tabReport);
        cbReportFreq->setObjectName(QStringLiteral("cbReportFreq"));
        cbReportFreq->setGeometry(QRect(270, 20, 271, 41));
        cbReportFreq->setFont(font2);
        dtStart = new QDateTimeEdit(tabReport);
        dtStart->setObjectName(QStringLiteral("dtStart"));
        dtStart->setGeometry(QRect(230, 70, 341, 61));
        dtStart->setFont(font2);
        dtStart->setAlignment(Qt::AlignCenter);
        dtStart->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtStart->setAccelerated(true);
        dtStart->setProperty("showGroupSeparator", QVariant(false));
        dtStart->setMaximumDate(QDate(2055, 12, 31));
        dtStart->setMinimumDate(QDate(2016, 6, 1));
        dtStart->setCurrentSection(QDateTimeEdit::MonthSection);
        dtStart->setCalendarPopup(false);
        cbReportToFile = new QCheckBox(tabReport);
        cbReportToFile->setObjectName(QStringLiteral("cbReportToFile"));
        cbReportToFile->setGeometry(QRect(20, 170, 271, 26));
        cbReportToFile->setFont(font2);
        widgetImmediateReport = new QWidget(tabReport);
        widgetImmediateReport->setObjectName(QStringLiteral("widgetImmediateReport"));
        widgetImmediateReport->setEnabled(true);
        widgetImmediateReport->setGeometry(QRect(360, 140, 431, 281));
        widgetImmediateReport->setAutoFillBackground(true);
        dtStartReport = new QDateTimeEdit(widgetImmediateReport);
        dtStartReport->setObjectName(QStringLiteral("dtStartReport"));
        dtStartReport->setGeometry(QRect(100, 43, 311, 61));
        dtStartReport->setFont(font2);
        dtStartReport->setAlignment(Qt::AlignCenter);
        dtStartReport->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtStartReport->setAccelerated(true);
        dtStartReport->setProperty("showGroupSeparator", QVariant(true));
        dtStartReport->setMaximumDate(QDate(2055, 12, 31));
        dtStartReport->setMinimumDate(QDate(2016, 6, 1));
        dtStartReport->setCurrentSection(QDateTimeEdit::MonthSection);
        dtStartReport->setCalendarPopup(false);
        lblPrintImmediate = new QLabel(widgetImmediateReport);
        lblPrintImmediate->setObjectName(QStringLiteral("lblPrintImmediate"));
        lblPrintImmediate->setGeometry(QRect(150, 20, 371, 21));
        lblPrintImmediate->setFont(font2);
        lblStarting = new QLabel(widgetImmediateReport);
        lblStarting->setObjectName(QStringLiteral("lblStarting"));
        lblStarting->setGeometry(QRect(10, 53, 81, 41));
        lblStarting->setFont(font2);
        lblEnding = new QLabel(widgetImmediateReport);
        lblEnding->setObjectName(QStringLiteral("lblEnding"));
        lblEnding->setGeometry(QRect(10, 129, 81, 41));
        lblEnding->setFont(font2);
        dtEndReport = new QDateTimeEdit(widgetImmediateReport);
        dtEndReport->setObjectName(QStringLiteral("dtEndReport"));
        dtEndReport->setGeometry(QRect(100, 119, 311, 61));
        dtEndReport->setFont(font2);
        dtEndReport->setAlignment(Qt::AlignCenter);
        dtEndReport->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtEndReport->setAccelerated(true);
        dtEndReport->setProperty("showGroupSeparator", QVariant(true));
        dtEndReport->setMaximumDate(QDate(2055, 12, 31));
        dtEndReport->setMinimumDate(QDate(2016, 6, 1));
        dtEndReport->setCurrentSection(QDateTimeEdit::MonthSection);
        dtEndReport->setCalendarPopup(false);
        dtEndReport->setCurrentSectionIndex(0);
        btnPrintReport = new QPushButton(widgetImmediateReport);
        btnPrintReport->setObjectName(QStringLiteral("btnPrintReport"));
        btnPrintReport->setGeometry(QRect(100, 210, 311, 61));
        btnPrintReport->setFont(font2);
        treeView = new QTreeView(tabReport);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 250, 331, 181));
        cbReportViaEmail = new QCheckBox(tabReport);
        cbReportViaEmail->setObjectName(QStringLiteral("cbReportViaEmail"));
        cbReportViaEmail->setGeometry(QRect(20, 140, 271, 26));
        cbReportViaEmail->setFont(font2);
        btnToggleSource = new QPushButton(tabReport);
        btnToggleSource->setObjectName(QStringLiteral("btnToggleSource"));
        btnToggleSource->setGeometry(QRect(10, 200, 131, 41));
        btnToggleSource->setFont(font2);
        btnToggleSource->setCheckable(true);
        btnToggleSource->setChecked(false);
        tabWidget->addTab(tabReport, QString());
        btnSaveSettings->raise();
        lReportFreq->raise();
        lStartTime->raise();
        dtStart->raise();
        treeView->raise();
        widgetImmediateReport->raise();
        btnToggleSource->raise();
        cbReportFreq->raise();
        cbReportViaEmail->raise();
        cbReportToFile->raise();
        tabDoors = new QWidget();
        tabDoors->setObjectName(QStringLiteral("tabDoors"));
        btnOpenAllDoors_2 = new QPushButton(tabDoors);
        btnOpenAllDoors_2->setObjectName(QStringLiteral("btnOpenAllDoors_2"));
        btnOpenAllDoors_2->setGeometry(QRect(540, 0, 231, 51));
        btnOpenAllDoors_2->setFont(font2);
        btnOpenAllDoors_2->setCheckable(true);
        gridLayoutWidget = new QWidget(tabDoors);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 60, 751, 371));
        gridDoorLayout = new QGridLayout(gridLayoutWidget);
        gridDoorLayout->setObjectName(QStringLiteral("gridDoorLayout"));
        gridDoorLayout->setContentsMargins(5, 0, 0, 0);
        cbBox7 = new QPushButton(gridLayoutWidget);
        cbBox7->setObjectName(QStringLiteral("cbBox7"));
        cbBox7->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("images/vault.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbBox7->setIcon(icon);
        cbBox7->setCheckable(false);
        cbBox7->setChecked(false);

        gridDoorLayout->addWidget(cbBox7, 0, 6, 1, 1);

        cbBox8 = new QPushButton(gridLayoutWidget);
        cbBox8->setObjectName(QStringLiteral("cbBox8"));
        cbBox8->setEnabled(true);
        cbBox8->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/vault.png"), QSize(), QIcon::Normal, QIcon::On);
        cbBox8->setIcon(icon1);
        cbBox8->setCheckable(true);
        cbBox8->setChecked(false);

        gridDoorLayout->addWidget(cbBox8, 0, 7, 1, 1);

        cbBox63 = new QPushButton(gridLayoutWidget);
        cbBox63->setObjectName(QStringLiteral("cbBox63"));
        cbBox63->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/no_vault.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral("images/vault.png"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QStringLiteral("images/no_vault.png"), QSize(), QIcon::Disabled, QIcon::Off);
        cbBox63->setIcon(icon2);
        cbBox63->setCheckable(false);
        cbBox63->setChecked(false);

        gridDoorLayout->addWidget(cbBox63, 7, 6, 1, 1);

        cbBox64 = new QPushButton(gridLayoutWidget);
        cbBox64->setObjectName(QStringLiteral("cbBox64"));
        cbBox64->setFont(font);
        cbBox64->setIcon(icon2);
        cbBox64->setCheckable(false);
        cbBox64->setChecked(false);

        gridDoorLayout->addWidget(cbBox64, 7, 7, 1, 1);

        cbBox6 = new QPushButton(gridLayoutWidget);
        cbBox6->setObjectName(QStringLiteral("cbBox6"));
        cbBox6->setFont(font);
        cbBox6->setIcon(icon1);
        cbBox6->setCheckable(false);
        cbBox6->setChecked(false);

        gridDoorLayout->addWidget(cbBox6, 0, 5, 1, 1);

        cbBox5 = new QPushButton(gridLayoutWidget);
        cbBox5->setObjectName(QStringLiteral("cbBox5"));
        cbBox5->setFont(font);
        cbBox5->setIcon(icon1);
        cbBox5->setCheckable(false);
        cbBox5->setChecked(false);

        gridDoorLayout->addWidget(cbBox5, 0, 4, 1, 1);

        cbBox1 = new QPushButton(gridLayoutWidget);
        cbBox1->setObjectName(QStringLiteral("cbBox1"));
        cbBox1->setFont(font);
        cbBox1->setIcon(icon1);
        cbBox1->setCheckable(false);
        cbBox1->setChecked(false);

        gridDoorLayout->addWidget(cbBox1, 0, 0, 1, 1);

        cbBox2 = new QPushButton(gridLayoutWidget);
        cbBox2->setObjectName(QStringLiteral("cbBox2"));
        cbBox2->setFont(font);
        cbBox2->setIcon(icon1);
        cbBox2->setCheckable(false);
        cbBox2->setChecked(false);

        gridDoorLayout->addWidget(cbBox2, 0, 1, 1, 1);

        cbBox3 = new QPushButton(gridLayoutWidget);
        cbBox3->setObjectName(QStringLiteral("cbBox3"));
        cbBox3->setFont(font);
        cbBox3->setIcon(icon);
        cbBox3->setCheckable(false);
        cbBox3->setChecked(false);

        gridDoorLayout->addWidget(cbBox3, 0, 2, 1, 1);

        cbBox4 = new QPushButton(gridLayoutWidget);
        cbBox4->setObjectName(QStringLiteral("cbBox4"));
        cbBox4->setFont(font);
        cbBox4->setIcon(icon1);
        cbBox4->setCheckable(false);
        cbBox4->setChecked(false);

        gridDoorLayout->addWidget(cbBox4, 0, 3, 1, 1);

        cbBox9 = new QPushButton(gridLayoutWidget);
        cbBox9->setObjectName(QStringLiteral("cbBox9"));
        cbBox9->setFont(font);
        cbBox9->setIcon(icon2);
        cbBox9->setCheckable(false);
        cbBox9->setChecked(false);

        gridDoorLayout->addWidget(cbBox9, 1, 0, 1, 1);

        cbBox17 = new QPushButton(gridLayoutWidget);
        cbBox17->setObjectName(QStringLiteral("cbBox17"));
        cbBox17->setFont(font);
        cbBox17->setIcon(icon2);
        cbBox17->setCheckable(false);
        cbBox17->setChecked(false);

        gridDoorLayout->addWidget(cbBox17, 2, 0, 1, 1);

        cbBox25 = new QPushButton(gridLayoutWidget);
        cbBox25->setObjectName(QStringLiteral("cbBox25"));
        cbBox25->setFont(font);
        cbBox25->setIcon(icon2);
        cbBox25->setCheckable(false);
        cbBox25->setChecked(false);

        gridDoorLayout->addWidget(cbBox25, 3, 0, 1, 1);

        cbBox33 = new QPushButton(gridLayoutWidget);
        cbBox33->setObjectName(QStringLiteral("cbBox33"));
        cbBox33->setFont(font);
        cbBox33->setIcon(icon2);
        cbBox33->setCheckable(false);
        cbBox33->setChecked(false);

        gridDoorLayout->addWidget(cbBox33, 4, 0, 1, 1);

        cbBox41 = new QPushButton(gridLayoutWidget);
        cbBox41->setObjectName(QStringLiteral("cbBox41"));
        cbBox41->setFont(font);
        cbBox41->setIcon(icon2);
        cbBox41->setCheckable(false);
        cbBox41->setChecked(false);

        gridDoorLayout->addWidget(cbBox41, 5, 0, 1, 1);

        cbBox49 = new QPushButton(gridLayoutWidget);
        cbBox49->setObjectName(QStringLiteral("cbBox49"));
        cbBox49->setFont(font);
        cbBox49->setIcon(icon2);
        cbBox49->setCheckable(false);
        cbBox49->setChecked(false);

        gridDoorLayout->addWidget(cbBox49, 6, 0, 1, 1);

        cbBox57 = new QPushButton(gridLayoutWidget);
        cbBox57->setObjectName(QStringLiteral("cbBox57"));
        cbBox57->setFont(font);
        cbBox57->setIcon(icon2);
        cbBox57->setCheckable(false);
        cbBox57->setChecked(false);

        gridDoorLayout->addWidget(cbBox57, 7, 0, 1, 1);

        cbBox10 = new QPushButton(gridLayoutWidget);
        cbBox10->setObjectName(QStringLiteral("cbBox10"));
        cbBox10->setFont(font);
        cbBox10->setIcon(icon2);
        cbBox10->setCheckable(false);
        cbBox10->setChecked(false);

        gridDoorLayout->addWidget(cbBox10, 1, 1, 1, 1);

        cbBox11 = new QPushButton(gridLayoutWidget);
        cbBox11->setObjectName(QStringLiteral("cbBox11"));
        cbBox11->setFont(font);
        cbBox11->setIcon(icon2);
        cbBox11->setCheckable(false);
        cbBox11->setChecked(false);

        gridDoorLayout->addWidget(cbBox11, 1, 2, 1, 1);

        cbBox12 = new QPushButton(gridLayoutWidget);
        cbBox12->setObjectName(QStringLiteral("cbBox12"));
        cbBox12->setFont(font);
        cbBox12->setIcon(icon2);
        cbBox12->setCheckable(false);
        cbBox12->setChecked(false);

        gridDoorLayout->addWidget(cbBox12, 1, 3, 1, 1);

        cbBox13 = new QPushButton(gridLayoutWidget);
        cbBox13->setObjectName(QStringLiteral("cbBox13"));
        cbBox13->setFont(font);
        cbBox13->setIcon(icon2);
        cbBox13->setCheckable(false);
        cbBox13->setChecked(false);

        gridDoorLayout->addWidget(cbBox13, 1, 4, 1, 1);

        cbBox14 = new QPushButton(gridLayoutWidget);
        cbBox14->setObjectName(QStringLiteral("cbBox14"));
        cbBox14->setFont(font);
        cbBox14->setIcon(icon2);
        cbBox14->setCheckable(false);
        cbBox14->setChecked(false);

        gridDoorLayout->addWidget(cbBox14, 1, 5, 1, 1);

        cbBox15 = new QPushButton(gridLayoutWidget);
        cbBox15->setObjectName(QStringLiteral("cbBox15"));
        cbBox15->setFont(font);
        cbBox15->setIcon(icon2);
        cbBox15->setCheckable(false);
        cbBox15->setChecked(false);

        gridDoorLayout->addWidget(cbBox15, 1, 6, 1, 1);

        cbBox16 = new QPushButton(gridLayoutWidget);
        cbBox16->setObjectName(QStringLiteral("cbBox16"));
        cbBox16->setFont(font);
        cbBox16->setIcon(icon2);
        cbBox16->setCheckable(false);
        cbBox16->setChecked(false);

        gridDoorLayout->addWidget(cbBox16, 1, 7, 1, 1);

        cbBox18 = new QPushButton(gridLayoutWidget);
        cbBox18->setObjectName(QStringLiteral("cbBox18"));
        cbBox18->setFont(font);
        cbBox18->setIcon(icon2);
        cbBox18->setCheckable(false);
        cbBox18->setChecked(false);

        gridDoorLayout->addWidget(cbBox18, 2, 1, 1, 1);

        cbBox23 = new QPushButton(gridLayoutWidget);
        cbBox23->setObjectName(QStringLiteral("cbBox23"));
        cbBox23->setFont(font);
        cbBox23->setIcon(icon2);
        cbBox23->setCheckable(false);
        cbBox23->setChecked(false);

        gridDoorLayout->addWidget(cbBox23, 2, 6, 1, 1);

        cbBox19 = new QPushButton(gridLayoutWidget);
        cbBox19->setObjectName(QStringLiteral("cbBox19"));
        cbBox19->setFont(font);
        cbBox19->setIcon(icon2);
        cbBox19->setCheckable(false);
        cbBox19->setChecked(false);

        gridDoorLayout->addWidget(cbBox19, 2, 2, 1, 1);

        cbBox20 = new QPushButton(gridLayoutWidget);
        cbBox20->setObjectName(QStringLiteral("cbBox20"));
        cbBox20->setFont(font);
        cbBox20->setIcon(icon2);
        cbBox20->setCheckable(false);
        cbBox20->setChecked(false);

        gridDoorLayout->addWidget(cbBox20, 2, 3, 1, 1);

        cbBox21 = new QPushButton(gridLayoutWidget);
        cbBox21->setObjectName(QStringLiteral("cbBox21"));
        cbBox21->setFont(font);
        cbBox21->setIcon(icon2);
        cbBox21->setCheckable(false);
        cbBox21->setChecked(false);

        gridDoorLayout->addWidget(cbBox21, 2, 4, 1, 1);

        cbBox22 = new QPushButton(gridLayoutWidget);
        cbBox22->setObjectName(QStringLiteral("cbBox22"));
        cbBox22->setFont(font);
        cbBox22->setIcon(icon2);
        cbBox22->setCheckable(false);
        cbBox22->setChecked(false);

        gridDoorLayout->addWidget(cbBox22, 2, 5, 1, 1);

        cbBox24 = new QPushButton(gridLayoutWidget);
        cbBox24->setObjectName(QStringLiteral("cbBox24"));
        cbBox24->setFont(font);
        cbBox24->setIcon(icon2);
        cbBox24->setCheckable(false);
        cbBox24->setChecked(false);

        gridDoorLayout->addWidget(cbBox24, 2, 7, 1, 1);

        cbBox26 = new QPushButton(gridLayoutWidget);
        cbBox26->setObjectName(QStringLiteral("cbBox26"));
        cbBox26->setFont(font);
        cbBox26->setIcon(icon2);
        cbBox26->setCheckable(false);
        cbBox26->setChecked(false);

        gridDoorLayout->addWidget(cbBox26, 3, 1, 1, 1);

        cbBox27 = new QPushButton(gridLayoutWidget);
        cbBox27->setObjectName(QStringLiteral("cbBox27"));
        cbBox27->setFont(font);
        cbBox27->setIcon(icon2);
        cbBox27->setCheckable(false);
        cbBox27->setChecked(false);

        gridDoorLayout->addWidget(cbBox27, 3, 2, 1, 1);

        cbBox28 = new QPushButton(gridLayoutWidget);
        cbBox28->setObjectName(QStringLiteral("cbBox28"));
        cbBox28->setFont(font);
        cbBox28->setIcon(icon2);
        cbBox28->setCheckable(false);
        cbBox28->setChecked(false);

        gridDoorLayout->addWidget(cbBox28, 3, 3, 1, 1);

        cbBox29 = new QPushButton(gridLayoutWidget);
        cbBox29->setObjectName(QStringLiteral("cbBox29"));
        cbBox29->setFont(font);
        cbBox29->setIcon(icon2);
        cbBox29->setCheckable(false);
        cbBox29->setChecked(false);

        gridDoorLayout->addWidget(cbBox29, 3, 4, 1, 1);

        cbBox30 = new QPushButton(gridLayoutWidget);
        cbBox30->setObjectName(QStringLiteral("cbBox30"));
        cbBox30->setFont(font);
        cbBox30->setIcon(icon2);
        cbBox30->setCheckable(false);
        cbBox30->setChecked(false);

        gridDoorLayout->addWidget(cbBox30, 3, 5, 1, 1);

        cbBox31 = new QPushButton(gridLayoutWidget);
        cbBox31->setObjectName(QStringLiteral("cbBox31"));
        cbBox31->setFont(font);
        cbBox31->setIcon(icon2);
        cbBox31->setCheckable(false);
        cbBox31->setChecked(false);

        gridDoorLayout->addWidget(cbBox31, 3, 6, 1, 1);

        cbBox32 = new QPushButton(gridLayoutWidget);
        cbBox32->setObjectName(QStringLiteral("cbBox32"));
        cbBox32->setFont(font);
        cbBox32->setIcon(icon2);
        cbBox32->setCheckable(false);
        cbBox32->setChecked(false);

        gridDoorLayout->addWidget(cbBox32, 3, 7, 1, 1);

        cbBox34 = new QPushButton(gridLayoutWidget);
        cbBox34->setObjectName(QStringLiteral("cbBox34"));
        cbBox34->setFont(font);
        cbBox34->setIcon(icon2);
        cbBox34->setCheckable(false);
        cbBox34->setChecked(false);

        gridDoorLayout->addWidget(cbBox34, 4, 1, 1, 1);

        cbBox35 = new QPushButton(gridLayoutWidget);
        cbBox35->setObjectName(QStringLiteral("cbBox35"));
        cbBox35->setFont(font);
        cbBox35->setIcon(icon2);
        cbBox35->setCheckable(false);
        cbBox35->setChecked(false);

        gridDoorLayout->addWidget(cbBox35, 4, 2, 1, 1);

        cbBox36 = new QPushButton(gridLayoutWidget);
        cbBox36->setObjectName(QStringLiteral("cbBox36"));
        cbBox36->setFont(font);
        cbBox36->setIcon(icon2);
        cbBox36->setCheckable(false);
        cbBox36->setChecked(false);

        gridDoorLayout->addWidget(cbBox36, 4, 3, 1, 1);

        cbBox37 = new QPushButton(gridLayoutWidget);
        cbBox37->setObjectName(QStringLiteral("cbBox37"));
        cbBox37->setFont(font);
        cbBox37->setIcon(icon2);
        cbBox37->setCheckable(false);
        cbBox37->setChecked(false);

        gridDoorLayout->addWidget(cbBox37, 4, 4, 1, 1);

        cbBox39 = new QPushButton(gridLayoutWidget);
        cbBox39->setObjectName(QStringLiteral("cbBox39"));
        cbBox39->setFont(font);
        cbBox39->setIcon(icon2);
        cbBox39->setCheckable(false);
        cbBox39->setChecked(false);

        gridDoorLayout->addWidget(cbBox39, 4, 6, 1, 1);

        cbBox38 = new QPushButton(gridLayoutWidget);
        cbBox38->setObjectName(QStringLiteral("cbBox38"));
        cbBox38->setFont(font);
        cbBox38->setIcon(icon2);
        cbBox38->setCheckable(false);
        cbBox38->setChecked(false);

        gridDoorLayout->addWidget(cbBox38, 4, 5, 1, 1);

        cbBox40 = new QPushButton(gridLayoutWidget);
        cbBox40->setObjectName(QStringLiteral("cbBox40"));
        cbBox40->setFont(font);
        cbBox40->setIcon(icon2);
        cbBox40->setCheckable(false);
        cbBox40->setChecked(false);

        gridDoorLayout->addWidget(cbBox40, 4, 7, 1, 1);

        cbBox42 = new QPushButton(gridLayoutWidget);
        cbBox42->setObjectName(QStringLiteral("cbBox42"));
        cbBox42->setFont(font);
        cbBox42->setIcon(icon2);
        cbBox42->setCheckable(false);
        cbBox42->setChecked(false);

        gridDoorLayout->addWidget(cbBox42, 5, 1, 1, 1);

        cbBox43 = new QPushButton(gridLayoutWidget);
        cbBox43->setObjectName(QStringLiteral("cbBox43"));
        cbBox43->setFont(font);
        cbBox43->setIcon(icon2);
        cbBox43->setCheckable(false);
        cbBox43->setChecked(false);

        gridDoorLayout->addWidget(cbBox43, 5, 2, 1, 1);

        cbBox44 = new QPushButton(gridLayoutWidget);
        cbBox44->setObjectName(QStringLiteral("cbBox44"));
        cbBox44->setFont(font);
        cbBox44->setIcon(icon2);
        cbBox44->setCheckable(false);
        cbBox44->setChecked(false);

        gridDoorLayout->addWidget(cbBox44, 5, 3, 1, 1);

        cbBox45 = new QPushButton(gridLayoutWidget);
        cbBox45->setObjectName(QStringLiteral("cbBox45"));
        cbBox45->setFont(font);
        cbBox45->setIcon(icon2);
        cbBox45->setCheckable(false);
        cbBox45->setChecked(false);

        gridDoorLayout->addWidget(cbBox45, 5, 4, 1, 1);

        cbBox46 = new QPushButton(gridLayoutWidget);
        cbBox46->setObjectName(QStringLiteral("cbBox46"));
        cbBox46->setFont(font);
        cbBox46->setIcon(icon2);
        cbBox46->setCheckable(false);
        cbBox46->setChecked(false);

        gridDoorLayout->addWidget(cbBox46, 5, 5, 1, 1);

        cbBox47 = new QPushButton(gridLayoutWidget);
        cbBox47->setObjectName(QStringLiteral("cbBox47"));
        cbBox47->setFont(font);
        cbBox47->setIcon(icon2);
        cbBox47->setCheckable(false);
        cbBox47->setChecked(false);

        gridDoorLayout->addWidget(cbBox47, 5, 6, 1, 1);

        cbBox48 = new QPushButton(gridLayoutWidget);
        cbBox48->setObjectName(QStringLiteral("cbBox48"));
        cbBox48->setFont(font);
        cbBox48->setIcon(icon2);
        cbBox48->setCheckable(false);
        cbBox48->setChecked(false);

        gridDoorLayout->addWidget(cbBox48, 5, 7, 1, 1);

        cbBox50 = new QPushButton(gridLayoutWidget);
        cbBox50->setObjectName(QStringLiteral("cbBox50"));
        cbBox50->setFont(font);
        cbBox50->setIcon(icon2);
        cbBox50->setCheckable(false);
        cbBox50->setChecked(false);

        gridDoorLayout->addWidget(cbBox50, 6, 1, 1, 1);

        cbBox51 = new QPushButton(gridLayoutWidget);
        cbBox51->setObjectName(QStringLiteral("cbBox51"));
        cbBox51->setFont(font);
        cbBox51->setIcon(icon2);
        cbBox51->setCheckable(false);
        cbBox51->setChecked(false);

        gridDoorLayout->addWidget(cbBox51, 6, 2, 1, 1);

        cbBox52 = new QPushButton(gridLayoutWidget);
        cbBox52->setObjectName(QStringLiteral("cbBox52"));
        cbBox52->setFont(font);
        cbBox52->setIcon(icon2);
        cbBox52->setCheckable(false);
        cbBox52->setChecked(false);

        gridDoorLayout->addWidget(cbBox52, 6, 3, 1, 1);

        cbBox53 = new QPushButton(gridLayoutWidget);
        cbBox53->setObjectName(QStringLiteral("cbBox53"));
        cbBox53->setFont(font);
        cbBox53->setIcon(icon2);
        cbBox53->setCheckable(false);
        cbBox53->setChecked(false);

        gridDoorLayout->addWidget(cbBox53, 6, 4, 1, 1);

        cbBox54 = new QPushButton(gridLayoutWidget);
        cbBox54->setObjectName(QStringLiteral("cbBox54"));
        cbBox54->setFont(font);
        cbBox54->setIcon(icon2);
        cbBox54->setCheckable(false);
        cbBox54->setChecked(false);

        gridDoorLayout->addWidget(cbBox54, 6, 5, 1, 1);

        cbBox56 = new QPushButton(gridLayoutWidget);
        cbBox56->setObjectName(QStringLiteral("cbBox56"));
        cbBox56->setFont(font);
        cbBox56->setIcon(icon2);
        cbBox56->setCheckable(false);
        cbBox56->setChecked(false);

        gridDoorLayout->addWidget(cbBox56, 6, 7, 1, 1);

        cbBox55 = new QPushButton(gridLayoutWidget);
        cbBox55->setObjectName(QStringLiteral("cbBox55"));
        cbBox55->setFont(font);
        cbBox55->setIcon(icon2);
        cbBox55->setCheckable(false);
        cbBox55->setChecked(false);

        gridDoorLayout->addWidget(cbBox55, 6, 6, 1, 1);

        cbBox58 = new QPushButton(gridLayoutWidget);
        cbBox58->setObjectName(QStringLiteral("cbBox58"));
        cbBox58->setFont(font);
        cbBox58->setIcon(icon2);
        cbBox58->setCheckable(false);
        cbBox58->setChecked(false);

        gridDoorLayout->addWidget(cbBox58, 7, 1, 1, 1);

        cbBox59 = new QPushButton(gridLayoutWidget);
        cbBox59->setObjectName(QStringLiteral("cbBox59"));
        cbBox59->setFont(font);
        cbBox59->setIcon(icon2);
        cbBox59->setCheckable(false);
        cbBox59->setChecked(false);

        gridDoorLayout->addWidget(cbBox59, 7, 2, 1, 1);

        cbBox60 = new QPushButton(gridLayoutWidget);
        cbBox60->setObjectName(QStringLiteral("cbBox60"));
        cbBox60->setFont(font);
        cbBox60->setIcon(icon2);
        cbBox60->setCheckable(false);
        cbBox60->setChecked(false);

        gridDoorLayout->addWidget(cbBox60, 7, 3, 1, 1);

        cbBox61 = new QPushButton(gridLayoutWidget);
        cbBox61->setObjectName(QStringLiteral("cbBox61"));
        cbBox61->setFont(font);
        cbBox61->setIcon(icon2);
        cbBox61->setCheckable(false);
        cbBox61->setChecked(false);

        gridDoorLayout->addWidget(cbBox61, 7, 4, 1, 1);

        cbBox62 = new QPushButton(gridLayoutWidget);
        cbBox62->setObjectName(QStringLiteral("cbBox62"));
        cbBox62->setFont(font);
        cbBox62->setIcon(icon2);
        cbBox62->setCheckable(false);
        cbBox62->setChecked(false);

        gridDoorLayout->addWidget(cbBox62, 7, 5, 1, 1);

        spinMaxLocks = new QSpinBox(tabDoors);
        spinMaxLocks->setObjectName(QStringLiteral("spinMaxLocks"));
        spinMaxLocks->setGeometry(QRect(150, 0, 91, 51));
        spinMaxLocks->setFont(font2);
        spinMaxLocks->setMinimum(4);
        spinMaxLocks->setMaximum(256);
        spinMaxLocks->setValue(32);
        lblMaxLock = new QLabel(tabDoors);
        lblMaxLock->setObjectName(QStringLiteral("lblMaxLock"));
        lblMaxLock->setGeometry(QRect(10, 10, 131, 41));
        lblMaxLock->setFont(font2);
        tabWidget->addTab(tabDoors, QString());
        tabCodes = new QWidget();
        tabCodes->setObjectName(QStringLiteral("tabCodes"));
        tblCodesList = new QTableWidget(tabCodes);
        tblCodesList->setObjectName(QStringLiteral("tblCodesList"));
        tblCodesList->setGeometry(QRect(2, 57, 791, 381));
        QFont font6;
        font6.setPointSize(8);
        tblCodesList->setFont(font6);
        dtStartCodeList = new QDateTimeEdit(tabCodes);
        dtStartCodeList->setObjectName(QStringLiteral("dtStartCodeList"));
        dtStartCodeList->setGeometry(QRect(195, 0, 221, 51));
        dtStartCodeList->setFont(font6);
        dtStartCodeList->setAlignment(Qt::AlignCenter);
        dtStartCodeList->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtStartCodeList->setAccelerated(true);
        dtStartCodeList->setProperty("showGroupSeparator", QVariant(false));
        dtStartCodeList->setDateTime(QDateTime(QDate(2016, 6, 1), QTime(0, 0, 0)));
        dtStartCodeList->setMinimumDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        dtStartCodeList->setMaximumDate(QDate(2055, 12, 31));
        dtStartCodeList->setMinimumDate(QDate(2016, 1, 1));
        dtStartCodeList->setCurrentSection(QDateTimeEdit::MonthSection);
        dtStartCodeList->setCalendarPopup(false);
        lblCodeFrom = new QLabel(tabCodes);
        lblCodeFrom->setObjectName(QStringLiteral("lblCodeFrom"));
        lblCodeFrom->setGeometry(QRect(135, 17, 51, 21));
        lblCodeTo = new QLabel(tabCodes);
        lblCodeTo->setObjectName(QStringLiteral("lblCodeTo"));
        lblCodeTo->setGeometry(QRect(442, 15, 41, 21));
        btnReadCodes = new QPushButton(tabCodes);
        btnReadCodes->setObjectName(QStringLiteral("btnReadCodes"));
        btnReadCodes->setGeometry(QRect(723, 0, 71, 51));
        dtEndCodeList = new QDateTimeEdit(tabCodes);
        dtEndCodeList->setObjectName(QStringLiteral("dtEndCodeList"));
        dtEndCodeList->setGeometry(QRect(490, 0, 221, 51));
        dtEndCodeList->setFont(font6);
        dtEndCodeList->setAlignment(Qt::AlignCenter);
        dtEndCodeList->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtEndCodeList->setAccelerated(true);
        dtEndCodeList->setProperty("showGroupSeparator", QVariant(false));
        dtEndCodeList->setDateTime(QDateTime(QDate(2016, 6, 1), QTime(0, 0, 0)));
        dtEndCodeList->setMinimumDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        dtEndCodeList->setMaximumDate(QDate(2055, 12, 31));
        dtEndCodeList->setMinimumDate(QDate(2016, 1, 1));
        dtEndCodeList->setCurrentSection(QDateTimeEdit::MonthSection);
        dtEndCodeList->setCalendarPopup(false);
        cbLockNum = new QComboBox(tabCodes);
        cbLockNum->setObjectName(QStringLiteral("cbLockNum"));
        cbLockNum->setGeometry(QRect(4, 0, 121, 51));
        cbLockNum->setFont(font2);
        tabWidget->addTab(tabCodes, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        btnRead = new QPushButton(tab);
        btnRead->setObjectName(QStringLiteral("btnRead"));
        btnRead->setGeometry(QRect(720, 0, 71, 31));
        lblHistoryTo = new QLabel(tab);
        lblHistoryTo->setObjectName(QStringLiteral("lblHistoryTo"));
        lblHistoryTo->setGeometry(QRect(440, 16, 41, 21));
        lblHistoryFrom = new QLabel(tab);
        lblHistoryFrom->setObjectName(QStringLiteral("lblHistoryFrom"));
        lblHistoryFrom->setGeometry(QRect(140, 17, 51, 21));
        dtEndCodeHistoryList = new QDateTimeEdit(tab);
        dtEndCodeHistoryList->setObjectName(QStringLiteral("dtEndCodeHistoryList"));
        dtEndCodeHistoryList->setGeometry(QRect(485, 0, 221, 51));
        dtEndCodeHistoryList->setFont(font6);
        dtEndCodeHistoryList->setAlignment(Qt::AlignCenter);
        dtEndCodeHistoryList->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtEndCodeHistoryList->setAccelerated(true);
        dtEndCodeHistoryList->setProperty("showGroupSeparator", QVariant(false));
        dtEndCodeHistoryList->setDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        dtEndCodeHistoryList->setMinimumDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        dtEndCodeHistoryList->setMaximumDate(QDate(2055, 12, 31));
        dtEndCodeHistoryList->setMinimumDate(QDate(2016, 1, 1));
        dtEndCodeHistoryList->setCurrentSection(QDateTimeEdit::MonthSection);
        dtEndCodeHistoryList->setCalendarPopup(false);
        cbLockNumHistory = new QComboBox(tab);
        cbLockNumHistory->setObjectName(QStringLiteral("cbLockNumHistory"));
        cbLockNumHistory->setGeometry(QRect(1, 0, 121, 51));
        cbLockNumHistory->setFont(font6);
        dtStartCodeHistoryList = new QDateTimeEdit(tab);
        dtStartCodeHistoryList->setObjectName(QStringLiteral("dtStartCodeHistoryList"));
        dtStartCodeHistoryList->setGeometry(QRect(190, 0, 231, 51));
        dtStartCodeHistoryList->setFont(font6);
        dtStartCodeHistoryList->setAlignment(Qt::AlignCenter);
        dtStartCodeHistoryList->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dtStartCodeHistoryList->setAccelerated(true);
        dtStartCodeHistoryList->setProperty("showGroupSeparator", QVariant(false));
        dtStartCodeHistoryList->setDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        dtStartCodeHistoryList->setMinimumDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        dtStartCodeHistoryList->setMaximumDate(QDate(2055, 12, 31));
        dtStartCodeHistoryList->setMinimumDate(QDate(2016, 1, 1));
        dtStartCodeHistoryList->setCurrentSection(QDateTimeEdit::MonthSection);
        dtStartCodeHistoryList->setCalendarPopup(false);
        tblHistory = new QTableWidget(tab);
        tblHistory->setObjectName(QStringLiteral("tblHistory"));
        tblHistory->setGeometry(QRect(2, 53, 791, 391));
        tblHistory->setFont(font6);
        tabWidget->addTab(tab, QString());
        widgetEdit = new QWidget(CFrmAdminInfo);
        widgetEdit->setObjectName(QStringLiteral("widgetEdit"));
        widgetEdit->setEnabled(true);
        widgetEdit->setGeometry(QRect(0, 0, 800, 480));
        widgetEdit->setFont(font1);
        widgetKeyboard = new QWidget(widgetEdit);
        widgetKeyboard->setObjectName(QStringLiteral("widgetKeyboard"));
        widgetKeyboard->setGeometry(QRect(0, 119, 800, 361));
        widgetKeyboard->setFont(font1);
        groupBox_2 = new QGroupBox(widgetKeyboard);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, -10, 781, 371));
        groupBox_2->setFont(font1);
        btnA = new QPushButton(groupBox_2);
        btnA->setObjectName(QStringLiteral("btnA"));
        btnA->setGeometry(QRect(0, 17, 55, 55));
        btnA->setFont(font1);
        btnA->setFocusPolicy(Qt::NoFocus);
        btnB = new QPushButton(groupBox_2);
        btnB->setObjectName(QStringLiteral("btnB"));
        btnB->setGeometry(QRect(60, 17, 55, 55));
        btnB->setFont(font1);
        btnB->setFocusPolicy(Qt::NoFocus);
        btnC = new QPushButton(groupBox_2);
        btnC->setObjectName(QStringLiteral("btnC"));
        btnC->setGeometry(QRect(120, 17, 55, 55));
        btnC->setFont(font1);
        btnC->setFocusPolicy(Qt::NoFocus);
        btnD = new QPushButton(groupBox_2);
        btnD->setObjectName(QStringLiteral("btnD"));
        btnD->setGeometry(QRect(180, 17, 55, 55));
        btnD->setFont(font1);
        btnD->setFocusPolicy(Qt::NoFocus);
        btnG = new QPushButton(groupBox_2);
        btnG->setObjectName(QStringLiteral("btnG"));
        btnG->setGeometry(QRect(360, 17, 55, 55));
        btnG->setFont(font1);
        btnG->setFocusPolicy(Qt::NoFocus);
        btnE = new QPushButton(groupBox_2);
        btnE->setObjectName(QStringLiteral("btnE"));
        btnE->setGeometry(QRect(240, 17, 55, 55));
        btnE->setFont(font1);
        btnE->setFocusPolicy(Qt::NoFocus);
        btnF = new QPushButton(groupBox_2);
        btnF->setObjectName(QStringLiteral("btnF"));
        btnF->setGeometry(QRect(300, 17, 55, 55));
        btnF->setFont(font1);
        btnF->setFocusPolicy(Qt::NoFocus);
        btnH = new QPushButton(groupBox_2);
        btnH->setObjectName(QStringLiteral("btnH"));
        btnH->setGeometry(QRect(420, 17, 55, 55));
        btnH->setFont(font1);
        btnH->setFocusPolicy(Qt::NoFocus);
        btnJ = new QPushButton(groupBox_2);
        btnJ->setObjectName(QStringLiteral("btnJ"));
        btnJ->setGeometry(QRect(540, 17, 55, 55));
        btnJ->setFont(font1);
        btnJ->setFocusPolicy(Qt::NoFocus);
        btnI = new QPushButton(groupBox_2);
        btnI->setObjectName(QStringLiteral("btnI"));
        btnI->setGeometry(QRect(480, 17, 55, 55));
        btnI->setFont(font1);
        btnI->setFocusPolicy(Qt::NoFocus);
        btnM = new QPushButton(groupBox_2);
        btnM->setObjectName(QStringLiteral("btnM"));
        btnM->setGeometry(QRect(120, 77, 55, 55));
        btnM->setFont(font1);
        btnM->setFocusPolicy(Qt::NoFocus);
        btnK = new QPushButton(groupBox_2);
        btnK->setObjectName(QStringLiteral("btnK"));
        btnK->setGeometry(QRect(0, 77, 55, 55));
        btnK->setFont(font1);
        btnK->setFocusPolicy(Qt::NoFocus);
        btnL = new QPushButton(groupBox_2);
        btnL->setObjectName(QStringLiteral("btnL"));
        btnL->setGeometry(QRect(60, 77, 55, 55));
        btnL->setFont(font1);
        btnL->setFocusPolicy(Qt::NoFocus);
        btnP = new QPushButton(groupBox_2);
        btnP->setObjectName(QStringLiteral("btnP"));
        btnP->setGeometry(QRect(300, 77, 55, 55));
        btnP->setFont(font1);
        btnP->setFocusPolicy(Qt::NoFocus);
        btnR = new QPushButton(groupBox_2);
        btnR->setObjectName(QStringLiteral("btnR"));
        btnR->setGeometry(QRect(420, 77, 55, 55));
        btnR->setFont(font1);
        btnR->setFocusPolicy(Qt::NoFocus);
        btnN = new QPushButton(groupBox_2);
        btnN->setObjectName(QStringLiteral("btnN"));
        btnN->setGeometry(QRect(180, 77, 55, 55));
        btnN->setFont(font1);
        btnN->setFocusPolicy(Qt::NoFocus);
        btnS = new QPushButton(groupBox_2);
        btnS->setObjectName(QStringLiteral("btnS"));
        btnS->setGeometry(QRect(480, 77, 55, 55));
        btnS->setFont(font1);
        btnS->setFocusPolicy(Qt::NoFocus);
        btnO = new QPushButton(groupBox_2);
        btnO->setObjectName(QStringLiteral("btnO"));
        btnO->setGeometry(QRect(240, 77, 55, 55));
        btnO->setFont(font1);
        btnO->setFocusPolicy(Qt::NoFocus);
        btnT = new QPushButton(groupBox_2);
        btnT->setObjectName(QStringLiteral("btnT"));
        btnT->setGeometry(QRect(540, 77, 55, 55));
        btnT->setFont(font1);
        btnT->setFocusPolicy(Qt::NoFocus);
        btnQ = new QPushButton(groupBox_2);
        btnQ->setObjectName(QStringLiteral("btnQ"));
        btnQ->setGeometry(QRect(360, 77, 55, 55));
        btnQ->setFont(font1);
        btnQ->setFocusPolicy(Qt::NoFocus);
        btnW = new QPushButton(groupBox_2);
        btnW->setObjectName(QStringLiteral("btnW"));
        btnW->setGeometry(QRect(120, 136, 55, 55));
        btnW->setFont(font1);
        btnW->setFocusPolicy(Qt::NoFocus);
        btn_At = new QPushButton(groupBox_2);
        btn_At->setObjectName(QStringLiteral("btn_At"));
        btn_At->setGeometry(QRect(360, 136, 55, 55));
        btn_At->setFont(font1);
        btn_At->setFocusPolicy(Qt::NoFocus);
        btnX = new QPushButton(groupBox_2);
        btnX->setObjectName(QStringLiteral("btnX"));
        btnX->setGeometry(QRect(180, 136, 55, 55));
        btnX->setFont(font1);
        btnX->setFocusPolicy(Qt::NoFocus);
        btnU = new QPushButton(groupBox_2);
        btnU->setObjectName(QStringLiteral("btnU"));
        btnU->setGeometry(QRect(0, 136, 55, 55));
        btnU->setFont(font1);
        btnU->setFocusPolicy(Qt::NoFocus);
        btnY = new QPushButton(groupBox_2);
        btnY->setObjectName(QStringLiteral("btnY"));
        btnY->setGeometry(QRect(240, 136, 55, 55));
        btnY->setFont(font1);
        btnY->setFocusPolicy(Qt::NoFocus);
        btn_Dash = new QPushButton(groupBox_2);
        btn_Dash->setObjectName(QStringLiteral("btn_Dash"));
        btn_Dash->setGeometry(QRect(540, 136, 55, 55));
        btn_Dash->setFont(font1);
        btn_Dash->setFocusPolicy(Qt::NoFocus);
        btnPeriod = new QPushButton(groupBox_2);
        btnPeriod->setObjectName(QStringLiteral("btnPeriod"));
        btnPeriod->setGeometry(QRect(420, 136, 55, 55));
        btnPeriod->setFont(font1);
        btnPeriod->setFocusPolicy(Qt::NoFocus);
        btnZ = new QPushButton(groupBox_2);
        btnZ->setObjectName(QStringLiteral("btnZ"));
        btnZ->setGeometry(QRect(300, 136, 55, 55));
        btnZ->setFont(font1);
        btnZ->setFocusPolicy(Qt::NoFocus);
        btnV = new QPushButton(groupBox_2);
        btnV->setObjectName(QStringLiteral("btnV"));
        btnV->setGeometry(QRect(60, 136, 55, 55));
        btnV->setFont(font1);
        btnV->setFocusPolicy(Qt::NoFocus);
        btn_Underscore = new QPushButton(groupBox_2);
        btn_Underscore->setObjectName(QStringLiteral("btn_Underscore"));
        btn_Underscore->setGeometry(QRect(480, 136, 55, 55));
        btn_Underscore->setFont(font1);
        btn_Underscore->setFocusPolicy(Qt::NoFocus);
        btn_Semicolon = new QPushButton(groupBox_2);
        btn_Semicolon->setObjectName(QStringLiteral("btn_Semicolon"));
        btn_Semicolon->setGeometry(QRect(240, 196, 55, 55));
        btn_Semicolon->setFont(font1);
        btn_Semicolon->setFocusPolicy(Qt::NoFocus);
        btn_Ampersand = new QPushButton(groupBox_2);
        btn_Ampersand->setObjectName(QStringLiteral("btn_Ampersand"));
        btn_Ampersand->setGeometry(QRect(480, 196, 55, 55));
        btn_Ampersand->setFont(font1);
        btn_Ampersand->setFocusPolicy(Qt::NoFocus);
        btn_Dollar = new QPushButton(groupBox_2);
        btn_Dollar->setObjectName(QStringLiteral("btn_Dollar"));
        btn_Dollar->setGeometry(QRect(540, 196, 55, 55));
        btn_Dollar->setFont(font1);
        btn_Dollar->setFocusPolicy(Qt::NoFocus);
        btn_Plus = new QPushButton(groupBox_2);
        btn_Plus->setObjectName(QStringLiteral("btn_Plus"));
        btn_Plus->setGeometry(QRect(0, 196, 55, 55));
        btn_Plus->setFont(font1);
        btn_Plus->setFocusPolicy(Qt::NoFocus);
        btn_Colon = new QPushButton(groupBox_2);
        btn_Colon->setObjectName(QStringLiteral("btn_Colon"));
        btn_Colon->setGeometry(QRect(180, 196, 55, 55));
        btn_Colon->setFont(font1);
        btn_Colon->setFocusPolicy(Qt::NoFocus);
        btn_Apostrophe = new QPushButton(groupBox_2);
        btn_Apostrophe->setObjectName(QStringLiteral("btn_Apostrophe"));
        btn_Apostrophe->setGeometry(QRect(300, 196, 55, 55));
        btn_Apostrophe->setFont(font1);
        btn_Apostrophe->setFocusPolicy(Qt::NoFocus);
        btn_Quote = new QPushButton(groupBox_2);
        btn_Quote->setObjectName(QStringLiteral("btn_Quote"));
        btn_Quote->setGeometry(QRect(360, 196, 55, 55));
        btn_Quote->setFont(font1);
        btn_Quote->setFocusPolicy(Qt::NoFocus);
        btn_QuestionMark = new QPushButton(groupBox_2);
        btn_QuestionMark->setObjectName(QStringLiteral("btn_QuestionMark"));
        btn_QuestionMark->setGeometry(QRect(60, 196, 55, 55));
        btn_QuestionMark->setFont(font1);
        btn_QuestionMark->setFocusPolicy(Qt::NoFocus);
        btn_Slash = new QPushButton(groupBox_2);
        btn_Slash->setObjectName(QStringLiteral("btn_Slash"));
        btn_Slash->setGeometry(QRect(120, 196, 55, 55));
        btn_Slash->setFont(font1);
        btn_Slash->setFocusPolicy(Qt::NoFocus);
        btn_Splat = new QPushButton(groupBox_2);
        btn_Splat->setObjectName(QStringLiteral("btn_Splat"));
        btn_Splat->setGeometry(QRect(420, 196, 55, 55));
        btn_Splat->setFont(font1);
        btn_Splat->setFocusPolicy(Qt::NoFocus);
        btn_LeftParen = new QPushButton(groupBox_2);
        btn_LeftParen->setObjectName(QStringLiteral("btn_LeftParen"));
        btn_LeftParen->setGeometry(QRect(660, 196, 55, 55));
        btn_LeftParen->setFont(font1);
        btn_LeftParen->setFocusPolicy(Qt::NoFocus);
        btn_Exclamation = new QPushButton(groupBox_2);
        btn_Exclamation->setObjectName(QStringLiteral("btn_Exclamation"));
        btn_Exclamation->setGeometry(QRect(600, 136, 55, 55));
        btn_Exclamation->setFont(font1);
        btn_Exclamation->setFocusPolicy(Qt::NoFocus);
        btn_Pound = new QPushButton(groupBox_2);
        btn_Pound->setObjectName(QStringLiteral("btn_Pound"));
        btn_Pound->setGeometry(QRect(660, 136, 55, 55));
        btn_Pound->setFont(font1);
        btn_Pound->setFocusPolicy(Qt::NoFocus);
        btn_Percent = new QPushButton(groupBox_2);
        btn_Percent->setObjectName(QStringLiteral("btn_Percent"));
        btn_Percent->setGeometry(QRect(600, 196, 55, 55));
        btn_Percent->setFont(font1);
        btn_Percent->setFocusPolicy(Qt::NoFocus);
        btn_RightParen = new QPushButton(groupBox_2);
        btn_RightParen->setObjectName(QStringLiteral("btn_RightParen"));
        btn_RightParen->setGeometry(QRect(720, 196, 55, 55));
        btn_RightParen->setFont(font1);
        btn_RightParen->setFocusPolicy(Qt::NoFocus);
        btn_Caret = new QPushButton(groupBox_2);
        btn_Caret->setObjectName(QStringLiteral("btn_Caret"));
        btn_Caret->setGeometry(QRect(720, 136, 55, 55));
        btn_Caret->setFont(font1);
        btn_Caret->setFocusPolicy(Qt::NoFocus);
        btn_0 = new QPushButton(groupBox_2);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(0, 314, 55, 55));
        btn_0->setFont(font1);
        btn_0->setFocusPolicy(Qt::NoFocus);
        btn_7 = new QPushButton(groupBox_2);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(420, 314, 55, 55));
        btn_7->setFont(font1);
        btn_7->setFocusPolicy(Qt::NoFocus);
        btn_Space = new QPushButton(groupBox_2);
        btn_Space->setObjectName(QStringLiteral("btn_Space"));
        btn_Space->setGeometry(QRect(600, 314, 91, 55));
        btn_Space->setFont(font2);
        btn_Space->setFocusPolicy(Qt::NoFocus);
        btn_9 = new QPushButton(groupBox_2);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(540, 314, 55, 55));
        btn_9->setFont(font1);
        btn_9->setFocusPolicy(Qt::NoFocus);
        btn_5 = new QPushButton(groupBox_2);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(300, 314, 55, 55));
        btn_5->setFont(font1);
        btn_5->setFocusPolicy(Qt::NoFocus);
        btn_1 = new QPushButton(groupBox_2);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(60, 314, 55, 55));
        btn_1->setFont(font1);
        btn_1->setFocusPolicy(Qt::NoFocus);
        btn_3 = new QPushButton(groupBox_2);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(180, 314, 55, 55));
        btn_3->setFont(font1);
        btn_3->setFocusPolicy(Qt::NoFocus);
        btn_6 = new QPushButton(groupBox_2);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(360, 314, 55, 55));
        btn_6->setFont(font1);
        btn_6->setFocusPolicy(Qt::NoFocus);
        btn_Return = new QPushButton(groupBox_2);
        btn_Return->setObjectName(QStringLiteral("btn_Return"));
        btn_Return->setGeometry(QRect(694, 314, 81, 55));
        btn_Return->setFont(font2);
        btn_Return->setFocusPolicy(Qt::NoFocus);
        btn_8 = new QPushButton(groupBox_2);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(480, 314, 55, 55));
        btn_8->setFont(font1);
        btn_8->setFocusPolicy(Qt::NoFocus);
        btn_2 = new QPushButton(groupBox_2);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(120, 314, 55, 55));
        btn_2->setFont(font1);
        btn_2->setFocusPolicy(Qt::NoFocus);
        btn_4 = new QPushButton(groupBox_2);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(240, 314, 55, 55));
        btn_4->setFont(font1);
        btn_4->setFocusPolicy(Qt::NoFocus);
        btn_Back = new QPushButton(groupBox_2);
        btn_Back->setObjectName(QStringLiteral("btn_Back"));
        btn_Back->setGeometry(QRect(600, 17, 91, 55));
        btn_Back->setFont(font2);
        btn_Back->setFocusPolicy(Qt::NoFocus);
        btn_Del = new QPushButton(groupBox_2);
        btn_Del->setObjectName(QStringLiteral("btn_Del"));
        btn_Del->setGeometry(QRect(600, 78, 91, 55));
        btn_Del->setFont(font2);
        btn_Del->setFocusPolicy(Qt::NoFocus);
        btn_Close = new QPushButton(groupBox_2);
        btn_Close->setObjectName(QStringLiteral("btn_Close"));
        btn_Close->setGeometry(QRect(696, 17, 80, 55));
        btn_Close->setFont(font2);
        btn_Close->setFocusPolicy(Qt::NoFocus);
        btn_Clear = new QPushButton(groupBox_2);
        btn_Clear->setObjectName(QStringLiteral("btn_Clear"));
        btn_Clear->setGeometry(QRect(695, 78, 80, 55));
        btn_Clear->setFont(font2);
        btn_Clear->setFocusPolicy(Qt::NoFocus);
        btn_LeftSquare = new QPushButton(groupBox_2);
        btn_LeftSquare->setObjectName(QStringLiteral("btn_LeftSquare"));
        btn_LeftSquare->setGeometry(QRect(540, 254, 55, 55));
        btn_LeftSquare->setFont(font1);
        btn_LeftSquare->setFocusPolicy(Qt::NoFocus);
        btn_LeftCurly = new QPushButton(groupBox_2);
        btn_LeftCurly->setObjectName(QStringLiteral("btn_LeftCurly"));
        btn_LeftCurly->setGeometry(QRect(420, 254, 55, 55));
        btn_LeftCurly->setFont(font1);
        btn_LeftCurly->setFocusPolicy(Qt::NoFocus);
        btn_RightSquare = new QPushButton(groupBox_2);
        btn_RightSquare->setObjectName(QStringLiteral("btn_RightSquare"));
        btn_RightSquare->setGeometry(QRect(600, 254, 55, 55));
        btn_RightSquare->setFont(font1);
        btn_RightSquare->setFocusPolicy(Qt::NoFocus);
        btn_Back_Slash = new QPushButton(groupBox_2);
        btn_Back_Slash->setObjectName(QStringLiteral("btn_Back_Slash"));
        btn_Back_Slash->setGeometry(QRect(120, 254, 55, 55));
        btn_Back_Slash->setFont(font1);
        btn_Back_Slash->setFocusPolicy(Qt::NoFocus);
        btn_LeftAngle = new QPushButton(groupBox_2);
        btn_LeftAngle->setObjectName(QStringLiteral("btn_LeftAngle"));
        btn_LeftAngle->setGeometry(QRect(300, 254, 55, 55));
        btn_LeftAngle->setFont(font1);
        btn_LeftAngle->setFocusPolicy(Qt::NoFocus);
        btn_Tilde = new QPushButton(groupBox_2);
        btn_Tilde->setObjectName(QStringLiteral("btn_Tilde"));
        btn_Tilde->setGeometry(QRect(240, 254, 55, 55));
        btn_Tilde->setFont(font1);
        btn_Tilde->setFocusPolicy(Qt::NoFocus);
        btn_RightAngle = new QPushButton(groupBox_2);
        btn_RightAngle->setObjectName(QStringLiteral("btn_RightAngle"));
        btn_RightAngle->setGeometry(QRect(360, 254, 55, 55));
        btn_RightAngle->setFont(font1);
        btn_RightAngle->setFocusPolicy(Qt::NoFocus);
        btn_RightCurly = new QPushButton(groupBox_2);
        btn_RightCurly->setObjectName(QStringLiteral("btn_RightCurly"));
        btn_RightCurly->setGeometry(QRect(480, 254, 55, 55));
        btn_RightCurly->setFont(font1);
        btn_RightCurly->setFocusPolicy(Qt::NoFocus);
        btn_OpenApost = new QPushButton(groupBox_2);
        btn_OpenApost->setObjectName(QStringLiteral("btn_OpenApost"));
        btn_OpenApost->setGeometry(QRect(180, 254, 55, 55));
        btn_OpenApost->setFont(font1);
        btn_OpenApost->setFocusPolicy(Qt::NoFocus);
        btn_Upper_Lower = new QPushButton(groupBox_2);
        btn_Upper_Lower->setObjectName(QStringLiteral("btn_Upper_Lower"));
        btn_Upper_Lower->setGeometry(QRect(660, 254, 111, 55));
        btn_Upper_Lower->setFont(font2);
        btn_Upper_Lower->setFocusPolicy(Qt::NoFocus);
        btn_Upper_Lower->setCheckable(true);
        btn_Upper_Lower->setChecked(false);
        lblCurrentEditFieldName = new QLabel(widgetEdit);
        lblCurrentEditFieldName->setObjectName(QStringLiteral("lblCurrentEditFieldName"));
        lblCurrentEditFieldName->setGeometry(QRect(20, 20, 411, 21));
        lblCurrentEditFieldName->setFont(font1);
        edText = new QLineEdit(widgetEdit);
        edText->setObjectName(QStringLiteral("edText"));
        edText->setGeometry(QRect(10, 50, 771, 71));
        edText->setFocusPolicy(Qt::StrongFocus);
        widgetEdit->raise();
        tabWidget->raise();

        retranslateUi(CFrmAdminInfo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CFrmAdminInfo);
    } // setupUi

    void retranslateUi(QDialog *CFrmAdminInfo)
    {
        CFrmAdminInfo->setWindowTitle(QApplication::translate("CFrmAdminInfo", "Dialog", 0));
        btnDone->setText(QApplication::translate("CFrmAdminInfo", "Save and Close", 0));
        lKey->setText(QApplication::translate("CFrmAdminInfo", "Predictive Key", 0));
        chkUsePredictive->setText(QApplication::translate("CFrmAdminInfo", "Use Predictive Code", 0));
        lblKey->setText(QString());
        lPredictiveCodeGenResolution->setText(QApplication::translate("CFrmAdminInfo", "Time Resolution", 0));
        spinCodeGenResolution->setSuffix(QApplication::translate("CFrmAdminInfo", " mins", 0));
        dtSystemTime->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm:ss AP", 0));
        cbInternetTime->setText(QApplication::translate("CFrmAdminInfo", "Internet Time", 0));
        btnSetTime->setText(QApplication::translate("CFrmAdminInfo", "Set Time", 0));
        cbTimeZone->clear();
        cbTimeZone->insertItems(0, QStringList()
         << QApplication::translate("CFrmAdminInfo", "Timezone", 0)
        );
        gpAdminInfo->setTitle(QString());
        lName->setText(QApplication::translate("CFrmAdminInfo", "Administrator", 0));
        lEmail->setText(QApplication::translate("CFrmAdminInfo", "Email", 0));
        lPhone->setText(QApplication::translate("CFrmAdminInfo", "Phone", 0));
        lAccessCd->setText(QApplication::translate("CFrmAdminInfo", "Admin Code", 0));
        lPassword->setText(QApplication::translate("CFrmAdminInfo", "Admin Password", 0));
        lAssistCode->setText(QApplication::translate("CFrmAdminInfo", "Assist Code", 0));
        lAssistPassword->setText(QApplication::translate("CFrmAdminInfo", "Assist Password", 0));
        lblName->setText(QString());
        lblEmail->setText(QString());
        lblPhone->setText(QString());
        lblAccessCode->setText(QString());
        lblPassword->setText(QString());
        lblAssistCode->setText(QString());
        lblAssistPassword->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabAdministrator), QApplication::translate("CFrmAdminInfo", "Administrator", 0));
        btnSetupSMTP->setText(QApplication::translate("CFrmAdminInfo", "Email Settings", 0));
        btnSetupVNC->setText(QApplication::translate("CFrmAdminInfo", "Remote Desktop Settings", 0));
        lblBrightness->setText(QApplication::translate("CFrmAdminInfo", "Brightness", 0));
        lblIpAddress->setText(QApplication::translate("CFrmAdminInfo", "IP Address", 0));
        lblIPAddress->setText(QString());
        btnCopyToggleSource->setText(QApplication::translate("CFrmAdminInfo", "Source #1", 0));
        btnCopyFile->setText(QApplication::translate("CFrmAdminInfo", "Install", 0));
        btnCopyFileLoadCodes->setText(QApplication::translate("CFrmAdminInfo", "Load", 0));
        lblBrandingImage->setText(QApplication::translate("CFrmAdminInfo", "Branding image", 0));
        btnCopyFileBrandingImage->setText(QApplication::translate("CFrmAdminInfo", "Load", 0));
        btnCopyFileBrandingImageReset->setText(QApplication::translate("CFrmAdminInfo", "Reset", 0));
        btnPurgeCodes->setText(QApplication::translate("CFrmAdminInfo", "Remove All Codes", 0));
        btnRebootSystem->setText(QApplication::translate("CFrmAdminInfo", "Reboot System", 0));
        lblInstallNewApp->setText(QApplication::translate("CFrmAdminInfo", "Install new KeyCodeBox App", 0));
        lblLoadBulkCodes->setText(QApplication::translate("CFrmAdminInfo", "Load bulk codes list", 0));
        chkShowFingerprint->setText(QApplication::translate("CFrmAdminInfo", "Show Fingerprint Button?", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabUtilities), QApplication::translate("CFrmAdminInfo", "Utilities", 0));
        lReportFreq->setText(QApplication::translate("CFrmAdminInfo", "Reporting Frequency", 0));
        btnSaveSettings->setText(QApplication::translate("CFrmAdminInfo", "Save", 0));
        lStartTime->setText(QApplication::translate("CFrmAdminInfo", "Reporting Start", 0));
        cbReportFreq->clear();
        cbReportFreq->insertItems(0, QStringList()
         << QApplication::translate("CFrmAdminInfo", "Never", 0)
         << QApplication::translate("CFrmAdminInfo", "Each Activity", 0)
         << QApplication::translate("CFrmAdminInfo", "Hourly", 0)
         << QApplication::translate("CFrmAdminInfo", "Every 12 Hours", 0)
         << QApplication::translate("CFrmAdminInfo", "Daily", 0)
         << QApplication::translate("CFrmAdminInfo", "Weekly", 0)
         << QApplication::translate("CFrmAdminInfo", "Monthly", 0)
        );
        dtStart->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        cbReportToFile->setText(QApplication::translate("CFrmAdminInfo", "Save to directory", 0));
        dtStartReport->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        lblPrintImmediate->setText(QApplication::translate("CFrmAdminInfo", "Print an immediate report", 0));
        lblStarting->setText(QApplication::translate("CFrmAdminInfo", "Starting", 0));
        lblEnding->setText(QApplication::translate("CFrmAdminInfo", "Ending", 0));
        dtEndReport->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        btnPrintReport->setText(QApplication::translate("CFrmAdminInfo", "Print Report", 0));
        cbReportViaEmail->setText(QApplication::translate("CFrmAdminInfo", "Report via Email", 0));
        btnToggleSource->setText(QApplication::translate("CFrmAdminInfo", "Source #1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabReport), QApplication::translate("CFrmAdminInfo", "Report", 0));
        btnOpenAllDoors_2->setText(QApplication::translate("CFrmAdminInfo", "Open All Doors", 0));
        cbBox7->setText(QApplication::translate("CFrmAdminInfo", " 7", 0));
        cbBox8->setText(QApplication::translate("CFrmAdminInfo", " 8", 0));
        cbBox63->setText(QApplication::translate("CFrmAdminInfo", "63", 0));
        cbBox64->setText(QApplication::translate("CFrmAdminInfo", "64", 0));
        cbBox6->setText(QApplication::translate("CFrmAdminInfo", "6", 0));
        cbBox5->setText(QApplication::translate("CFrmAdminInfo", "5", 0));
        cbBox1->setText(QApplication::translate("CFrmAdminInfo", "1", 0));
        cbBox2->setText(QApplication::translate("CFrmAdminInfo", "2", 0));
        cbBox3->setText(QApplication::translate("CFrmAdminInfo", "3", 0));
        cbBox4->setText(QApplication::translate("CFrmAdminInfo", "4", 0));
        cbBox9->setText(QApplication::translate("CFrmAdminInfo", "9", 0));
        cbBox17->setText(QApplication::translate("CFrmAdminInfo", "17", 0));
        cbBox25->setText(QApplication::translate("CFrmAdminInfo", "25", 0));
        cbBox33->setText(QApplication::translate("CFrmAdminInfo", "33", 0));
        cbBox41->setText(QApplication::translate("CFrmAdminInfo", "41", 0));
        cbBox49->setText(QApplication::translate("CFrmAdminInfo", "49", 0));
        cbBox57->setText(QApplication::translate("CFrmAdminInfo", "57", 0));
        cbBox10->setText(QApplication::translate("CFrmAdminInfo", "10", 0));
        cbBox11->setText(QApplication::translate("CFrmAdminInfo", "11", 0));
        cbBox12->setText(QApplication::translate("CFrmAdminInfo", "12", 0));
        cbBox13->setText(QApplication::translate("CFrmAdminInfo", "13", 0));
        cbBox14->setText(QApplication::translate("CFrmAdminInfo", "14", 0));
        cbBox15->setText(QApplication::translate("CFrmAdminInfo", "15", 0));
        cbBox16->setText(QApplication::translate("CFrmAdminInfo", "16", 0));
        cbBox18->setText(QApplication::translate("CFrmAdminInfo", "18", 0));
        cbBox23->setText(QApplication::translate("CFrmAdminInfo", "23", 0));
        cbBox19->setText(QApplication::translate("CFrmAdminInfo", "19", 0));
        cbBox20->setText(QApplication::translate("CFrmAdminInfo", "20", 0));
        cbBox21->setText(QApplication::translate("CFrmAdminInfo", "21", 0));
        cbBox22->setText(QApplication::translate("CFrmAdminInfo", "22", 0));
        cbBox24->setText(QApplication::translate("CFrmAdminInfo", "24", 0));
        cbBox26->setText(QApplication::translate("CFrmAdminInfo", "26", 0));
        cbBox27->setText(QApplication::translate("CFrmAdminInfo", "27", 0));
        cbBox28->setText(QApplication::translate("CFrmAdminInfo", "28", 0));
        cbBox29->setText(QApplication::translate("CFrmAdminInfo", "29", 0));
        cbBox30->setText(QApplication::translate("CFrmAdminInfo", "30", 0));
        cbBox31->setText(QApplication::translate("CFrmAdminInfo", "31", 0));
        cbBox32->setText(QApplication::translate("CFrmAdminInfo", "32", 0));
        cbBox34->setText(QApplication::translate("CFrmAdminInfo", "34", 0));
        cbBox35->setText(QApplication::translate("CFrmAdminInfo", "35", 0));
        cbBox36->setText(QApplication::translate("CFrmAdminInfo", "36", 0));
        cbBox37->setText(QApplication::translate("CFrmAdminInfo", "37", 0));
        cbBox39->setText(QApplication::translate("CFrmAdminInfo", "39", 0));
        cbBox38->setText(QApplication::translate("CFrmAdminInfo", "38", 0));
        cbBox40->setText(QApplication::translate("CFrmAdminInfo", "40", 0));
        cbBox42->setText(QApplication::translate("CFrmAdminInfo", "42", 0));
        cbBox43->setText(QApplication::translate("CFrmAdminInfo", "43", 0));
        cbBox44->setText(QApplication::translate("CFrmAdminInfo", "44", 0));
        cbBox45->setText(QApplication::translate("CFrmAdminInfo", "45", 0));
        cbBox46->setText(QApplication::translate("CFrmAdminInfo", "46", 0));
        cbBox47->setText(QApplication::translate("CFrmAdminInfo", "47", 0));
        cbBox48->setText(QApplication::translate("CFrmAdminInfo", "48", 0));
        cbBox50->setText(QApplication::translate("CFrmAdminInfo", "50", 0));
        cbBox51->setText(QApplication::translate("CFrmAdminInfo", "51", 0));
        cbBox52->setText(QApplication::translate("CFrmAdminInfo", "52", 0));
        cbBox53->setText(QApplication::translate("CFrmAdminInfo", "53", 0));
        cbBox54->setText(QApplication::translate("CFrmAdminInfo", "54", 0));
        cbBox56->setText(QApplication::translate("CFrmAdminInfo", "56", 0));
        cbBox55->setText(QApplication::translate("CFrmAdminInfo", "55", 0));
        cbBox58->setText(QApplication::translate("CFrmAdminInfo", "58", 0));
        cbBox59->setText(QApplication::translate("CFrmAdminInfo", "59", 0));
        cbBox60->setText(QApplication::translate("CFrmAdminInfo", "60", 0));
        cbBox61->setText(QApplication::translate("CFrmAdminInfo", "61", 0));
        cbBox62->setText(QApplication::translate("CFrmAdminInfo", "62", 0));
        lblMaxLock->setText(QApplication::translate("CFrmAdminInfo", "Max Lock #", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDoors), QApplication::translate("CFrmAdminInfo", "Doors", 0));
        dtStartCodeList->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        lblCodeFrom->setText(QApplication::translate("CFrmAdminInfo", "From", 0));
        lblCodeTo->setText(QApplication::translate("CFrmAdminInfo", "To", 0));
        btnReadCodes->setText(QApplication::translate("CFrmAdminInfo", "Read", 0));
        dtEndCodeList->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        cbLockNum->clear();
        cbLockNum->insertItems(0, QStringList()
         << QApplication::translate("CFrmAdminInfo", "All Locks", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabCodes), QApplication::translate("CFrmAdminInfo", "Codes", 0));
        btnRead->setText(QApplication::translate("CFrmAdminInfo", "Read", 0));
        lblHistoryTo->setText(QApplication::translate("CFrmAdminInfo", "To", 0));
        lblHistoryFrom->setText(QApplication::translate("CFrmAdminInfo", "From", 0));
        dtEndCodeHistoryList->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        cbLockNumHistory->clear();
        cbLockNumHistory->insertItems(0, QStringList()
         << QApplication::translate("CFrmAdminInfo", "All Locks", 0)
        );
        dtStartCodeHistoryList->setDisplayFormat(QApplication::translate("CFrmAdminInfo", "MMM dd yyyy hh:mm AP", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CFrmAdminInfo", "History", 0));
        groupBox_2->setTitle(QString());
        btnA->setText(QApplication::translate("CFrmAdminInfo", "A", 0));
        btnB->setText(QApplication::translate("CFrmAdminInfo", "B", 0));
        btnC->setText(QApplication::translate("CFrmAdminInfo", "C", 0));
        btnD->setText(QApplication::translate("CFrmAdminInfo", "D", 0));
        btnG->setText(QApplication::translate("CFrmAdminInfo", "G", 0));
        btnE->setText(QApplication::translate("CFrmAdminInfo", "E", 0));
        btnF->setText(QApplication::translate("CFrmAdminInfo", "F", 0));
        btnH->setText(QApplication::translate("CFrmAdminInfo", "H", 0));
        btnJ->setText(QApplication::translate("CFrmAdminInfo", "J", 0));
        btnI->setText(QApplication::translate("CFrmAdminInfo", "I", 0));
        btnM->setText(QApplication::translate("CFrmAdminInfo", "M", 0));
        btnK->setText(QApplication::translate("CFrmAdminInfo", "K", 0));
        btnL->setText(QApplication::translate("CFrmAdminInfo", "L", 0));
        btnP->setText(QApplication::translate("CFrmAdminInfo", "P", 0));
        btnR->setText(QApplication::translate("CFrmAdminInfo", "R", 0));
        btnN->setText(QApplication::translate("CFrmAdminInfo", "N", 0));
        btnS->setText(QApplication::translate("CFrmAdminInfo", "S", 0));
        btnO->setText(QApplication::translate("CFrmAdminInfo", "O", 0));
        btnT->setText(QApplication::translate("CFrmAdminInfo", "T", 0));
        btnQ->setText(QApplication::translate("CFrmAdminInfo", "Q", 0));
        btnW->setText(QApplication::translate("CFrmAdminInfo", "W", 0));
        btn_At->setText(QApplication::translate("CFrmAdminInfo", "@", 0));
        btnX->setText(QApplication::translate("CFrmAdminInfo", "X", 0));
        btnU->setText(QApplication::translate("CFrmAdminInfo", "U", 0));
        btnY->setText(QApplication::translate("CFrmAdminInfo", "Y", 0));
        btn_Dash->setText(QApplication::translate("CFrmAdminInfo", "-", 0));
        btnPeriod->setText(QApplication::translate("CFrmAdminInfo", ".", 0));
        btnZ->setText(QApplication::translate("CFrmAdminInfo", "Z", 0));
        btnV->setText(QApplication::translate("CFrmAdminInfo", "V", 0));
        btn_Underscore->setText(QApplication::translate("CFrmAdminInfo", "_", 0));
        btn_Semicolon->setText(QApplication::translate("CFrmAdminInfo", ";", 0));
        btn_Ampersand->setText(QApplication::translate("CFrmAdminInfo", "&&", 0));
        btn_Dollar->setText(QApplication::translate("CFrmAdminInfo", "$", 0));
        btn_Plus->setText(QApplication::translate("CFrmAdminInfo", "+", 0));
        btn_Colon->setText(QApplication::translate("CFrmAdminInfo", ":", 0));
        btn_Apostrophe->setText(QApplication::translate("CFrmAdminInfo", "'", 0));
        btn_Quote->setText(QApplication::translate("CFrmAdminInfo", "\"", 0));
        btn_QuestionMark->setText(QApplication::translate("CFrmAdminInfo", "?", 0));
        btn_Slash->setText(QApplication::translate("CFrmAdminInfo", "/", 0));
        btn_Splat->setText(QApplication::translate("CFrmAdminInfo", "*", 0));
        btn_LeftParen->setText(QApplication::translate("CFrmAdminInfo", "(", 0));
        btn_Exclamation->setText(QApplication::translate("CFrmAdminInfo", "!", 0));
        btn_Pound->setText(QApplication::translate("CFrmAdminInfo", "#", 0));
        btn_Percent->setText(QApplication::translate("CFrmAdminInfo", "%", 0));
        btn_RightParen->setText(QApplication::translate("CFrmAdminInfo", ")", 0));
        btn_Caret->setText(QApplication::translate("CFrmAdminInfo", "^", 0));
        btn_0->setText(QApplication::translate("CFrmAdminInfo", "0", 0));
        btn_7->setText(QApplication::translate("CFrmAdminInfo", "7", 0));
        btn_Space->setText(QApplication::translate("CFrmAdminInfo", "Space", 0));
        btn_9->setText(QApplication::translate("CFrmAdminInfo", "9", 0));
        btn_5->setText(QApplication::translate("CFrmAdminInfo", "5", 0));
        btn_1->setText(QApplication::translate("CFrmAdminInfo", "1", 0));
        btn_3->setText(QApplication::translate("CFrmAdminInfo", "3", 0));
        btn_6->setText(QApplication::translate("CFrmAdminInfo", "6", 0));
        btn_Return->setText(QApplication::translate("CFrmAdminInfo", "Enter", 0));
        btn_8->setText(QApplication::translate("CFrmAdminInfo", "8", 0));
        btn_2->setText(QApplication::translate("CFrmAdminInfo", "2", 0));
        btn_4->setText(QApplication::translate("CFrmAdminInfo", "4", 0));
        btn_Back->setText(QApplication::translate("CFrmAdminInfo", "Back", 0));
        btn_Del->setText(QApplication::translate("CFrmAdminInfo", "Del", 0));
        btn_Close->setText(QApplication::translate("CFrmAdminInfo", "Close", 0));
        btn_Clear->setText(QApplication::translate("CFrmAdminInfo", "Clear", 0));
        btn_LeftSquare->setText(QApplication::translate("CFrmAdminInfo", "[", 0));
        btn_LeftCurly->setText(QApplication::translate("CFrmAdminInfo", "{", 0));
        btn_RightSquare->setText(QApplication::translate("CFrmAdminInfo", "]", 0));
        btn_Back_Slash->setText(QApplication::translate("CFrmAdminInfo", "\\", 0));
        btn_LeftAngle->setText(QApplication::translate("CFrmAdminInfo", "<", 0));
        btn_Tilde->setText(QApplication::translate("CFrmAdminInfo", "~", 0));
        btn_RightAngle->setText(QApplication::translate("CFrmAdminInfo", ">", 0));
        btn_RightCurly->setText(QApplication::translate("CFrmAdminInfo", "}", 0));
        btn_OpenApost->setText(QApplication::translate("CFrmAdminInfo", "`", 0));
        btn_Upper_Lower->setText(QApplication::translate("CFrmAdminInfo", "Lower", 0));
        lblCurrentEditFieldName->setText(QApplication::translate("CFrmAdminInfo", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CFrmAdminInfo: public Ui_CFrmAdminInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMADMININFO_H
