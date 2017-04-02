/* Ernesto Murillo Lab 7

Variables used:
number = # of people attending meeting
roomcap = room capacity

*/

#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	double number, roomcap;

		cout << "This program determines whether a meeting room is in " << endl;
		cout << "violation of Fire Regulations regarding maximum room capacity limits." << endl;
		cout << endl;

		cout << "Enter the room capacity : ";
		cin >> roomcap;
		cout << endl;
		
		cout << "Enter number of guests attending the meeting : ";
		cin >> number;
		cout << endl;
		
		if (number < roomcap)
		{
			cout << "You can hold the meeting and legally have " << (roomcap - number) << " more guest(s) attend." << endl;
		}
		if (number == roomcap)
		{
			cout << "You can hold the meeting legally." << endl;
			cout << "Please note: You are at the maximum room capacity." << endl;
		}
		if (number > roomcap)
		{
			cout << "The meeting cannot be held due to Fire Regulations." << endl;
			cout << "If you still want to hold the meeting, please remove " << (number - roomcap) << " guest(s)." << endl;
		}
		cout << endl;
		system("pause");
}
