//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name	: Ch02_ExL1-1* 
//*	* 
//* Written by	: David De Alva	* 
//*	* 
//* Purpose	: to extract information from a user such as hourly 
//*           wages and number of hours worked and deliver an accurate salary	* 
//*	* 
//*---------------------------------------------------------------------* 
//* Change Log:	* 
//*	Revision	* 
//*	Date		Changed  Rel Ver Mod Purpose	* 
//* 09/03/2020	DDeAlva 000.000.000 Initial release of program	* 
//*	* 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int SECRET = 13;
	const double RATE = 12.50;
	int num1;
	int num2;
	int	newNum;
	string name;
	double hoursWorked;
	double wages;
		cout << "David De Alva\t" << "L1-1\t" << "L1-1.exe" << endl;

		cout << " input one number then hit enter and follow by another number" << endl;
		cin >> num1;
		cin >> num2;
		cout << "value of num1 is " << num1 << ". Value of num2 is " << num2 << "." << endl;

	newNum = num1 * 2 + num2;
		cout << "The value of newNum is " << newNum << endl;

	newNum = newNum + SECRET;
	cout << "with the help of the SECRET number your newNum is now " << newNum << endl;

		cout << "please enter your Last Name";
		cin >> name;

		cout << "please enter a number between 0 and 100" << endl;
		cin >> hoursWorked;

	wages = RATE * hoursWorked;

		cout << "Name: " << name << endl;
		cout << "Pay rate:$" << RATE << endl;
		cout << "Hours worked: " << hoursWorked << endl;
		cout << "Salary: $" << wages << endl;

	char q;
		cout << "\nPress any key to Exit.";
		cin.ignore(2, '\n');
		cin.get(q);

	return 0;


}