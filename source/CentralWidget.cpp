#include "CentralWidget.h"
#include <QSplitter>
#include <QHBoxLayout>
#include <cassert>
#include "DataSet.h"
//#include "DetailControl.h"

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
	splitter->addWidget(new DataSet(splitter));
	splitter->addWidget(new DetailControl);
	return splitter;
}
