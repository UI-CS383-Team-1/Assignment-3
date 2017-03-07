#include <iostream>
#include "stack.h"

Stack::Stack()
{
}

void Stack::Push(int n)
{
    topPtr.AddNode(n);
}

int Stack::Pop()
{
   if(!IsEmpty())
   {
	int n = topPtr.InfoAtTop();
	topPtr.DeleteNode();
	return n;
   }
   else
   {
	return 0;
   }
}


int Stack::IsEmpty()
{
    int n = topPtr.Size();
    return(n == 0);
}

void Stack::Print()
{
   topPtr.Print();
}
