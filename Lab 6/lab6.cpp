/* Ernesto Murillo Lab 6

Variables used:
begbal = starting deposit and for loop new beg balance
interestrate = interest rate
dep = monthly deposit amount
years  = total years depositing or toal years used
monthint = begbal + dep * interestrate / 12
endbal = begbal + dep + monthint
months = years /12 = total months
bal = true beginning balance

*/

#include<iostream>
using namespace std;

void main()
{
	double begbal, interestrate, dep, years, monthint, endbal, months, nomonths, bal;

	cout << "Enter beginning balance.................$ ";
	cin >> begbal;

	cout << "Enter yearly interest rate ( 5= 5% )....: ";
	cin >> interestrate;

	cout << "Enter monthly deposit amount............$ ";
	cin >> dep;

	cout << "Enter number of years...................: ";
	cin >> years;

	bal = begbal;
	interestrate = interestrate / 100;
	months = years * 12;

	nomonths = 1;

	while (nomonths <= months)
	{
		monthint = begbal * interestrate / 12;
		endbal = begbal + monthint + dep;
		begbal = endbal;
		nomonths++;
	}

	cout << endl;
	cout << endl;
	cout <<"With a beginning balance of $"<<(bal)<<" and a monthly deposit of $"<<(dep)<<" for "<<(years)<<" years"<< endl;
	cout << "along with an intereste rate of " <<(interestrate*100)<<"%, " << "your ending balance will be $" << (endbal) << endl;
	system("pause");
}
