// Ernesto Murillo  - number of miles traveled

#include<iostream>
using namespace std;

void main ()
{
	double distance, rate, time;
	cout << "Please enter the miles per hour: ";
	cin >> rate;
	cout << "Please enter the travel time: ";
	cin >> time;
	distance = rate * time;
	cout << " You traveled: " <<distance << " miles." << endl;
	system("pause");
	
}