/* Ernesto Murillo Lab 8 

Variables used:
malesNotEligToRegister = Number of males not eligible to register.
femalesNotEligToRegister = Number of females not eligible to register.
malesOldEnoughToVoteButNotRegistered = Number of males who are old enough to vote but have not registered.
femalesOldEnoughToVoteButNotRegistered = Number of females who are old enough to vote but have not registered.
eligToVoteButDidNotVote = Number of individuals who are eligible to vote but did not vote.
individualsWhoDidVote = Number of individuals who did vote.
recordsProcessed = Number of records processed.
age = age of individual. (Number)
idnumber = ID Number is 4 characters.
gender = is either an F or a M      ( F=female M = male).
registered = is either an N or a Y  ( N=no Y=yes).
voted = is either an N or a Y       ( N=no Y=yes).

The file name is vote.txt and is organized in the following manner:
Field 1		Field 2	Field 3	Field 4		Field 5
ID Number	Age		Gender	Registered	Voted

Variable fin can input data from the disk.
Location of vote.txt will need to be updated depending on where the file is located. 
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void main()
{
	int malesNotEligToRegister = 0;
	int femalesNotEligToRegister = 0;
	int malesOldEnoughToVoteButNotRegistered = 0;
	int femalesOldEnoughToVoteButNotRegistered = 0;
	int eligToVoteButDidNotVote = 0;
	int individualsWhoDidVote = 0;
	int recordsProcessed = 0;
	int age;
	string idnumber, gender, registered, voted;

	ifstream fin;				// Variable fin can input data from the disk.	
	fin.open("c:\\vote.txt");	// Open the file located at i:\vote.txt
	
	while (!fin.eof())		// while not end of file (eof)
	{
		recordsProcessed++;
		fin >> idnumber >> age >> gender >> registered >> voted;
				
		if (age < 18 && gender == "M" && registered == "N")
		{
			malesNotEligToRegister++;
		}
		if (age < 18 && gender == "F" && registered == "N")
		{
			femalesNotEligToRegister++;
		}
		if (age > 17 && gender == "M" && registered == "N")
		{
			malesOldEnoughToVoteButNotRegistered++;
		}
		if (age > 17 && gender == "F" && registered == "N")
		{
			femalesOldEnoughToVoteButNotRegistered++;
		}
		if (age > 17 && registered == "Y" && voted == "N")
		{
			eligToVoteButDidNotVote++;
		}
		if (age > 17 && registered == "Y" && voted == "Y")
		{
			individualsWhoDidVote++;
		}
	}
	cout << "Total Males not eligible to register....................: " << malesNotEligToRegister << endl;
	cout << "Total Females not eligible to register..................: " << femalesNotEligToRegister << endl;
	cout << "Total Males old enough to vote but have not registered..: " << malesOldEnoughToVoteButNotRegistered << endl;
	cout << "Total Females old enough to vote but have not registered: " << femalesOldEnoughToVoteButNotRegistered << endl;
	cout << "Total eligible to vote but did not vote.................: " << eligToVoteButDidNotVote << endl;
	cout << "Total eligible to vote and did vote.....................: " << individualsWhoDidVote << endl;
	cout << "Total records processed.................................: " << recordsProcessed << endl;
	cout << endl;
	cout << endl;
	system("pause");
}
