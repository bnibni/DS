#include <iostream>
#include <string.h>
using namespace std;


class Employee
{
protected:
	int Id;
	char *name;
public:
	Employee(char *aName, int i)
	{
		int length = strlen(aName);
		name = new char[length + 1];
		strcpy(name, aName);
		Id = i;
	}
	char* getName()
	{
		return name;
	}
	~Employee()
	{
		delete name;
	}
	void Disp()
	{
		cout << "name = " << name << endl;
		cout << "Id = " << Id << endl;
		cout << "earning = " << earning() << endl;
	}
	virtual double earning()
	{
		return 0;
	}
};

class Boss : public Employee
{
int car;
public:
	Boss(char *aName, int i, int c) : Employee(aName, i)
	{
		car = c;
	}
	double earning()
	{
		return 8000;
	}
	void printcar()
	{
		cout << "car = " <<car << endl;
	}
	
};

class HourlyWorker : public Employee
{
	int hours;
public:
	HourlyWorker(char *aName, int i, int h) : Employee(aName, i)
	{
		hours = h;
	}
	double earning()
	{
		return hours*100;
	}
};


int main()
{
	Employee a("li", 123);
	Boss b("Ma", 111, 1);
	HourlyWorker c("Jiang", 100, 10);
	Employee *ptr = &c;
	cout << ptr->earning() << endl;
}