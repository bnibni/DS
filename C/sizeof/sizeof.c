#include<stdio.h>
void main()
{
	char a[10] = "zhang";
	int i;
	for(i = 0; a[i] != '\0'; i++)
	{
		printf("%c\n", a[i]);
	}
}
