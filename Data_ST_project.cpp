#include <iostream>

using namespace std;

struct Node 
{
  int item;
  Node *next ;
};

Node* Creating_Linked_List(Node *head)
{
  Node *Creating_Linked = head;
  
}

int main ()
{
  bool exit = false ;
  int choice;
  while (!exit)
  {
    cout << "which kind of data structure do you wnat to use /n";
    cout << "1-Linked List      2-Stack\n";
    cin >> choice;
    switch (choice)
    {
    case 1 :
      Node* head = new Node ();
    
    default:
      break;
    }
  }
  
}