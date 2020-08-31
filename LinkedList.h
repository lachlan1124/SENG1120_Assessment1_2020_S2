//LinkedList - Class Declaration 
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#ifndef GAURD_LINKEDLIST
#define GAURD_LINKEDLIST

#include <iostream>

class LinkedList
{

    typedef std::string valueType;

    public:

        LinkedList();

        ~LinkedList();

        // Precondition.
        // Postcondition.
        void add(valueType toAdd);

        void remove(valueType toRemove);

        void sort();

        int count(valueType toCount);

        // Operator Overloads:
        void operator +=(const LinkedList& ll);

    private:


};


    std::ostream& operator <<(std::ostream& os, const LinkedList& li);


#endif