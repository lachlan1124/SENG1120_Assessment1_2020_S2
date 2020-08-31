
#include "Node.h"

int main()
{
    std::string teststring = "Test";


    std::cout << &teststring << ": " << teststring << std::endl;

    Node* testNode = new Node(teststring, NULL, NULL);

    testNode->test();

}