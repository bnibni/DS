#include <stdio.h>
#include <string.h>

char* strstr(char *s1, char *s2)
{
	int len2 = strlen(s2);
	for(;*s1;s1++)
	{
		if(strncmp(s1, s2, len2)==0)
			return s1;
	}
	return NULL;
}

int main()
{
	char s1[] = "zhanghang";
	char s2[] = "hang";
	char *a = strstr(s1, s2);
	printf("%s\n", a);
	return 0;
}