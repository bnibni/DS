#include <iostream>
#include <string.h>
using namespace std;
class CPerson
{
	char *name;
	int age;
public:
	CPerson(char *n, int a)
	{
		int length = strlen(n);
		name = new char[length + 1];
		strcpy(name, n);
		age = a;
	}
	~CPerson()
	{
		if(name != NULL)
			delete name;
	}
	char* getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}

};

class CStudent : public virtual CPerson
{
protected:
	long int classNum;
public:
	CStudent(char *n, int a, long int c) : CPerson(n, a)
	{
		classNum = c;
	}
};

class CEmployee : public virtual CPerson
{
protected:
	float wage;
public:
	CEmployee(char *n, int a, float w) : CPerson(n, a)
	{
		wage = w;
	}
};

class CSlideLine : public CStudent, public CEmployee
{
	public:
		CSlideLine(char *n, int a, long int c, float w) : CPerson(n, a), CStudent(n, a, c), CEmployee(n, a, w)
	    {}
		void print()
		{
			cout << "name " << getname() << endl;
			cout << "age " << getage() << endl;
			cout << "classnum " << classNum << endl;
			cout << "wage " << wage << endl;
		}
};

int main()
{
	CSlideLine a("lebron", 29, 8, 100);
	a.print();

}