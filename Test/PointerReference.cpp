#include <iostream>
using namespace std;

void func(int &a)
{
	a++;
}

void func(int *a)
{
	(*a)++;
}

int main()
{
	int a = 5;
	cout << "original a = " << a << endl;
	func(a);
	cout << "after the function the value of a is " << a <<endl;
	func(&a);
	cout << "after the function the value of a is " << a << endl;
}