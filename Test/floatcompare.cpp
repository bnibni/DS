#include <iostream>
using namespace std;
float FloatCompare(float a, float b, float c);
int main()
{
	float a, b, c;
	a = 5.1;
	b = 4.0;
	c = 1.0;
	cout << FloatCompare(a, b, c) << endl;
}

float FloatCompare(float a, float b, float c)
{
	if(a >= b && a >= c)
		return a;
	else if(b >= a && b >= c)
		return b;
	else
		return c;
}