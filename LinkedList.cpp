//LinkedList - Class Implementation
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#include "LinkedList.h"
#include "Node.h"

#include <sstream> // CHECK I CAN USE THIS


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	current = NULL;
	
	size = 0;
}

LinkedList::~LinkedList()
{

}

void LinkedList::reset()
{
	current = head;
}

void LinkedList::addToTail(valueType toAdd)
{

	if (size == 0) // if there are no other nodes
		{
			head = new Node(toAdd); // create new node and point head at it
			tail = head; // aslo point tail at it
			current = head;
			size = 1; // increment the size
		}
	else
	{
		current = new Node(toAdd, NULL, tail);

		tail->setNext(current);

		tail = current;

		reset();

		size++;
	}
	

}

void LinkedList::add(valueType toAdd)
{

	std::istringstream ss(toAdd);

	while(ss) // while there are words left in string
	{
		std::string word;

		ss >> word; // get word from string stream

		addToTail(word); // add word to tail of the linked list
	}

}

LinkedList::valueType LinkedList::getCurrentData()
{
	return current->getData();
}

void LinkedList::nextCurrent()
{
	current = current->getNext();
}

bool LinkedList::atEnd()
{
	if (current->getNext() == NULL)
		return true;
	else
		return false;
}

void LinkedList::remove(valueType toRemove)
{
	
}

void LinkedList::sort()
{
            
}

int LinkedList::count(valueType toCount)
{
	return	0;
}

void LinkedList::operator +=(LinkedList& ll)
{
	//ensure the LL current pointers are at the head
	reset();
	ll.reset();

	while(!ll.atEnd()) // while there are more nodes
	{
		addToTail(ll.getCurrentData()); // add current data to LinkedList

		ll.nextCurrent(); // increment the ll
	}


}

LinkedList::valueType LinkedList::out()
{
	valueType output;


	for(int i = 0; i < size; i++)
	{

		//std::cout << current << " " << current->getData() << " " <<  i << std::endl;
		output.append( current->getData() + " " );
		current = current->getNext();

	}
	
	return output;
}

std::ostream& operator <<(std::ostream& os, LinkedList& p)
{
	p.reset();

	os << p.out();
	return os;
}