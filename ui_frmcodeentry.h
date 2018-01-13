/********************************************************************************
** Form generated from reading UI file 'frmcodeentry.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCODEENTRY_H
#define UI_FRMCODEENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFrmCodeEntry
{
public:
    QLabel *label;

    void setupUi(QWidget *CFrmCodeEntry)
    {
        if (CFrmCodeEntry->objectName().isEmpty())
            CFrmCodeEntry->setObjectName(QStringLiteral("CFrmCodeEntry"));
        CFrmCodeEntry->resize(800, 480);
        label = new QLabel(CFrmCodeEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 61, 16));

        retranslateUi(CFrmCodeEntry);

        QMetaObject::connectSlotsByName(CFrmCodeEntry);
    } // setupUi

    void retranslateUi(QWidget *CFrmCodeEntry)
    {
        CFrmCodeEntry->setWindowTitle(QApplication::translate("CFrmCodeEntry", "Form", 0));
        label->setText(QApplication::translate("CFrmCodeEntry", "Enter Code", 0));
    } // retranslateUi

};

namespace Ui {
    class CFrmCodeEntry: public Ui_CFrmCodeEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCODEENTRY_H
