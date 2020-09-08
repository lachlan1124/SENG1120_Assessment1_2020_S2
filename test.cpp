
#include "Node.h"
#include "LinkedList.h"
int main()
{
    std::string teststring = "Test";


    std::cout << &teststring << ": " << teststring << std::endl;

    Node* testNode = new Node(teststring, NULL, NULL);

   testNode->test();

    //delete testNode;


    LinkedList testList;


    testList.addToTail("test1");

    testList.addToTail("test2");

    testList.add("Word1 Word2 Word3 Word4");
    
    std::cout << testList << std::endl;

    LinkedList testList2;

    testList2.add("List1 List2 List3 List4");

    std::cout << testList2 << std::endl;

    testList += testList2; // is causing the creation of an empty node

    std::cout << testList << std::endl;
    std::cout << testList2 << std::endl;

    testList.add("Word3 Word3 Word8");

    testList.remove("Word3");

    std::cout << testList << std::endl;
    std::cout << testList2 << std::endl;
}