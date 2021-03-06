/**
* LICENSE PLACEHOLDER
*
* @file send_raw_window.h
* @class SendRawWindow
* @package OpenPST
* @brief Send raw read/write GUI interface class definitions
*
* @author Gassan Idriss <ghassani@gmail.com>
*/

#ifndef _GUI_SEND_RAW_WINDOW_H
#define _GUI_SEND_RAW_WINDOW_H

#include <QMainWindow>
#include "ui_send_raw_window.h"

namespace Ui {
class SendRawWindow;
}

namespace openpst{
	class SendRawWindow : public QMainWindow
	{
		Q_OBJECT

		public:
			explicit SendRawWindow(QWidget *parent = 0);
			~SendRawWindow();

		private:
			Ui::SendRawWindow *ui;
		};
}
#endif // _GUI_SEND_RAW_WINDOW_H
