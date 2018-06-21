#include "CentralWidget.h"
#include <QSplitter>
#include <QHBoxLayout>
#include <cassert>
#include "DataSet.h"
#include <QTextEdit>
#include "DataItemControl.h"

CentralWidget::CentralWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

CentralWidget::~CentralWidget()
{
}

void CentralWidget::initialize()
{
	auto layout = new QHBoxLayout(this);
	layout->addWidget(createSplitter());
}

QSplitter* CentralWidget::createSplitter()
{
	auto splitter = new QSplitter;
	assert(splitter);
	splitter->addWidget(new DataSet);
	splitter->addWidget(new DataItemControl);
	return splitter;
}
