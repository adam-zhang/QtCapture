#ifndef __dataset__h
#define __dataset__h

#include <QTableView>
#include <memory>

class Package;

typedef std::shared_ptr<Package> PackagePointer;

class DataSet : public QTableView 
{
	public:
		DataSet(QWidget* parent = NULL);
	private:
		void initialize();
		QAbstractItemModel* createModel();
	public:
		void addData(const PackagePointer& p);

};
#endif//__dataset__h
