/* Ernesto Murillo - Convert Fahrenheit to Celsius temperature using one variable Program

Variable definitions:
ftemp = Fahrenheit temperature
*/

#include<iostream>
using namespace std;

double ftemp;

int main()
{
	cout <<"Please enter the Fahrenheit temperature and press ENTER: ";
	cin >> ftemp;
	cout <<endl;
	ftemp = (ftemp-32) / 1.8;
	cout <<"The Celsius temperature is "<<ftemp<<endl;
	cout << endl;
	system("pause");
	return 0;
}
