// Ernesto Murillo Lab 2 with While Loop

#include<iostream> 
#include<math.h> 
#include<string>
using namespace std;

void main() 
{
	double amount, principal, rate, time; 
	int anyMoreData, bankNo; anyMoreData = 1; bankNo = 0;

	while(anyMoreData == 1) 
	{ 
		cout << "Enter principal ";
		cin >> principal;
		cout << "Enter rate as a decimal (Example 30% = .30) "; cin >> rate;
		cout << "How many times will the principal be compounded (1, 2, or 4) ";
		cin >> time; 
		amount = principal * pow(1 + rate/time, time); 
		bankNo = bankNo + 1; 
		cout << "Amount of money you will have in bank #" << bankNo << " is $" << amount << endl;
		cout << endl << endl; 
		cout << "Do you want to enter any more data (Press 1 to continue or 0 to exit) ";
		cin >> anyMoreData;
	} 
	system("pause");
}