/*  link.h
 */

// This is a class for a sorted linked list of integers.

#include <iostream>

using namespace std;

class LinkedList
{
private:

  struct node
  {
     int info;
     node * next;
  };

  typedef node * nodeptr;

  nodeptr start;

  int count;


public:

       // Constructor

   LinkedList()
   {
      start = NULL;
      count = 0;
   }

       // Destructor

   ~LinkedList()
   {
      nodeptr p = start, n;

      while (p != NULL)
      {
         n = p;
         p = p->next;
         delete n;
      }
   }

   // Adds node to the front of list
   void AddNode(int x);

   // Deletes the first node
   void DeleteNode();

   // Returns info of the first node on the list
   int InfoAtTop();

   // Output the values in the nodes, one integer per line.
   void ListNodes();

   // Return 1 if there in a node in the list with the value x.
   // Return 0 if there is NOT a node in the list with the value x.
   int IsInList(int x);
  
   // Returns Average (simple mean) of List
   double Average();
   
   // Returns Standard Deviation of List
   double StandardDeviation();

   // Return a count of the number of nodes in the list.
   int Size();

   // Prints the list.
   void Print();
};
