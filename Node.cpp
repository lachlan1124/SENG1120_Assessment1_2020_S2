//Node - Class Implementation 
/******************************/
//Author: Lachlan Marler | C3351542
//Course: SENG1120
//Class Description: 

#include "Node.h"


Node::Node(const valueType& d, Node* n, Node* p)
{
    data = d;

    next = n;
    prev = p;
}

Node::~Node()
{
    
}


void Node::setNext(Node* n)
{
    next = n;
}

void Node::setPrev(Node* p)
{
    prev = p;
}


Node* Node::getNext() const
{
    return next;
}   

Node* Node::getPrev() const
{
    return prev;
}

void Node::setData(const valueType& d)
{
    data = d;
}

Node::valueType Node::getData()
{
    return data;
}


void Node::test()
{
    std::cout << &data << ": " << data << std::endl;
    std::cout << &next << ": " << next << std::endl;
}