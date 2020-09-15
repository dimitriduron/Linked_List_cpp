/*
 * list.h
 *
 *  Created on: Mar 26, 2020
 *      Author: Dimitri Duron
 */

//needed header files
#include "node.h"

#include <iostream>
using namespace std;

#ifndef LIST_H_
#define LIST_H_

typedef int ListElement;

class List
{
public:
	//constructors
	List();									//Default constructor, creates an empty list
	List(const List &original);				//Specific constructor
	//destructor
	~List();

	//class functions
	bool Empty();							//returns true if the list is empty, otherwise false
	void insertAtEnd(ListElement x);		//insert a value x at the end of the list
	void Delete(ListElement x);				//if value x is in the list, remove only one of x
	void Display();							//display the data values in the list in the order inserted
	int Sum();								//compute and return the sum of the values within the given list
	int Average();							//compute and return the average of the values in the list


private:
	Node *first;
	Node *last;
	Node *ptrNode;
};



#endif /* LIST_H_ */
