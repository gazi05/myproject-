#include <iostream>
#include <chrono> 
using namespace std;
struct Node{
  int item;
  Node *next;
};
Node* top = nullptr;
Node *push(int val){
  Node *p = new Node();
  p->item = val;
  p->next = top ;
  top = p ;
}
void pop(){
  if(top == nullptr)
  {
    cout << "The stack is empty "<< endl;
  }
  else {
  Node *current = top;
  top = top->next;
  cout << current->item <<endl;
  delete current;}
}
int main (){
  auto start = chrono::high_resolution_clock::now();
 push(5);
 push(10);
 push(22);
 push(2005);
 pop();
 pop();
 pop();
 pop();
 pop();
 auto end = chrono::high_resolution_clock::now();
 chrono::duration<double> duration = end - start ;
 cout << "duration time is : "<<duration.count(); 
}
