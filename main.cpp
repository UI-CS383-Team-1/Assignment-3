/* CS383 Team-1 
* Assignment-3
* main.cpp
*/

#include <iostream>
#include "stack.h"
using namespace std;

int main() {
  LinkedList list1;
  
  //Add some initial nodes
  list1.AddNode(3);
  list1.AddNode(5);
  
  cout << "Initial contents of list1:" << endl;
  list1.ListNodes();
  
  cout << "Is 3 in the list? ";
  if(list1.IsInList(3))
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  
  //Add a few more nodes
  list1.AddNode(1);
  list1.AddNode(4);
  
  cout << "Contents of list1 after adding:" << endl;
  list1.ListNodes();
  
  //Delete a node
  list1.DeleteNode();
  cout << "Deleted" << endl;
  
  cout << "Contents of list1 after deleting:" << endl;
  list1.ListNodes();
  
  int info = list1.InfoAtTop();
  cout << "Top node: " << info << endl;

  cout << "list1 Average: " << list1.Average() << endl;
  cout << "list1 Standard Deviation: " << list1.StandardDeviation() << endl;  
  
  Stack iStack;

  cout << "Pushing integers onto iStack" << endl;

  for( int i = 0 ; i < 5 ; i++ ) {
    iStack.Push(i);       // push items onto the stack
    cout << i << ' ';
  }
  cout << endl;

  cout << "Contents of iStack" << endl;
  iStack.Print();          // output the stack contents

  iStack.Reverse();
  cout << "Contents of iStack after reverse"<< endl;
  iStack.Print();

  cout << endl << "Popping integers from iStack" << endl;

  while( !iStack.IsEmpty() )
    cout << iStack.Pop() << ' ';

  cout << endl;
  iStack.Print();          // output the stack contents


  if( iStack.IsEmpty() )
    cout << "The stack is empty" << endl;
  else
    cout << "The stack is not empty" << endl;

  return 0;

}
