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
	if(head == NULL)
	{
		return;
	}

	
	Node* temp = head;
	stack<int> s1;

	while(temp!=NULL)
	{
			
		if(temp->data%2==0){

			Node* curr = temp;
				while(temp!=NULL && temp->data%2==0)
				{
					s1.push(temp->data);
					curr = temp;
					temp = temp->next;
				}  

						
				while(!s1.empty())
				{
					cout<<s1.top()<<" ";
					s1.pop();
				}

				temp = curr;
		}

		else{
			cout<<temp->data<<" ";					
		}

		temp = temp->next;
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
   reverse(head);
   return 0;
 }
