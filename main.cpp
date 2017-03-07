/* CS383 Team-1 
* Assignment-3
* main.cpp
*/

#include <iostream>
#include "link.h"
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

  return 0;

}
