// Ernesto Murillo - divide by 7 yes or no

#include<iostream>
using namespace std;

int main()
{

	int number;

	cout<<"Please enter the whole number and press ENTER: ";
	cin>>number;
	cout <<endl;


	if (number % 7 == 0)
	cout<<"The number can be divided evenly by seven and has a remainder of zero.";

	else
	cout<<"The number can not be divided evenly by seven.";
	cout<< endl;
	cout<< endl;

	system("pause");
	return 0;
}