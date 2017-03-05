/*  Link.cpp
 *
 *  Class for a sorted linked list of integers.
 */

//#include <bool.h>    not in CC
#include <iostream>
#include <cstdlib>

using namespace std;

#include "link.h"



void LinkedList::AddNode(int x)
{
    nodeptr n;

    n = new node;
    n->info = x;
    count++;

    if (start == NULL)
    {
        start = n;
        n->next = NULL;
    }
    else
    {
        nodeptr tmp = start;
        n->next = tmp;
        start = n;
    }
}


void LinkedList::DeleteNode()
{
  if(count == 0) return;

  nodeptr tmp = start;

  start = start->next;

  tmp->next = NULL;

  delete tmp;
  count--;

}

int LinkedList::InfoAtTop(){
  int info = start->info;
  return info;
}

void LinkedList::ListNodes()
{
    nodeptr p = start;

    while (p != NULL)
    {
        cout << p->info << endl;
        p = p->next;
    }

}


//bool LinkedList::IsInList(int x)
int LinkedList::IsInList(int x)
{
    nodeptr p = start;

    while (p != NULL){

    while (p != NULL){
        if(p->info == x) return 1;
        p = p->next;
    }

    return 0;
    //return (int)(x == p->info);
}


int LinkedList::Size()
{
    return count;
}
