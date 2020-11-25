#include <bits/stdc++.h>
using namespace std;
 
class Node
{
 public :
 	int data ;
 	Node * next;
 	
 Node (int item)
 {
	data = item;
 	next = NULL;
	}
};

void append(Node* &head, int new_data) 
{  
	Node* new_node = new Node(new_data); 

	Node *temp = head;  
	if (head == NULL) 
	{ 
		head = new_node; 
		return; 
	} 

	while (temp->next != NULL) 
		temp = temp->next; 

	temp->next = new_node; 
	return; 
} 
 
 void display(Node* &head)
 {
 	Node* temp=head;
 	while (temp != NULL)
 	{
 		cout << temp->data << " ";
 		temp = temp->next;
	 }
 }

 int main()
 {
 	Node *head =NULL; 
 	int n;
 	cout <<"ENTER THE ELEMENTS: ";
 	cin >> n;
 	for(int i=0;i<n;i++)
 	{
 		int x;
 		cin >>x;
 		append(head,x);
	 }
 	display(head);
 return 0;
 }
