#include "ray.h"
class angle{
public:	
angle();
angle(unsigned long d);
angle(ray a, ray b);

protected:
	ray one;
	ray two;
	unsigned long dimensions;
};

angle::angle()
{
}

angle::angle(unsigned long d)
{ 
	one = ray(d);
	two = ray(d);
	dimensions = d;
}

angle::angle(ray a, ray b)
{ 
	if(a.dim()==b.dim())
	{
		//add check that a.one = b.one
		one = a;
		two = b;
		dimensions=a.dim();
	}
	else
	{
		cout<<"Ray dimension mismatch"<<endl;
	}
}
