
#include "Node.h"
#include "LinkedList.h"
int main()
{
    std::string teststring = "Test";


    std::cout << &teststring << ": " << teststring << std::endl;

    Node* testNode = new Node(teststring, NULL, NULL);

   testNode->test();

    //delete testNode;

    std::cout << "A" << std::endl;

    LinkedList* testList = new LinkedList();

    std::cout << "E" << std::endl;

    testList->add("test1"); // causing seg fault | probs error with reassign the pointers
    std::cout << "B" << std::endl;
    testList->add("test2");

std::cout << "C" << std::endl;

    std::cout << *testList << std::endl;

    std::cout << "D" << std::endl;

}