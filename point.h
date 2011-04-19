#include <vector>

class point{
public:	
point();
point(unsigned long);
double get_dim(unsigned long);
void set_dim(unsigned long, double);
unsigned long dim(void)
	{return dimensions; }

protected: unsigned long dimensions;
	vector<double> dimension;
};
point::point()
{
}
point::point(unsigned long d)
{
	dimensions=d;
	dimension= vector<double>(d);
}
double point::get_dim(unsigned long dim)
{
	return dimension.at(dim-1);
}
void point::set_dim(unsigned long dim, double value)
{
	if(dim <= dimensions)
	{
		dimension.at(dim-1)=value;
	}
	else
	{
		cout<<"Dimensions out of bounds"<<endl;
	}
}
