/* Ernesto Murillo - loop example using while 
number count between two numbers

Variable definitions:
fnum = first number
snum = 2nd number
*/

#include<iostream>
using namespace std;

int main()
{

	int fnum, snum;
	snum =1;
	cout<<"This program will list all the numbers in between the numbers"<<endl; 
	cout<<"you enter from greatest to lowest."<<endl;
	cout <<endl;

	cout<<"Input the higher whole number: ";
	cin>>snum;
	cout<<endl;

	cout<<"Input lower whole number: ";
	cin>>fnum;
	cout<<endl;


	while (fnum <= snum)
		{ cout<< snum << " ";
		snum = snum - 1;
		}

	system("pause");
	return 0;

}