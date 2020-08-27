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
    public:

        // Precondition.
        // Postcondition.
        void add(std::string toAdd);

        void remove(std::string toRemove);

        void sort();

        // Operator Overloads:

    private:


};


    std::ostream& operator <<(std::ostream& os, const LinkedList& li);


#endif