/*  Link.cpp
 *
 *  Class for a sorted linked list of integers.
 */

//#include <bool.h>    not in CC
#include <iostream>
#include <cstdlib>

using namespace std;

#include "link.h"
#include "math.h"



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

   // while (p != NULL){

    while (p != NULL){
        if(p->info == x) return 1;
        p = p->next;
    }

    return 0;
    //return (int)(x == p->info);
}

double LinkedList::Average(){
      int sum = 0;
      double mean = 0;
      nodeptr p = start;
      while(p != NULL){
        sum += p->info;
        p = p->next;
      }
    return mean = sum / count;
  }

double LinkedList::StandardDeviation(){
  int sum = 0;
  double std_dev = 0;
  double mean = 0;
  
  // Find Mean
    nodeptr p = start;
    while(p != NULL){
      sum += p->info;
      p = p->next;
    }
    mean = sum / count;

  // Square distance to mean
    sum = 0;
    p = start;
    while(p != NULL){
      sum += ((p->info - mean) * (p->info - mean));
      p = p->next;
    }
  // divide by number of nodes and get square root
    return std_dev = sqrt((sum/count));
} 


int LinkedList::Size()
{
    return count;
}

void LinkedList::Print()
{
   nodeptr p = start;

   while( p != NULL)
   {
        cout << p->info <<endl;
        p = p->next;
   }
}


