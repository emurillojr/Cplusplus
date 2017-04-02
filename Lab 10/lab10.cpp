/* Ernesto Murillo Lab 10

Variables used:
number = number entered by user
sum = total of all intergers

*/

#include<iostream>
using namespace std;
 
int main()
{
	int number;
	int sum = 0;
	cout << "This program will sum all the numbers from 1 to the number you enter." <<endl;
	cout << "Enter ending number: ";
	cin >> number;
	
	for (int x = 1; x <= number; x++)
	{ 
		sum += x;
	}  
 
	cout << "Sum of digits in numbers from 1 to " << number << " is " << sum <<endl;
  
	system("pause");
}
