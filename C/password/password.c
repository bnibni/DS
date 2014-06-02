#include<stdio.h>
int password_score(char password[])
{
	int length, i;
	int score = 0, low = 0, high = 0, character = 0, number = 0;
	int temp;
	length = strlen(password);
	for(i = 0; i < length; i++)
	{
		if('a' <= password[i] && password[i] <= 'z')
			low++;
		else if('A' <= password[i] && password[i] <= 'Z')
			high++;
		else if('0' <= password[i] && password[i] <= '9')
			number++;
		else if((33 <= password[i] && password[i] <= 47) || (58 <= password[i] && password[i] <= 64) || (91 <= password[i] && password[i] <= 96) || (123 <= password[i] && password[i] <= 126) )
			character++;

	}
	//计算密码的长度
	if(length <= 4)
		temp  = 5;
	else if(length >= 5 && length <= 7)
		temp = 10;
	else if(length >= 8)
		temp = 25;
	score += temp;
	//统计字母
	if(high == 0 && low == 0)
		temp = 0;
	else if(high == 0 && low != 0 ||high != 0 && low == 0)
		temp = 10;
	else if(high != 0 && low != 0)
		temp = 20;
	score += temp;
	//统计数字
	if(number == 0)
		temp = 0;
	else if(number == 1)
		temp = 10;
	else if(number >= 3)
		temp = 20;
	score += temp;
	//统计符号
	if(character == 0)
		temp = 0;
	else if(character == 1)
		temp = 10;
	else if(character > 1)
		temp = 25;
	score += temp;
    //混合加成
	if((high != 0 || low != 0) && number != 0)
		temp = 2;
	if((high != 0 || low != 0) && number != 0 && character != 0)
		temp = 3;
	if(high != 0 && low != 0 && number != 0 && character != 0)
		temp = 5;
	score += temp;
	printf("low=%d\n", low);
	printf("high=%d\n", high);
	printf("number=%d\n", number);
	printf("character=%d\n", character);
	printf("length=%d\n", length);
	return score;
}

int main()
{
	int score = 0;
	char password[100] = {0};
	gets(password);
	score = password_score(password);
	printf("%d", score);
}