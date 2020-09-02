
#include "Node.h"
#include "LinkedList.h"
int main()
{
    std::string teststring = "Test";


    std::cout << &teststring << ": " << teststring << std::endl;

    Node* testNode = new Node(teststring, NULL, NULL);

   testNode->test();

    //delete testNode;


    LinkedList* testList = new LinkedList();


    testList->add("test1");

    //testList->add("test2");



    std::cout << *testList << std::endl;

}