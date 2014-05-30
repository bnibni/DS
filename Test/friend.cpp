#include <iostream>
#include <math.h>
using namespace std;
class Cpoint
{
	int x;
	int y;
public:
	Cpoint(int i, int j)
	{
		x = i;
		y = j;
	}
	friend double getdistance(Cpoint a, Cpoint b)
	{
		return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	}
};

int main()
{
	Cpoint a(1,1);
	Cpoint b(4,5);
	cout << getdistance(a,b) << endl;
}