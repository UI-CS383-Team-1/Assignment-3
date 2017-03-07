#include<iostream>
#include"stack.h"

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

void Stack::Reverse()
{
    if(IsEmpty())
	return;
    else
    {
	int x;
	x = Pop();
	Reverse();
	insertAtBottom(x);

    }
}

void Stack::insertAtBottom(int item)
{
    if(IsEmpty())
	Push(item);
    else
    {
	int x;
	x=Pop();
	insertAtBottom(item);
	Push(x);

    }
}
