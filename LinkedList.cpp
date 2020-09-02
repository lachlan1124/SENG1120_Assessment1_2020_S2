//LinkedList - Class Implementation
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	current = NULL;
	
	size = 0;
}

void LinkedList::reset()
{
	current = head;
}

LinkedList::valueType LinkedList::split(valueType string)
{
	
}

void LinkedList::addToHead(valueType toAdd)
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
		current = new Node(toAdd);

		
		current->setNext(head);
		head->setPrev(current);

		head = current;

		size++;
	}
	

}

void LinkedList::add(valueType toAdd)
{

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

void LinkedList::operator +=(const LinkedList& ll)
{

}

LinkedList::valueType LinkedList::out()
{
	valueType output;


	for(int i = 0; i < size; i++)
	{

		std::cout << current << " " << current->getData() << " " <<  i << std::endl;
		output.append(" " + current->getData());
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