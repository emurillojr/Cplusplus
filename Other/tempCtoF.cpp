/* Ernesto Murillo - Convert Celsius temperature to Fahrenheit Program

Variable definitions:

ctemp = Celsius temperature
ftemp = Fahrenheit temperature
*/

#include<iostream>
using namespace std;

double ctemp, ftemp;

int main()
{
	cout <<"Please enter the Celsius temperature and press ENTER: ";
	cin >> ctemp;
	ftemp = (ctemp * 1.8) + 32;
	cout <<endl;
	cout <<"The Fahrenheit temperature is "<< ftemp << endl;
	cout << endl;
	system("pause");
	return 0;
}


