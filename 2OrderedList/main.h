#include <iostream>
#include <cassert>

struct CNode
{
    int Data;
    CNode * Next;
    CNode * Prev;

    CNode() : Data(0), Next(0), Prev(0) {} 
};

// Linear search of element <<a>> in list
// Return's 0, if element doesn't exists
CNode *Search(CNode *head, int a)
{
    // If current element equals to needed return current
    for(CNode *current = 0; current != 0; current = current->Next)
        if(current->Data == a)
            return current;
    return 0;
} // Work time = O(n), where "n" is a lins length 

// Insert element <<a>> after current
CNode *InsertAfter(CNode *node, int a)
{
    assert(node != 0);
    // Create new element 
    CNode *nexNode = new CNode();
    nexNode->Data = a;
    nexNode->Next = node->Next;
    nexNode->Prev = node;
    // Update *Prev from previous element, if it's exists
    if(node->Next != 0)
        node->Next->Prev = newNode;
    // Update *Next of current element
} // work time = O(1)

