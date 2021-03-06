#ifndef DLGSMTP_H
#define DLGSMTP_H

#include <QDialog>
#include "clickablelabel.h"
#include "dlgfullkeyboard.h"

namespace Ui {
class CDlgSMTP;
}

class CDlgSMTP : public QDialog
{
    Q_OBJECT

private:
    QString _sSMTPServer;
    QString _sSMTPPort;
    QString _sSMTPType;
    QString _sUsername;
    QString _sPassword;

    CCurrentEdit        *_pcurrentLabelEdit = 0;
    CDlgFullKeyboard    *_pKeyboard = 0;

public:
    explicit CDlgSMTP(QWidget *parent = 0);
    ~CDlgSMTP();

    void setValues(QString sSMTPServer, int nSMTPPort, int nSMTPType, QString sUsername, QString sPassword);
    void getValues(QString &sSMTPServer, int &nSMTPPort, int &nSMTPType, QString &sUsername, QString &sPassword);

signals:
    void __onSMTPDialogComplete(CDlgSMTP*);
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

    void on_lblSMTPServer_clicked();
    void on_lblSMTPPort_clicked();
    void on_lblUsername_clicked();
    void on_lblPassword_clicked();

    void OnTextEntered(CDlgFullKeyboard *pkeyboard, CCurrentEdit *pCurrEdit);
    void OnCancelKeyboard(CDlgFullKeyboard *pkeyboard, CCurrentEdit *pCurrEdit);
    void OnCloseKeyboard(CDlgFullKeyboard *pkeyboard);
private:
    Ui::CDlgSMTP *ui;
    void onStartEditLabel(QLabel *pLabel, QString sLabelText);
    void initializeKeyboard();
    void shutdown();
    void checkAndCreateCurrentLabelEdit();
};

#endif // DLGSMTP_H
