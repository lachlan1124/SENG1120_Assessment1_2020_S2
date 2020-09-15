//LinkedList - Class Declaration 
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#ifndef GAURD_LINKEDLIST
#define GAURD_LINKEDLIST

#include <iostream>
#include "Node.h"
class LinkedList
{

    typedef std::string valueType;

    public:

        LinkedList();

        ~LinkedList();

        // Precondition: Only takes a string, won't work for other data types
        // Postcondition: each word within the string is added to a Node within the LinkedList
        void add(const std::string toAdd);

        // Precondition: 
        // Postcondition: Removes all data that matches the given data
        void remove(const valueType toRemove);

        // Precondition: List length is greater or equal to 2
        // Postcondition: the LinkedList is sorted
        void sort();

        // Precondition: none
        // Postcondition: returns how many data item within the LinkedList match a given data item.
        int count(const valueType toCount);
        
        // Precondition: atleast one Node exists
        // Postcondition: puts all the data within the LinkedList into a single valueType
        valueType out();
        
        // Precondition: none
        // Postcondition: The current pointer is set to the head of the LinkedList
        void reset();


        // Operator Overloads:

        // Precondition: their are two LinkedLists
        // Postcondition: a copy of the second list is now on the end of the first
        void operator +=( LinkedList& ll);

        

    private:
        Node* head;
        Node* tail;
        Node* current;

        int size;

        // Precondition: 
        // Postcondition: returns true if the current pointer points to NULL.
        bool atEnd() const;

        // Precondition: 
        // Postcondition: A valueType is added to the end of the LinkedList
        void addToTail(const valueType toAdd);

        // Precondition: 
        // Postcondition: the current pointer is moved to the next Node
        void nextCurrent();

        // Precondition: 
        // Postcondition: the current pointer to moved to the prev Node
        void prevCurrent();
        
        // Precondition: 
        // Postcondition: the data store in the Node current points to is returned
        valueType getCurrentData() const;
};


    std::ostream& operator <<(std::ostream& os, LinkedList& li);


#endif