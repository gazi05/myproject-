#include <iostream>
#include "Linked_list_file.cpp"
using namespace std;
int main ()
{
  bool exit = false ;
  int choice;
  while (!exit)
  {
    cout << "which kind of data structure do you wnat to use \n";
    cout << "1-Linked List      2-Stack\n";
    cin >> choice;
    switch (choice)
    {
    case 1 :
      Node* head = new Node ();
      Creating_Linked_List(head);
          break;
          
    }
  }
  
}