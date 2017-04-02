// Ernesto Murillo

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
	string name = "";
	float existSalary = 0.0;
	float newSalary = 0.0;
	float raiseRate = 0.0;

	//enter input items
	cout<<"Please Enter Name: ";
	getline(cin,name);
	cout<<"Enter Current Salary: ";
	cin>>existSalary;
	cout<<"Enter Raise Rate: ";
	cin>>raiseRate;

	//calculations
	newSalary=existSalary * (1+raiseRate);

	// display
	cout<<name<<"'s new salary is $"<<newSalary<<endl;
	system("pause");
}
