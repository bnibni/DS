#include <iostream>
using namespace std;
class Ctime
{
	int day;
	int hour;
	int minute;
	int second;
public:
	void settime(int d, int h, int m, int s)
	{
		day = d;
		hour = h;
		minute = m;
		second = s;
	}
	void showtime()
	{
		cout << "the time now is "<< day << "-" << hour << "-" << minute << "-"<< second << endl;
	}
};

int main()
{
	Ctime t;
	t.settime(2014,15,41,50);
	t.showtime();
}