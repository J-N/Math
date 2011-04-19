#include "line.h"
#include <math.h>
#include <cmath>
class segment : public line{
public:	
segment(unsigned long d) : line(d)
{ 
}
segment(point a, point b) : line(a,b)
{ 
}
double length(void)
{
	double sum=0;
	unsigned int i=1;
	for(i=1;i<=dimensions;i++)
	{
		sum+=pow((two.get_dim(i)-one.get_dim(i)),2);
	}
	
	return sqrt(sum);
}
private: 
};

