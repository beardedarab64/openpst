/**
* LICENSE PLACEHOLDER
*
* @file qcdm_window.h
* @class QcdmWindow
* @package OpenPST
* @brief QCDM GUI interface class definitions
*
* @author Gassan Idriss <ghassani@gmail.com>
* @author Matteson Raab <mraabhimself@gmail.com>
*/

#ifndef _GUI_QCDM_WINDOW_H
#define _GUI_QCDM_WINDOW_H

#include <QMainWindow>
#include <QVariant>
#include <QFileDialog>
#include "ui_qcdm_window.h"
#include "qc/diag_nv.h"
#include "serial/qcdm_serial.h"


namespace Ui {
class QcdmWindow;
}

class QcdmWindow : public QMainWindow
{
	Q_OBJECT

public:
    explicit QcdmWindow(QWidget *parent = 0);
    ~QcdmWindow();

public slots:
    void UpdatePortList();
    void ConnectToPort();
    void DisconnectPort();
    void SecuritySendSpc();
	void SecuritySend16Password();
	void nvReadGetMeid();
	void nvReadGetImei();
	void nvReadGetSpc();
	void nvWriteSetSpc();
	void nvReadGetSubscription();
	void nvWriteSetSubscription();

	void decSpcTextChanged(QString value);

private:
	void log(int type, const char* message);
	void log(int type, std::string message);
    void log(int type, QString message);

    Ui::QcdmWindow *ui;
    openpst::QcdmSerial port;
    serial::PortInfo currentPort;

	int LOGTYPE_DEBUG = 0;
	int LOGTYPE_ERROR = -1;
	int LOGTYPE_INFO = 1;
	int LOGTYPE_WARNING = 2;

};

#endif // _GUI_QCDM_WINDOW_H
