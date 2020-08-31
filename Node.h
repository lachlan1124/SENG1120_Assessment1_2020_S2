//Node - Class Declaration 
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#ifndef GUARD_NODE
#define GUARD_NODE

#include <iostream>

class Node
{

    typedef std::string valueType;

    public:



        Node(const valueType& d, Node* n = NULL, Node* p = NULL);

        ~Node();

        void setNext(Node* n);
        void setPrev(Node* p);

        Node* getNext() const;
        Node* getPrev() const;

        void setData(const valueType& d);

        void test();

    private:

    Node* next;
    Node* prev;

    valueType data;

    
};

#endif