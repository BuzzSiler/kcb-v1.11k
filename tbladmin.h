#ifndef CTBLADMIN_H
#define CTBLADMIN_H

#include <stdint-gcc.h>
#include <ctime>
#include <string>
#include <QtSql>
#include <QDateTime>


class CAdminRec : public QObject {
    Q_OBJECT
private:
    int ids;    //  integer primary key unique,
    std::string admin_name; // text,
    std::string admin_email; // text,
    std::string admin_phone; // text,
    bool        email_report_active;  // bool - true = email report, false = no email report
    QDateTime   default_report_freq; // DATETIME
    QDateTime   default_report_start;    // DATETIME,
    std::string password;    // text,
    std::string access_code_old; // text
    std::string access_code; // text
    std::string assist_code; //text
    std::string assist_password; //text
    bool        use_predictive_access_code;
    std::string pred_key;
    int         pred_resolution;
    uint32_t    max_locks;

    bool        show_fingerprint; // bool: true = display button
    std::string smtp_server;
    int smtp_port;
    int smtp_type;
    std::string smtp_username;
    std::string smtp_password;

    std::string vnc_server;
    int vnc_port;
    int vnc_type;
    std::string vnc_username;
    std::string vnc_password;
    
    bool        report_via_email;
    bool        report_save_to_file;
    std::string report_directory;

public:
    CAdminRec() {
        ids = -1;
        admin_name = "";
        admin_email = "";
        admin_phone = "";

        default_report_freq = QDateTime(QDate(), QTime(24, 0, 0)); // TIME, Daily
        default_report_start = QDateTime(QDate(2016, 6, 1), QTime(00, 00));    // DATETIME,
        password = "";
        access_code_old = "";
        access_code = "";
        assist_code = "";
        assist_password = "";
        use_predictive_access_code = false;
        pred_key = "KEYCODEBOXTEST";
        pred_resolution = 10;
        max_locks = 16;

        show_fingerprint = 0;
        smtp_server = "";
        smtp_port = 0;
        smtp_type = 0; // 0=TCP, 1=SSL, 2=TSL
        smtp_username = "";
        smtp_password = "";
        vnc_server = "";
        vnc_port = 0;
        vnc_type = 0; // 0=TCP, 1=SSL, 2=TSL
        vnc_username = "";
        vnc_password = "";

        report_via_email = false;
        report_save_to_file = false;
        report_directory = "";
    }

public:
    CAdminRec &operator=(CAdminRec &newRec) {
        ids = newRec.ids;
        admin_name = newRec.admin_name;
        admin_email = newRec.admin_email;
        admin_phone = newRec.admin_phone;
        email_report_active = newRec.email_report_active;
        default_report_freq = newRec.default_report_freq;
        default_report_start = newRec.default_report_start;
        password = newRec.password;
        access_code_old = newRec.access_code_old;
        access_code = newRec.access_code;
        assist_code = newRec.assist_code;
        assist_password = newRec.assist_password;
        use_predictive_access_code = newRec.use_predictive_access_code;
        pred_key = newRec.pred_key;
        pred_resolution = newRec.pred_resolution;
        max_locks = newRec.max_locks;

        show_fingerprint = newRec.show_fingerprint;
        smtp_server = newRec.smtp_server;
        smtp_port = newRec.smtp_port;
        smtp_type = newRec.smtp_type;
        smtp_username = newRec.smtp_username;
        smtp_password = newRec.smtp_password;

        vnc_port = newRec.vnc_port;
	    vnc_password = newRec.vnc_password;
	
        report_via_email = newRec.report_via_email;
        report_save_to_file = newRec.report_save_to_file;
        report_directory = newRec.report_directory;
    }

    int getID() { return ids; }    //  integer primary key unique,
    void setID(int id) { ids = id; }

    std::string getAdminName() { return admin_name; }// text,
    void setAdminName(std::string adminName) { admin_name = adminName; }

    std::string getAdminEmail() { return admin_email; } // text,
    void setAdminEmail(std::string adminEmail) { admin_email = adminEmail; }

    std::string getAdminPhone() { return admin_phone; } // text,
    void setAdminPhone(std::string adminPhone) { admin_phone = adminPhone; }

    bool getEmailReportActive() { return email_report_active; }
    void setEmailReportActive(bool bActive) { email_report_active = bActive; }

    QDateTime getDefaultReportFreq() { return default_report_freq; } // DATETIME
    void  setDefaultReportFreq(QDateTime freq) { default_report_freq = freq; }

    QDateTime getDefaultReportStart() { return default_report_start; }    // DATETIME
    void setDefaultReportStart(QDateTime start) { default_report_start = start; }    // DATETIME

    std::string getPassword() { return password; }   // text,
    void setPassword(std::string pw) { password = pw; }

    std::string getAccessCodeOld() { return access_code_old; } // text
    void setAccessCodeOld(std::string accessCode) { access_code_old = accessCode; }

    std::string getAccessCode() { return access_code; } // text
    void setAccessCode(std::string accessCode) { access_code = accessCode; }

    std::string getAssistCode() { return assist_code; } //text
    void setAssistCode(std::string assistCode) { assist_code = assistCode; }

    std::string getAssistPassword() { return assist_password; } //text
    void setAssistPassword(std::string assistPassword) { assist_password = assistPassword; }

