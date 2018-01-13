/********************************************************************************
** Form generated from reading UI file 'dlgsmtp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSMTP_H
#define UI_DLGSMTP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_CDlgSMTP
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lSMTPServer;
    QLabel *lPort;
    QLabel *lUserName;
    QLabel *lPassword;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    CClickableLabel *lblSMTPServer;
    CClickableLabel *lblSMTPPort;
    CClickableLabel *lblUsername;
    CClickableLabel *lblPassword;
    QGroupBox *grpSecurityType;
    QRadioButton *rbtnNone;
    QRadioButton *rbtnSSL;
    QRadioButton *rbtnTLS;

    void setupUi(QDialog *CDlgSMTP)
    {
        if (CDlgSMTP->objectName().isEmpty())
            CDlgSMTP->setObjectName(QStringLiteral("CDlgSMTP"));
        CDlgSMTP->resize(612, 330);
        QFont font;
        font.setPointSize(12);
        CDlgSMTP->setFont(font);
        buttonBox = new QDialogButtonBox(CDlgSMTP);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 280, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        line = new QFrame(CDlgSMTP);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 314, 611, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CDlgSMTP);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, -3, 611, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CDlgSMTP);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-6, 9, 20, 311));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CDlgSMTP);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(595, 8, 20, 311));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CDlgSMTP);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 201, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lSMTPServer = new QLabel(layoutWidget);
        lSMTPServer->setObjectName(QStringLiteral("lSMTPServer"));

        verticalLayout->addWidget(lSMTPServer);

        lPort = new QLabel(layoutWidget);
        lPort->setObjectName(QStringLiteral("lPort"));

        verticalLayout->addWidget(lPort);

        lUserName = new QLabel(layoutWidget);
        lUserName->setObjectName(QStringLiteral("lUserName"));

        verticalLayout->addWidget(lUserName);

        lPassword = new QLabel(layoutWidget);
        lPassword->setObjectName(QStringLiteral("lPassword"));

        verticalLayout->addWidget(lPassword);

        layoutWidget1 = new QWidget(CDlgSMTP);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 20, 371, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblSMTPServer = new CClickableLabel(layoutWidget1);
        lblSMTPServer->setObjectName(QStringLiteral("lblSMTPServer"));
        QFont font1;
        font1.setUnderline(true);
        lblSMTPServer->setFont(font1);

        verticalLayout_2->addWidget(lblSMTPServer);

        lblSMTPPort = new CClickableLabel(layoutWidget1);
        lblSMTPPort->setObjectName(QStringLiteral("lblSMTPPort"));
        lblSMTPPort->setFont(font1);

        verticalLayout_2->addWidget(lblSMTPPort);

        lblUsername = new CClickableLabel(layoutWidget1);
        lblUsername->setObjectName(QStringLiteral("lblUsername"));
        lblUsername->setFont(font1);

        verticalLayout_2->addWidget(lblUsername);

        lblPassword = new CClickableLabel(layoutWidget1);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setFont(font1);
        lblPassword->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout_2->addWidget(lblPassword);

        grpSecurityType = new QGroupBox(CDlgSMTP);
        grpSecurityType->setObjectName(QStringLiteral("grpSecurityType"));
        grpSecurityType->setGeometry(QRect(10, 210, 571, 51));
        rbtnNone = new QRadioButton(grpSecurityType);
        rbtnNone->setObjectName(QStringLiteral("rbtnNone"));
        rbtnNone->setGeometry(QRect(10, 20, 112, 26));
        rbtnNone->setChecked(true);
        rbtnSSL = new QRadioButton(grpSecurityType);
        rbtnSSL->setObjectName(QStringLiteral("rbtnSSL"));
        rbtnSSL->setGeometry(QRect(160, 20, 112, 26));
        rbtnTLS = new QRadioButton(grpSecurityType);
        rbtnTLS->setObjectName(QStringLiteral("rbtnTLS"));
        rbtnTLS->setGeometry(QRect(330, 20, 112, 26));

        retranslateUi(CDlgSMTP);
        QObject::connect(buttonBox, SIGNAL(accepted()), CDlgSMTP, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CDlgSMTP, SLOT(reject()));

        QMetaObject::connectSlotsByName(CDlgSMTP);
    } // setupUi

    void retranslateUi(QDialog *CDlgSMTP)
    {
        CDlgSMTP->setWindowTitle(QApplication::translate("CDlgSMTP", "Dialog", 0));
        lSMTPServer->setText(QApplication::translate("CDlgSMTP", "SMTP Server", 0));
        lPort->setText(QApplication::translate("CDlgSMTP", "Port", 0));
        lUserName->setText(QApplication::translate("CDlgSMTP", "User Email", 0));
        lPassword->setText(QApplication::translate("CDlgSMTP", "Password", 0));
        lblSMTPServer->setText(QString());
        lblSMTPPort->setText(QString());
        lblUsername->setText(QString());
        lblPassword->setText(QString());
        grpSecurityType->setTitle(QApplication::translate("CDlgSMTP", "Security", 0));
        rbtnNone->setText(QApplication::translate("CDlgSMTP", "None", 0));
        rbtnSSL->setText(QApplication::translate("CDlgSMTP", "SSL", 0));
        rbtnTLS->setText(QApplication::translate("CDlgSMTP", "TLS", 0));
    } // retranslateUi

};

namespace Ui {
    class CDlgSMTP: public Ui_CDlgSMTP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSMTP_H
