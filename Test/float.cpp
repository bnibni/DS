//将unsigned的输出为二进制数.
//首先经unsigned int 转换为二进制，然后通过结构体将浮点数用之前整形的方式打印
#include <iostream>
using namespace std;
void PrintUnsigned(unsigned int num);
void PrintFloat(float num);
int main()
{
	float f = 5.67;
	PrintFloat(f);
}

void PrintUnsigned(unsigned int num)
{
	unsigned int i = 0x80000000;//注意这个地方也是unsigned int类型不然第一位是符号位
	while(i)
	{
		cout << ((i&num)>0?1:0);
		i >>= 1;
	}
}

void PrintFloat(float num)
{
	union
	{
		float f;
		unsigned int i;
	}fi={num};//住这个地方有“=”
	PrintUnsigned(fi.i);
}