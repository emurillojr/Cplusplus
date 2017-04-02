/* Ernesto Murillo Lab 3
   Advertisements of 3 local banks
   Variables used:
   principal = investment amount $
   b1rate = bank 1 interest rate =3.875%
   b2rate = bank 2 interest rate =3.75%
   b3rate = bank 3 interest rate =3.625%
   t= counpounded amount 1, 2, or 4
   amountb1 = investment + compounded for bank1
   amountb2 = investment + compounded for bank2
   amountb3 = investment + compounded for bank3
*/

#include<iostream>
#include<math.h>
using namespace std;

void main ()
{
	double principal, b1rate, b2rate, b3rate, amountb1, amountb2, amountb3, t;
	b1rate = .03875;
	b2rate = .0375;	
	b3rate = .03625;
	cout <<"Enter Investment Amount: ";
	cin >> principal;  
	cout <<"Enter compounded amount (1, 2, 4): ";
	cin >> t;
	amountb1 = principal * pow(1 +b1rate/t,t);
	amountb2 = principal * pow(1 +b2rate/t,t);
	amountb3 = principal * pow(1 +b3rate/t,t);
	cout <<"Bank 1's compounded amount is: "<<amountb1<< endl;  
	cout << endl;
	cout <<"Bank 2's compounded amount is: "<<amountb2<< endl;
	cout << endl;
	cout <<"Bank 3's compounded amount is: "<<amountb3<< endl;
	cout << endl;
	system("pause");
}
