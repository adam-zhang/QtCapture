#ifndef __dataset__h
#define __dataset__h

#include <QWidget>

class DetailControl: public  QWidget
{
	public:
		DetailControl( QWidget* parent = NULL);
		~DetailControl();
	private:
		void initialize();
};
#endif//__dataset__h
