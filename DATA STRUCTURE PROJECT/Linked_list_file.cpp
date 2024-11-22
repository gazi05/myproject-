#include <iostream>

using namespace std;
struct Node
{
	int item;
	Node* next;
};

Node* Creating_Linked_List(Node* head)
{
	Node* Creating_Linked = head;
	cout << "Enter how many Node do you want to create\n";
	int NO_Node ;
	cin >> NO_Node;
	cout << "Enter the " << 1 << " value " <<endl;
	cin >> Creating_Linked->item;
	for (int i = 1 ; i < NO_Node ;i++)
	{ 
		Creating_Linked->next = new Node();
		Creating_Linked = Creating_Linked->next;
		cout << "Enter the " << i+1 << " value " <<endl;
		cin >> Creating_Linked->item;
	}
	Creating_Linked->next = nullptr;
	return head;
}

void Printing_linked_list(Node* head)
{
	Node *current = head;
	while(current != nullptr)
	{
		cout << current->item << endl;
		current = current->next ;
	}
	cout << "null" ;
}