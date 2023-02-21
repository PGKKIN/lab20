#include <iostream>

using namespace std;
struct Rect
{
    double x,y,w,h;
};

double overlap(Rect r1,Rect r2)
{
    double x1;
    double x2;
    double y1;
    double y2;
     
    x1 = r1.x+r1.w;
    x2 = r2.x+r2.w;
    y1 = r1.y-r1.h;
    y2 = r2.y-r2.h;
    double right = min(x1,x2);
    double left = max(r1.x,r2.x);
    double up = min(r1.y,r2.y);
    double down = max(y1,y2);
    double total = ((right-left)*(up-down));
    if (total> 0)
	{
		return total;
	}
	else
	{
		return 0;
	}
}

