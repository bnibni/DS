//��unsigned�����Ϊ��������.
//���Ⱦ�unsigned int ת��Ϊ�����ƣ�Ȼ��ͨ���ṹ�彫��������֮ǰ���εķ�ʽ��ӡ
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
	unsigned int i = 0x80000000;//ע������ط�Ҳ��unsigned int���Ͳ�Ȼ��һλ�Ƿ���λ
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
	}fi={num};//ס����ط��С�=��
	PrintUnsigned(fi.i);
}