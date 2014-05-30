#include <iostream>
using namespace std;
int main()
{
	cout << "long int: " << sizeof(long int) << " Bytes " << 8*(sizeof (long int)) << "bit" << endl;
	cout << "int: " << sizeof(int) << " Bytes " << 8*(sizeof (int)) << "bit" << endl;
	cout << "char: " << sizeof(char) << " Bytes " << 8*(sizeof (char)) << "bit" << endl;
	cout << "bool: " << sizeof(bool) << " Bytes " << 8*(sizeof (bool)) << "bit" << endl;
	cout << "float: " << sizeof(float) << " Bytes " << 8*(sizeof (float)) << "bit" << endl;
	cout << "double: " << sizeof(double) << " Bytes " << 8*(sizeof (double)) << "bit" << endl;
	cout << "long double: " << sizeof(long double) << " Bytes " << 8*(sizeof (long double)) << "bit" << endl;
}
