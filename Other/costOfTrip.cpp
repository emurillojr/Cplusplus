// Ernesto Murillo

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
	string Destination = "";
	int distance = 0;
	float milespergallon = 0.0;
	float pricepergallon = 0.0;
	float costoftrip = 0.0;

	//enter input items
	cout<<"Enter Destination Name: ";
	getline(cin,Destination);
	cout<<"Enter Distance==================> ";
	cin>>distance;
	cout<<"Enter Miles per gallon==========> ";
	cin>>milespergallon;
	cout<<"Enter Price per gallon==========> ";
	cin>>pricepergallon;

	//calculations
	costoftrip= (distance / milespergallon) * pricepergallon;

	//display
	cout<<Destination<<" trip will cost a total of $"<<costoftrip<<endl;

	system("pause");
}
