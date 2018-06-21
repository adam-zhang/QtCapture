#ifndef __centralwidget__h
#define __centralwidget__h

#include <QWidget>

class QSplitter;

class CentralWidget : public QWidget
{
	Q_OBJECT
	public:
		CentralWidget(QWidget*);
		~CentralWidget();
	private:
		void initialize();
		QSplitter* createSplitter();

};

#endif//__centralwidget__h
