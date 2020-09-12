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

        // Precondition.
        // Postcondition.
        void add(valueType toAdd);

        void addToTail(valueType toAdd);

        void remove(valueType toRemove);

        void sort();

        int count(valueType toCount);

        void reset();

        valueType out();

        valueType getCurrentData();

        void nextCurrent();

        void prevCurrent();

        bool atEnd() const;

        // Operator Overloads:
        void operator +=( LinkedList& ll);

        

    private:
        Node* head;
        Node* tail;
        Node* current;

        int size;

        
        
};


    std::ostream& operator <<(std::ostream& os, LinkedList& li);


#endif