// Ernesto Murillo - teenager

#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	if (n > 12 && n < 20)
	{
		cout << "The person is a teenager." << endl;
	}
	else
	{
		cout << "This person is not a teenager." << endl;
	}
	system("pause");
	return 0;
}