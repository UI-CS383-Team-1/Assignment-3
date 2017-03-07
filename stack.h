/*stack.h
*/

#include <iostream>
#include "link.h"

class Stack{

 public:
    Stack();
    void Push(int n);
    int Pop();
    void Print();
    int IsEmpty();
    void Reverse();
    void insertAtBottom(int item);
 private:
    LinkedList topPtr;

};


