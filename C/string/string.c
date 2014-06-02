#include<stdio.h>
int main()
{
	char c[10];
	char a;
	int i;
	gets(c);
	for(i = 0;(a = c[i]) != '\0'; i++)
		printf("%c\n", c[i]);
}