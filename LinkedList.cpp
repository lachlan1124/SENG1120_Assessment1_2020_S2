//LinkedList - Class Implementation
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList()
{
	size = 0;
}

void LinkedList::add(valueType toAdd)
{
	head = new Node(toAdd, head, NULL ); // create a new node in the list

	current = head->getNext(); // set the current pointer to the old head

	current->setPrev(head); // like the current node to the head

	current = head; // reset the current pointer

}

void LinkedList::remove(valueType toRemove)
{

}

void LinkedList::sort()
{
            
}

int LinkedList::count(valueType toCount)
{

}

void LinkedList::operator +=(const LinkedList& ll)
{

}

LinkedList::valueType LinkedList::out() const
{
	valueType output;

	//output = node data

	return output;
}

std::ostream& operator <<(std::ostream& os, const LinkedList& p)
{

	os << p.out();
	return os;
}