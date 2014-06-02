#include<stdio.h>
void main()
{
	int i,j;
	char s[10] = "zhanghang";
	char t[5] = "zhang";
	while(i < strlen(s) && j < strlen(t))
	{
		if(s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}

	}
	if(j >= strlen(t))
		printf("%d",  i - j +1);
	else
		printf("-1");
}