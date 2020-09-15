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
        void add(const valueType toAdd);

        void remove(const valueType toRemove);

        void sort();

        int count(const valueType toCount);

        valueType out();
        void reset();


        // Operator Overloads:
        void operator +=( LinkedList& ll);

        

    private:
        Node* head;
        Node* tail;
        Node* current;

        int size;

        bool atEnd() const;

        void addToTail(const valueType toAdd);

        void nextCurrent();

        void prevCurrent();
        
        valueType getCurrentData() const;
};


    std::ostream& operator <<(std::ostream& os, LinkedList& li);


#endif