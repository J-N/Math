#include "point.h"
class line{
public:	
line();
line(unsigned long d);
line(point a, point b);
unsigned long dim(void);
protected:
	point one;
	point two;
	unsigned long dimensions;
};

line::line()
{
}

line::line(unsigned long d)
{ 
	one = point(d);
	two = point(d);
	dimensions = d;
}

line::line(point a, point b)
{ 
	if(a.dim()==b.dim())
	{
		one = a;
		two = b;
		dimensions=a.dim();
	}
	else
	{
		cout<<"Points Dimension mismatch"<<endl;
	}
}
unsigned long line::dim(void)
{
	return dimensions; 
}
