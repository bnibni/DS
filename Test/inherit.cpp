#include <iostream>
using namespace std;
class Cfigure
{
public:
	double height;
	double width;
};

class Csquare : public Cfigure
{
public:
	double area()
	{
		return height*width;
	}
};

class CTringle : public Cfigure
{
public:
	double area()
	{
		return height*width/2;
	}
};

int main()
{
	Csquare s;
	s.width = 10;
	s.height = 10;
	cout << "the area of square is " << s.area() << endl;
	CTringle t;
	t.width  = 10;
	t.height = 10;
	cout << "the area of tringle is " << t.area() << endl;
}