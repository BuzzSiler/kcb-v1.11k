/********************************************************************************
** Form generated from reading UI file 'dlgvnc.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGVNC_H
#define UI_DLGVNC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_CDlgVNC
{
public:
    QPushButton *btnResetVNC;
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lPort;
    QLabel *lPassword;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    CClickableLabel *lblVNCPort;
    CClickableLabel *lblPassword;

    void setupUi(QDialog *CDlgVNC)
    {
        if (CDlgVNC->objectName().isEmpty())
            CDlgVNC->setObjectName(QStringLiteral("CDlgVNC"));
        CDlgVNC->resize(612, 330);
        QFont font;
        font.setPointSize(12);
        CDlgVNC->setFont(font);
        btnResetVNC = new QPushButton(CDlgVNC);
        btnResetVNC->setObjectName(QStringLiteral("btnResetVNC"));
        btnResetVNC->setGeometry(QRect(155, 210, 130, 45));
        buttonBox = new QDialogButtonBox(CDlgVNC);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 280, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        line = new QFrame(CDlgVNC);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 314, 611, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CDlgVNC);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, -3, 611, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CDlgVNC);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-6, 9, 20, 311));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CDlgVNC);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(595, 8, 20, 311));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CDlgVNC);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 201, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lPort = new QLabel(layoutWidget);
        lPort->setObjectName(QStringLiteral("lPort"));

        verticalLayout->addWidget(lPort);

        lPassword = new QLabel(layoutWidget);
        lPassword->setObjectName(QStringLiteral("lPassword"));

        verticalLayout->addWidget(lPassword);

        layoutWidget1 = new QWidget(CDlgVNC);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 20, 371, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblVNCPort = new CClickableLabel(layoutWidget1);
        lblVNCPort->setObjectName(QStringLiteral("lblVNCPort"));
        QFont font1;
        font1.setUnderline(true);
        lblVNCPort->setFont(font1);

        verticalLayout_2->addWidget(lblVNCPort);

        lblPassword = new CClickableLabel(layoutWidget1);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setFont(font1);
        lblPassword->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout_2->addWidget(lblPassword);


        retranslateUi(CDlgVNC);
        QObject::connect(buttonBox, SIGNAL(accepted()), CDlgVNC, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CDlgVNC, SLOT(reject()));

        QMetaObject::connectSlotsByName(CDlgVNC);
    } // setupUi

    void retranslateUi(QDialog *CDlgVNC)
    {
        CDlgVNC->setWindowTitle(QApplication::translate("CDlgVNC", "Dialog", 0));
        btnResetVNC->setText(QApplication::translate("CDlgVNC", "Save", 0));
        lPort->setText(QApplication::translate("CDlgVNC", "Port", 0));
        lPassword->setText(QApplication::translate("CDlgVNC", "Password", 0));
        lblVNCPort->setText(QString());
        lblPassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgVNC: public Ui_CDlgVNC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGVNC_H
