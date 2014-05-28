#include <iostream>
#include <string.h>
using namespace std;
void reverse(char* s)
{
	int length  = strlen(s);
	char temp;
	int mid = length/2;
	for (int j = 0; j < mid; j++)
	{
		temp = s[j];
		s[j] = s[length - j - 1];
		s[length -j - 1] = temp;
	}
}

int main()
{
	char s[] = "abcdefg";
	reverse(s);
	cout << s << endl;
	return 0;
}