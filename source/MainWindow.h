#ifndef __mainwindow__h
#define __mainwindow__h

#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT
	public:
		MainWindow();
		~MainWindow();
	private:
		void initialize();
};
#endif//__mainwindow__h
