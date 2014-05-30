#include <iostream>
using namespace std;

class CCircle
{
private:
	float radius;
public:
	CCircle(float r)
	{
		radius = r;
		cout << "circle的构造函数" << endl;
	}
	~CCircle()
	{
		cout << "circle的析构函数" << endl;
	}
	float area()
	{
		return radius*radius*3.14;
	}
};

class CTable
{
	float height;
public:
	CTable(float h)
	{
		height = h;
		cout << "table的构造函数" << endl;
	}
	~CTable()
	{
		cout << "table的析构函数" << endl;
	}
	float Height()
	{
		return height;
	}

};

class CRoundTable : public CCircle, public CTable
{
	int color;
public:
	CRoundTable(float r, float h, float c) :CCircle(r),CTable(h)
	{
		color = c;
		cout << "CRT构造函数" << endl;
	}
	int Color()
	{
		return color;
	}
	~CRoundTable()
	{
		cout << "CRT的析构函数" << endl;
	}
};

int main()
{
	CRoundTable c(2, 2, 3);
	cout << "the area of CRT is " << c.area() << endl;
	cout << "the height of CRT is " << c.Height() << endl;
	cout << "the color of CRT is " << c.Color() << endl;
}