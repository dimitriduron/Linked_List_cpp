/*
 * list.cpp
 *
 *  Created on: Mar 26, 2020
 *      Author: Dimitri Duron
 */

//header files
#include "list.h"

#include <new>
using namespace std;

//list constructor definition
List::List()
	:first(0), last(0), ptrNode(0)
	 {}

//list copy constructor definition
List::List(const List &original)
{
	first = 0;
	last = 0;
	ptrNode = 0;
}

//list deconstructor definition
List::~List()
{}

//Class function definitions
bool List::Empty()
{
	return (last == 0);
}

void List::insertAtEnd(ListElement x)
{
	if(last == 0)						//checks for empty list
	{
		first = new Node(x, first);
		last = first;
	}
	else								//non- empty list
	{
		//goes to last node then shifts it over, kinda like swap function
		ptrNode = new Node(x, ptrNode);
		last->next = ptrNode;
		last = ptrNode;
		ptrNode = 0;
	}
	ptrNode = first;
}

void List::Delete(ListElement x)
{
	ptrNode = first;
	Node *prevNode = ptrNode;



	do
	{
		if(first == 0)
		{
			cout << "This list is empty." << endl;
			break;
		}
		if(ptrNode->data == x)
		{
			if(ptrNode == first)		//in case the value is at first node
			{
				first = first->next;
			}
			else if(ptrNode == last)	//in case the value is at the last node
			{
				last = prevNode;
			}
			else
			{
				//moves ptrNode back to previous node, then makes the next node equal to the node past the deleted node
				prevNode = ptrNode;
				ptrNode->next = ptrNode->next->next;
			}
		}
		if(prevNode == ptrNode)
		{
			ptrNode = ptrNode->next;
		}
		else
		{
			prevNode = ptrNode;
			ptrNode = ptrNode->next;
		}
	}while(ptrNode != last);
	if(ptrNode->next == 0)
	{
		cout << x << " was not found within the list." << endl;
	}
	else
	{
		cout << "Deleted" << endl;
	}
	ptrNode = 0;
}

void List::Display()
{
	last->next = 0;
	ptrNode = first;
	if(first == 0)						//checks for empty list
	{
		cout << "This list is empty." << endl;
	}
	while(ptrNode != last)			//outputs data if otherwise
	{
		cout << ptrNode->data << endl;
		ptrNode = ptrNode->next;
	}
	cout << ptrNode->data << endl;
	cout << "All list elements are displayed..." << endl;
}

int List::Sum()
{
	last->next = 0;
	int sum = 0;
	ptrNode = first;
	while(ptrNode != last)
	{
		sum = sum + ptrNode->data;
		ptrNode = ptrNode->next;
	}
	sum = sum + ptrNode->data;
	ptrNode = 0;
	return sum;
}

int List::Average()
{
	last->next = 0;
	int avg = 0;
	int count = 0;
	ptrNode = first;

	while(ptrNode != last)
	{
		avg = avg + ptrNode->data;
		count++;
		ptrNode = ptrNode->next;
	}
	avg = avg + ptrNode->data;
	count++;
	avg = avg / count;
	cout << "BEWARE: The average of the list may round down" << endl;
	return avg;
}
