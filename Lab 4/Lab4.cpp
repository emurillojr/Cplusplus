/* Ernesto Murillo Lab 4
   Calculate change amount
   Variables used:
   cost = cost of item $
   paid = amount paid from customer $
   change = paid - cost = change to customer $
*/

#include <iostream>;
using namespace std;

void main ()
{
	double cost, paid, change; 
	cout <<"Enter cost amount of item $";
	cin >> cost;  
	cout <<endl;
	cout <<"Enter amount paid by customer $";
	cin >> paid;
	cout <<endl;
	change = paid - cost;
	cout <<"The customer's change is $"<<change<<endl;
	system("pause");
}
