#ifndef __package__h
#define __package__h

#include <QString>
#include <QDateTime>
#include <memory>

class Package
{
	public:
	       Package()
		       : serial_(0)
			 , timeStamp_(QDateTime::currentDateTime())
	       {
	       }
	       ~Package();
	private:
		size_t serial_;
		QDateTime timeStamp_;
		QByteArray data_;
	public:
		size_t serial()
		{ return serial_;}
		void setSerial(size_t value)
		{ serial_ = value;}
		const QDateTime& timeStamp()const
		{ return timeStamp_;}
		void setTimeStamp(const QDateTime& value)
		{ timeStamp_ = value;}
		void setData(const QByteArray& value)
		{ data_ = value;}
		const QByteArray data()const
		{ return data_;}
};

typedef std::shared_ptr<Package> PackagePointer;
#endif//__package__h
