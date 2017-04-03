/* Ernesto Murillo - Even or Odd divide by 2 Program

Variable definitions:
number = number

*/

#include<iostream>
using namespace std;

int main()
{

	int number;

	cout<<"Please enter the whole number and press ENTER: ";
	cin>>number;
	cout << endl;


	if (number % 2 == 0)
	cout<<"The number is EVEN.";

	else
	cout<<"The number is ODD.";
	cout<< endl;
	cout<< endl;

	system("pause");
	return 0;

}