#include "MainWindow.h"
#include "CentralWidget.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow()
{
	initialize();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	setCentralWidget(new CentralWidget(this));
}
