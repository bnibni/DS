#include<stdio.h>
void sort(int a[])
{
	int i;
	int j;
	int t;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9-i; j++)
		{
			if(a[j+1] < a[j])
			{
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
}

int max(int a, int b)
{
	if(a > b)
		return a;
	else 
		return b;
}


int main()
{
	int a[10];
	int even[10] = {0};
	int odd[10] = {0};
	int i, j = 0, k = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a);
	for(i = 0; i < 10; i++)
	{
		if(a[i]%2 != 0)
			odd[j++] = a[i];
		else
			even[k++] = a[i];
	}
	if(j-1 > k-1)
		for(i = k; i <= j-k; i++)
			even[i] = 0;
	else
		for(i = j; i < k- j; i++)
			odd[i] = 0;
	if((odd[0] < even[0]) && j > k)
		{
			for(i = 0; i < j-1; i++)
			{
				printf("%d ", odd[i]);
				printf("%d ", even[i]);
			}
			printf("%d ", odd[j-1]);
		}
	if((odd[0] > even[0]) && j > k)
		for(i = 0; i < j; i++)
		{
			printf("%d ", odd[i]);
			printf("%d ", even[i]);
		}
	if((odd[0] < even[0]) && j < k)
		for(i = 0; i < k; i++)
		{
			printf("%d ", even[i]);
			printf("%d ", odd[i]);
		}
	if((odd[0] > even[0]) && j < k)
		{
			for(i = 0; i < k-1; i++)
			{
				printf("%d ", even[i]);
				printf("%d ", odd[i]);
			}
				printf("%d ", even[k-1]);
		}
}