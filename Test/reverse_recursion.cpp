#include <iostream>
using namespace std;
void reverse(int a[], int low, int high);
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	reverse(a, 0, 9);
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;
}
void reverse(int a[], int low, int high)
{
	int t;
	if (low < high)
	{
		t = a[low];
		a[low] = a[high];
		a[high] = t;
		reverse(a, low + 1, high -1);
	}
	
}