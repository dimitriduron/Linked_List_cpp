/*
 * driver.cpp
 *
 *  Created on: Mar 26, 2020
 *      Author: Dimitri Duron
 */

//header files
#include "list.h"

#include <iostream>
using namespace std;

//function prototypes
void intro();
void mainMenu();

int main()
{
	int input;
	int temp;

	List L;

	intro();
	while(input != 6)
	{
		mainMenu();
		cin >> input;
		if(input == 1)
		{
			cout << "---------------------------------" << endl;
			cout << "Enter a number to insert into the list" << endl;
			cin >> temp;
			L.insertAtEnd(temp);
			cout << "---------------------------------" << endl;
		}
		else if(input == 2)
		{
			cout << "---------------------------------" << endl;
			cout << "Enter a number to get deleted from the list" << endl;
			cin >> temp;
			L.Delete(temp);
			cout << "---------------------------------" << endl;
		}
		else if(input == 3)
		{
			cout << "---------------------------------" << endl;
			L.Display();
			cout << "---------------------------------" << endl;
		}
		else if(input == 4)
		{
			cout << "---------------------------------" << endl;
			cout << "The sum of the list is " << L.Sum() << endl;
			cout << "---------------------------------" << endl;
		}
		else if(input == 5)
		{
			cout << "---------------------------------" << endl;
			cout << "The average of the list is " << L.Average() << endl;
			cout << "---------------------------------" << endl;
		}
	}
	cout << "Exiting...." << endl;
	cout << "---------------------------------" << endl;
	return 0;
}

void intro()
{
	cout << "---------------------------------" << endl;
	cout << "Welcome to list creator!" << endl;
	cout << "---------------------------------" << endl;
	cout << "Authored by Dimitri Duron" << endl;
	cout << "---------------------------------" << endl;
}

void mainMenu()
{
	cout << "Entered a number 1-6 to do an instruction" << endl;
	cout << "1 ) Insert" << endl;
	cout << "2 ) Delete" << endl;
	cout << "3 ) Display" << endl;
	cout << "4 ) Sum" << endl;
	cout << "5 ) Average" << endl;
	cout << "6 ) Exit" << endl;
	cout << "---------------------------------" << endl;
}
