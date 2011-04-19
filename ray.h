#include "line.h"
class ray : public line{
public:	
ray()
{
}
ray(unsigned long d) : line(d)
{ 
}
ray(point a, point b) : line(a,b)
{ 
}
private: 
};

