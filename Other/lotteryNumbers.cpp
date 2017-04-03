// Ernesto Murillo - lottery numbers 

#include<iostream>
#include<time.h>
using namespace std;

int randomdigit()
{
	int digit;
	digit = rand() % 10;
	return digit;
}

void main()

{
	srand(time(NULL));
	int digit1, digit2, digit3, digit4, digit5;
	
		digit1 = rand() % 10;
		digit2 = rand() % 10;
		digit3 = rand() % 10;
		digit4 = rand() % 10;
		digit5 = rand() % 10;
	
	cout << "The winning number is " << digit1 << digit2 << digit3 << digit4 << digit5 << endl;

	cout <<endl;

	system("pause");
}
