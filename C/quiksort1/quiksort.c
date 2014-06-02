#include<stdio.h>
int getmid(int a[], int l, int h)
{
	int i, j;
	int first;
	i = l;
	j = h;
	first = a[l];
	while(i < j)
	{while(a[j]>a[0]&&j>i)
		j--;
	a[0] = a[j];
	while(a[i]<a[0]&&i<j)
		i++;
	a[j] = a[i];}
	a[i] = first;
	return i;
}

void quiksort(int a[], int l, int h)
{
	if(l < h){
	int k = getmid(a, l, h);
	quiksort(a, l, k-1);
	quiksort(a, k+1, h);
	}
}

int main()
{
	int a[10];
	int i;
	for(i = 0; i < 10;i++)
		scanf("%d", &a[i]);
	quiksort(a, 0, 9);
	for(i = 0; i < 10;i++)
		printf("%d", a[i]);
}