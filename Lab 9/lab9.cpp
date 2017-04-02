/* Ernesto Murillo Lab 9

Function : getMealCostWithTax()  -  gets total for meal 1 or meal 2 including tax
Function : getTip()  -  gets tip % amount based on choice 1, 2, 3, 4
money = 52 - total money you have
ammoDollars = total ammo you have = 20 converted to dollars   10 to 1
mealCost12 = variable to link to function getMealCostWithTax()
rateService = variable to link to function getTip()
totalIncTip = total cost of meal inc tax and inc tip % choice
moneyAndAmmo = money + ammoDollars - total true money
affordall =  moneyAndAmmo minus totalIncTip - to see if you could afford your tip choice
within functions : variables used were
mealCost = cost of meal
ans = answer
tip = tip % converted to decimal
*/

#include<iostream>
#include<math.h>
using namespace std;

double getMealCostWithTax();
double getTip();

void main()
{
	int money = 52;
	double mealCost12, rateService, totalIncTip, affordall, ammoDollars = 20 /100;
	double moneyAndAmmo = money + ammoDollars;
	cout << "You have been out hunting Zombies for over three weeks." << endl;
	cout << "You have not eaten for five days and are low on water." << endl;
	cout << "On your way home you come across a diner that offers only 2 meals." << endl;
	cout << endl;
	cout << "Meal 1 is a peanut butter and jelly sandwich and a glass of water." << endl;
	cout << "The cost of Meal 1 is $35.35." << endl;
	cout << endl;
	cout << "Meal 2 is rib eye steak, fries, vegetable and a coffee or soda." << endl;
	cout << "The cost of meal 2 is $45.00." << endl;
	cout << endl;
	cout << "There is manditory 10 percent tax on either meal" << endl;
	cout << endl;
	cout << "The proprietor of the diner will take ammo as a form of money as well." << endl;
	cout << "10 rounds of ammo equals $1.00" << endl;
	cout << endl;
	cout << "You have $52.00 cash and a total of 20 rounds of ammo." << endl;
	
	mealCost12 = getMealCostWithTax();
	cout.precision(4);
	cout << "The total cost of the meal including tax is $" << mealCost12 << endl;
	
	rateService = getTip();
	totalIncTip = (mealCost12 * rateService + mealCost12);

	cout.precision(4);
	cout << "The total cost of the meal including tip is $" << totalIncTip << endl;
	
	affordall = (moneyAndAmmo - totalIncTip);

	if (totalIncTip >= moneyAndAmmo)
	{
		cout << "The total inc tip is $" << affordall << " more than you have." << endl;
		cout << "You cannot afford this tip even if you use all your ammo as payment." << endl;
	}
	else
	{
		cout << "You can afford this meal and the tip you chose." << endl;
	}
	system("pause");
}

double getMealCostWithTax()
{
	double mealCost;
	int ans;
		cout << endl;
		cout << endl;
		cout << "Which meal would you like?" << endl;
		cout << "Type 1 for Meal 1 or Type 2 for Meal 2." << endl;
		cin >> ans;
		
		if (ans == 1)
		{
			mealCost = (35.35 *.10 + 35.35);
		}
		if (ans == 2)
		{
			mealCost = (45.00 * .10 + 45.00);
		}
		
	return mealCost;
}

double getTip()
{
	int ans;
	double tip;
	cout << endl;
	cout << endl;
	cout << "How was the service of your meal?" << endl;
	cout << "Type 1 for excellent service will add a 20 percent tip." << endl;
	cout << "Type 2 for good service will add a 15 percent tip." << endl;
	cout << "Type 3 for fair service will add a 10 percent tip." << endl;
	cout << "Type 4 for poor service will add a 5 percent tip." << endl;
	cin >> ans;

	if (ans == 1)
	{
		tip = .20;
	}
	else if (ans == 2)
	{
		tip = .15;
	}
	else if (ans == 3)
	{
		tip = .10;
	}
	else if (ans == 4)
	{
		tip = .05;
	}

	return tip;
}
