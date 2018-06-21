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
		void createMenu();
		void createFileMenu();
		void createHelpMenu();
		void createEditMenu();
	private slots:
		void onFileExit();
};
#endif//__mainwindow__h
