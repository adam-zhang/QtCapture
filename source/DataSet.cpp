#include "DataSet.h"
#include <QHeaderView>
#include <QStandardItemModel>

DataSet::DataSet(QWidget* parent)
	: QTableView(parent)
{
	initialize();
}

void DataSet::initialize()
{
	setEditTriggers(NoEditTriggers);
	setShowGrid(true);
	verticalHeader()->setVisible(true);
	setModel(createModel());
}

QAbstractItemModel* DataSet::createModel()
{
	auto model = new QStandardItemModel;
	model->setColumnCount(3);
	model->setHeaderData(0, Qt::Horizontal, "Serial");
	model->setHeaderData(1, Qt::Horizontal, "Time");
	model->setHeaderData(2, Qt::Horizontal, "Data");
	setModel(model);
	return model;
}

void DataSet::addData(const PackagePointer& p)
{
}