    bool getUsePredictiveAccessCode() { return use_predictive_access_code; }
    void setUsePredictiveAccessCode(bool bSet) { use_predictive_access_code = bSet; }

    std::string getPredictiveKey() { return pred_key; }
    void setPredictiveKey(std::string key) { pred_key = key; }

    int getPredictiveResolution() { return pred_resolution; }
    void setPredictiveResolution(int nValue) { pred_resolution = nValue; }

    uint32_t getMaxLocks() { return max_locks; }
    void setMaxLocks(uint32_t nLocks) { max_locks = nLocks; }

    std::string getSMTPServer() { return smtp_server; }
    void setSMTPServer(std::string smtpserver) { smtp_server = smtpserver; }

    bool getShowFingerprint() { return show_fingerprint; }
    void setShowFingerprint(bool showFingerprint) { show_fingerprint = showFingerprint; }

    int getSMTPPort() { return smtp_port; }
    void setSMTPPort(int port) { smtp_port = port; }

    int getSMTPType() { return smtp_type; }
    void setSMTPType(int type) { smtp_type = type; }

    std::string getSMTPUsername() { return smtp_username; }
    void setSMTPUsername(std::string smtpusername) { smtp_username = smtpusername; }

    std::string getSMTPPassword() { return smtp_password; }
    void setSMTPPassword(std::string password) { smtp_password = password; }

    // remote desktop definitions
    std::string getVNCServer() { return vnc_server; }
    void setVNCServer(std::string vncserver) { vnc_server = vncserver; }
    int getVNCPort() { return vnc_port; }
    void setVNCPort(int port) { vnc_port = port; }
    int getVNCType() { return vnc_type; }
    void setVNCType(int type) { vnc_type = type; }
    std::string getVNCUsername() { return vnc_username; }
    void setVNCUsername(std::string vncusername) { vnc_username = vncusername; }
    std::string getVNCPassword() { return vnc_password; }
    void setVNCPassword(std::string password) { vnc_password = password; }
    
    bool getReportViaEmail() { return report_via_email; }
    void setReportViaEmail(bool bReportViaEmail) { report_via_email = bReportViaEmail; }
    bool getReportToFile() { return report_save_to_file; }
    void setReportToFile(bool bReportToFile) { report_save_to_file = bReportToFile; }
    std::string getReportDirectory() { return report_directory; }
    void setReportDirectory(std::string directory) { report_directory = directory; }

    QJsonObject &jsonRecord(QJsonObject &json);
    QString jsonRecordAsString();

    bool setFromJsonObject(QJsonObject jsonObj);
    bool setFromJsonString(std::string strJson);
};

/**
 * @brief The CTblAdmin class
 *
 * @table "admin" fields
 *      ids integer primary key unique,
 *      admin_name text,
 *      admin_email text,
 *      admin_phone text,
 *      email_report_active,
 *      default_report_freq TIME,
 *      default_report_start DATETIME,
 *      password text,
 *      access_code text,
 *      assist_code text,
 *      assist_password text
 */

class CTblAdmin
{
    const std::string TABLENAME = "admin";

private:
    QSqlDatabase *_pDB;

    QString _DATENONE = QDateTime(QDate(1990,1,1), QTime(0,0,0)).toString("yyyy-MM-dd HH:mm:ss");

    bool createTable();
    bool tableExists();

    CAdminRec   _currentAdmin;

    void currentTimeFull(std::string strBuffer);
    void currentTimeFormat(std::string format, std::string strBuffer, int nExpectedLength);
    bool createAdminDefault();
    void initialize();
    bool readAdmin();

public:
    CTblAdmin(QSqlDatabase *db)
    {
        setDatabase(db);
        initialize();
    }

    void setDatabase(QSqlDatabase *db) {
        _pDB = db;
    }

    void addAdmin();
    bool updateAdmin(std::string name, std::string email, std::string phone,
                     bool activeReport, QDateTime repFreq, QDateTime startReport,
                     std::string passwordEnc, std::string accessCdEnc,
                     std::string assistPasswordEnc, std::string assistCodeEnc,
                     bool showFingerprint,
                     bool usePredictive, std::string predKey, int predRes,
                     uint32_t nMaxLocks,
                     std::string smtpserver, int smptport, int smtptype,
                     std::string smtpusername, std::string smtppassword,
                     int vncport, std::string vncpasword,
                     bool bEmailReport, bool bSaveReport, std::string reportDirectory);

    bool updateAdminClear(std::string name, std::string email, std::string phone,
                     bool activeReport, QDateTime repFreq, QDateTime startReport,
                     std::string passwordClear, std::string accessCdClear,
                     std::string assistPasswordClear, std::string assistCodeClear,
                     bool showFingerprint,
                     bool usePredictive, std::string predKey, int predRes,
                     uint32_t nMaxLocks,
                     std::string smtpserver, int smptport, int smtptype,
                     std::string smtpusername, std::string smtppassword,
                     int vncport, std::string vncpassword,
                     bool bEmailReport, bool bSaveReport, std::string reportDirectory);
    bool updateAdmin(CAdminRec &rec);
    bool updateAdmin(QJsonObject adminObj);

    time_t  getReportStartTime();
    time_t  getReportFrequency();

    QString isAccessCode(QString code);     // Numeric
    bool isPassword(QString password, QString type);

    CAdminRec &getCurrentAdmin() { return _currentAdmin; }
};

#endif // CTBLADMIN_H
