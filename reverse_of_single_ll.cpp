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

void reverse(Node* &head)
{
  Node *prevNode, *curNode;
  if(head != NULL) {
    prevNode = head;
    head = head->next;
    curNode = head;
    prevNode->next = NULL;
    while(head!=NULL){
      head = head->next;
      curNode->next = prevNode;
      prevNode = curNode;
      curNode = head;
    }
    head = prevNode;
  }
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
 	int n; cin >> n;
 	for(int i=0;i<n;i++)
 	{
 		int x;
 		cin >>x;
 		append(head,x);
	 }
   cout<<"\nOriginal linklist: ";
   display(head);
   reverse(head);
   cout<<"\nReversed linklist: ";
   display(head);
   return 0;
 }
