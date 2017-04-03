/* Ernesto Murillo - Number squared cubed program

Variables used:
num = number

*/

#include <iostream>
using namespace std;

int main ()
{
	double num;
	cout <<"Please enter number and press ENTER: ";
	cin >>num;
	cout << endl;
	cout <<"The square of "<<num<<" is "<<num*num<<endl;
	cout << endl;
	cout <<"The cube of "<<num<<" is "<<num*num*num<<endl;
	cout << endl;
	system("pause");
	return 0;
}