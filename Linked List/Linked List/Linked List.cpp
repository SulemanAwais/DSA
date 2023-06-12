#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int val)	{
		data = val;
		next = NULL;
	}
};
// Adding new node 
void insertAtTail(node* &head, int val)
{
	node* newNode = new node(val);
	if (head == NULL)
	{
		head = newNode;
		return;
	}	
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}
void insertAtHead(node*& head, int val) {
	node* newNode = new node(val);
	node* temp = head;
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}
void displayLinkedList(node* head)
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp=temp->next;
		cout<< endl;
	}
}
bool search(node* head, int key)
{
	node* temp = head;
	while (temp->next != NULL)
	{
		if (temp->data == key) return true;
		temp = temp->next;
	}
	return false;
}
void deleteANode(node* &head, int val)
{
	node* temp = head;
	while (temp->next->data != val)
	{
		temp = temp->next;
	}
	node* toDelete = temp->next;
	temp->next = temp->next->next;
	delete toDelete;
	cout << "\nNode with data " << val << " has been deleted successfully";
}
void deleteAtHead(node*& head, int val)
{
	node* temp = head;
	head = head->next;
	delete temp;
}
node* reverse_k_numberOfLinkedlist(int k, node* &head) {
	int count = 0;
	node* current = head;
	node* previous = NULL;
	node* next=NULL;
	while (current!=NULL&&count < k)
	{
		next=current->next;
		current->next = previous;
		previous=current;
		current = next;
		count++;
	}
	if (next!=NULL)
	{
		current->next=reverse_k_numberOfLinkedlist(k, next);
	}
	return previous;

}
node* reverseALinkedList(node*& head)
{
	node* previous = NULL;
	node* current = head;
	node* next = current->next;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	return previous;
}
bool detectCycle(node* head)
{
	node* slowptr = head;
	node* fastptr = head;
	while (fastptr != NULL && fastptr->next != NULL)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if (slowptr == fastptr)
		{
			return true;
		}
	}
	return false;
}
void removeACycle(node* head)
{
	node* slowptr = head;
	node* fastptr = head;
	do
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
	} while (slowptr!=fastptr);
	fastptr = head;
	while (slowptr->next != fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next;
	}
	slowptr->next = NULL;

}
void makeACycle(node* head, int position)
{
	int count = 1;
	node* temp = head;
	node* cycleNode=NULL;
	while (temp->next != NULL)
	{
		if (count == position)
		{
			cycleNode = temp;
		}
		temp = temp->next;
		count++;
	}
	temp->next = cycleNode;
	
}
node* recursiveReverseALinkedlist(node* head)
{
	//BASE CASE
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	node* newhead = recursiveReverseALinkedlist(head->next);
	head->next->next = head;
	head->next = NULL;
	return newhead;
	
}

int main()
{
	node* head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);

	//displayLinkedList(head);
	//cout << "Searching" <<search(head, 2);
	//deleteANode(head, 2);
	//deleteAtHead(head, 4);
	//node* reversed = reverse_k_numberOfLinkedlist(2,head);
	//cout << "reversed linked list is..\n";
	//displayLinkedList(reversed);
	makeACycle(head, 3);
	cout<<"detecting cycle...  "<<detectCycle(head) << endl;
	removeACycle(head);
	displayLinkedList(head);
	cout << "detecting cycle...  " << detectCycle(head) << endl;


}