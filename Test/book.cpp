#include <iostream>
#include <string.h>
using namespace std;

class CBook
{
	int price;
	int count;
	long totalNum;
	char *name;
public:
	CBook();
	~CBook();
	CBook(char *n, int c, int p);
	void computeTotal();
	void bookDetailInf();
};

CBook::CBook(char *n, int c, int p)//ע�����ⶨ��Ա����Ӧ��������::
{
	int length = strlen(n);
	name = new char[length + 1];
	strcpy(name, n);
	count = c;
	price = p;
}

CBook::~CBook()
{
	if(*name != NULL)
		delete name;
}

void CBook::computeTotal()
{
	totalNum = price * count;
}

void CBook::bookDetailInf()
{
	cout << "price = " << price << endl;
	cout << "count = " << count << endl;
	cout << "total price = " << totalNum << endl;
	cout << "the name of book is " << name << endl;
}


int main()
{
	CBook book("���ݽṹ", 5, 5);
	book.computeTotal();
	book.bookDetailInf();
}