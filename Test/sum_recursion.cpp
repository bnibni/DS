#include <iostream>
using namespace std;
int sum(int a[], int n);
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << sum(a, 10) << endl;	
}

int sum(int a[], int n)
{
	return (n < 1) ? 0 : sum(a, n-1) + a[n-1]; 
}