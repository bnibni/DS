#include<stdio.h>
/*void sort(int a[])
{
	int i;
	int j;
	int t;
	for(i = 0; i < 9; i++)
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

int zeros(int a[])
{
	int i, j, m = 0;
    for(i=0; i < 10 + m; i++)
		if((a[i]%2 == 0 && i%2 == 0)||(a[i]%2 != 0 && i%2 != 0))
		{
			for(j = 10 + m; j > i; j++)
			{
				a[j + 1] = a[j];
			}
			a[i] = 0;
			m++;
		}
	return m;
}*/

void main()
{
	int i;
	int a[10] ;
    //int m;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", a[i]);
	}
	//sort(a);
	//m = zeros(a);
	//for(i = 0; i < 10; i++)
	//	printf("%d", a[i]);
}