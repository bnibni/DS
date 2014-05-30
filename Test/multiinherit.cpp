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
		cout << "circle�Ĺ��캯��" << endl;
	}
	~CCircle()
	{
		cout << "circle����������" << endl;
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
		cout << "table�Ĺ��캯��" << endl;
	}
	~CTable()
	{
		cout << "table����������" << endl;
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
		cout << "CRT���캯��" << endl;
	}
	int Color()
	{
		return color;
	}
	~CRoundTable()
	{
		cout << "CRT����������" << endl;
	}
};

int main()
{
	CRoundTable c(2, 2, 3);
	cout << "the area of CRT is " << c.area() << endl;
	cout << "the height of CRT is " << c.Height() << endl;
	cout << "the color of CRT is " << c.Color() << endl;
}