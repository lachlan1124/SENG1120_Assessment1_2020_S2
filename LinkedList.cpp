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

void LinkedList::add(valueType toAdd)
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

LinkedList::valueType LinkedList::out()
{
	valueType output;


	for(int i = 0; i < size; i++)
	{
		current = current->getNext();
		std::cout << current << " " << current->getData() << " " <<  i << std::endl;
		output.append(" " + current->getData());


	}
	
	return output;
}

std::ostream& operator <<(std::ostream& os, LinkedList& p)
{
	p.reset();

	os << p.out();
	return os;
}