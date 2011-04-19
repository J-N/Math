using namespace std;
#include <iostream>
#include "angle.h"

int main()
{
	point a(2);
	point b(2);

	a.set_dim(1,0);
	a.set_dim(2,0);
	
	b.set_dim(1,7);
	b.set_dim(2,24);
	
	ray myseg(a,b);
	
	
	return 0;
}
