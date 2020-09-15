/*
 * node.h
 *
 *  Created on: Mar 26, 2020
 *      Author: Dimitri Duron
 */

#ifndef NODE_H_
#define NODE_H_

typedef int ListElement;

class Node
{
public:
	ListElement data;
	Node *next;

	//constructor
	Node(ListElement value, Node *link = 0)
		:data(value), next(link)
		{};
};



#endif /* NODE_H_ */
