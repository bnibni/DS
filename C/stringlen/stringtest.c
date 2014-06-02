#include<stdio.h>
void main()
{
	char* c = "China";
	int a;
	int b;
	a = strlen(c);
	*c++;
	b = strlen(c);
	printf("%d\n", a);
	printf("%d\n", b);
}
