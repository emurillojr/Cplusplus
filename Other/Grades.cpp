/* Ernesto Murillo - sum of Grades file
Variables used:
saverage = student average
classaverage = class average
classsum = total of class
sum = total of test scored
test1 test2, test3, test4;
name = students name

*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void main()
{
	ifstream inputfile;			//Variable fileinout can input data from the disk
	inputfile.open("e:\\Grades.txt");  //open the file located in e:\\Grages.txt

	int numberofstudents = 0;
	double saverage, classaverage, classsum=0, sum=0, test1, test2, test3, test4;
	string name;
	
	while(!inputfile.eof())		// loop is executed as long as there is more data --- eof end of file
	{
	inputfile >> name >> test1 >> test2 >> test3 >> test4;
	sum = test1 + test2 + test3 + test4;
	saverage = sum / 4;
	classsum = classsum + saverage;
	cout << name <<"'s average is \t" << saverage << endl;
	}
	
	classaverage = classsum / 4;
	cout << endl;
	cout << "Class average is " << classaverage << endl;
	cout << endl;

	system("pause");
}













