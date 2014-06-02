#include <iostream>
using namespace std;
void BubbleSort(int a[], int length);
int main()
{
	int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	BubbleSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}

void BubbleSort(int a[], int length)
{
	int t;
	for (int i = 0; i < length - 1; i++)
		for (int j = 0; j < length - i -1; j++)
	    {
			if (a[j] < a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
	    }
}

