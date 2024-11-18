#include <iostream>

using namespace std; 

struct Node {
    int item ;
    Node *next;
};

Node *CreateLinkedList(Node * head )
{
Node *p = head;
for (int i = 2 ; i <=5 ; i++)
{
    p->next = new Node();
    p = p->next ;
    p->item = 2*i-1;
}
p->next = nullptr;
return head;
}
void printLinkedList(Node *head)
{
    Node *current = head;
    while (current!= nullptr)
    {
        cout << current->item << "  ";
        current = current->next;
    }
    cout <<endl;
}
Node* InsertNode(Node *head)
{
    Node* newNode = new Node();
    newNode->item = -1;
    newNode->next = head;
    head = newNode;
    return newNode;
}
Node *Insertlastnode(Node *head)
{
    Node *c = head;
    Node *last = new Node();
    last->item = 11;
    last->next = NULL;
    while(c->next != nullptr)
    {
        c = c->next;
    }
    c->next = last ;
    return head;
}
Node *InsertingMiddle(Node *head ) 
{
    Node *NEwNODE = new Node();
    NEwNODE->item = 4;
    NEwNODE->next = nullptr;
    Node* curr = head;
    Node* prev = nullptr;
    while(curr->next!= nullptr && curr->item < NEwNODE->item)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NEwNODE;
    NEwNODE->next = curr;
    return head;
}
Node *removefirst(Node*& head)
{
    Node *current = head ;
    head = current->next ;
    delete current; 
    return head;
}
int main (){
    Node *head = new Node();
    head->item = 1 ;
    head->next =nullptr;
    head = CreateLinkedList(head);
    printLinkedList(head);
    cout << "New linked list after inserting a new node " << endl;
    head = InsertNode(head);
    printLinkedList(head);
    cout << "New linked list after inserting a new node at last " << endl;
    head = Insertlastnode(head);
    printLinkedList(head);
    cout << "New linked list after inserting a new node at the middle "<< endl;
    head = InsertingMiddle(head);
    printLinkedList(head);
    cout << "after removing the first node " << endl;
    removefirst(head);
    printLinkedList(head);
}