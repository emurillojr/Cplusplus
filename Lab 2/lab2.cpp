// Ernesto Murillo Lab 2

#include<iostream>
using namespace std;

void main()
{
	double costofitem, margin, sellprice;
	cout <<"Enter Cost: ";
	cin >> costofitem;
	cout <<"Enter Margin: ";
	cin >> margin;
	sellprice=( 1 / (1 - (margin / 100))) * costofitem;
	cout <<"Sell Price is: " <<sellprice<< endl;
	system("pause");
}