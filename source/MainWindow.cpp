#include "MainWindow.h"
#include "CentralWidget.h"
#include <QDebug>
#include <QMessageBox>
#include <QMenuBar>
#include <QAction>
#include <cassert>

MainWindow::MainWindow()
{
	initialize();
	showFullScreen();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	setCentralWidget(new CentralWidget(this));
	createMenu();
}

void MainWindow::createMenu()
{
	createFileMenu();
	createHelpMenu();
	createEditMenu();
}

void MainWindow::createEditMenu()
{
}

void MainWindow::onFileExit()
{
	if (QMessageBox::question(this, tr("Capture"), tr("Are you sure to quit application")) == QMessageBox::Yes)
		close();
}

void MainWindow::createHelpMenu()
{
}

void MainWindow::createFileMenu()
{
	auto menu = menuBar()->addMenu(tr("&File"));
	auto action = menu->addAction(tr("E&xit"));
	assert(action);
	connect(action, &QAction::triggered, this, &MainWindow::onFileExit);
	//connect(action, SIGNAL(triggered()), this, SLOT(onFileExit()));
}
