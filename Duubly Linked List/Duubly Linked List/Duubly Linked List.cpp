#include<iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node* previous;
	node(int val) {
		data = val;
		next = NULL;
		previous = NULL;
	}
};

void InsertAtTail(node* & head, int val)
{
	node* temp = head;
	node* newNode = new node(val);
	if (head == NULL)
	{
		temp->next = newNode;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->previous = temp;
	newNode->next = NULL;

}
void insertAtHead(node* &head, int val)
{
	node* temp = head;
	node* newNode = new node(val);
	newNode->next = temp;
	if (temp != NULL)
	{
		temp->previous = newNode;
	}
	//temp->next = newNode;
	newNode->previous = NULL;


}