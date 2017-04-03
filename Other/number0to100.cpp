// Ernesto Murillo - between 0 to 100

#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter a number and press ENTER: ";
	cin >> n;
	if (n >= 0 && n <= 100)
	{
		cout << "This number is between 0 - 100." << endl;
	}
	else
	{
		cout << "This number is not between 0 - 100." << endl;
	}

	system("pause");
	return 0;
}