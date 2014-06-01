#include <iostream>
using namespace std;
int division(int, int);
int main()
{
	int a = 108;
	int b = 84;
	cout << division(a, b) << endl;
}

int division(int a, int b)
{
	int t;
	if(a < b)
	{   t = a;
		a = b;
		b = t;
	}
	if (a%b==0)
		return b;
	else 
	{while(b)
		{
			t = a%b;
			a = b;
			b = t;
		}
	return a;
	}
}