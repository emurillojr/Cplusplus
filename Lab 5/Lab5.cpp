/* Ernesto Murillo Lab 5

Variables used:
coupons = # of total coupons
candybar = 10 coupons = cost of candybar
gumball = 3 coupons = cost of gumball
remainder = # of remaining coupons after first buying canybar(s), also then after buying gumball(s)
couponsleft = # of coupons left over after buying canybar(s) and gumball(s)
*/


#include<iostream>
using namespace std;

void main()

{
	int coupons, candybar, gumball, remainder, couponsleft;
	cout << "Please enter the total number of coupons won: ";
	cin >> coupons;
	candybar = coupons / 10;
	cout << "Number of candy bars: " << candybar << endl;
	remainder = coupons % 10;
	gumball = remainder / 3;
	cout << "Number of gumballs: " << gumball << endl;
	couponsleft = remainder % 3;
	cout << "Number of coupons left over: " << couponsleft << endl;
	system("pause");
}
