 #include <bits/stdc++.h>
 using namespace std;
 
 class Node
 {
 	public :
 		int data ;
 		Node * next;
 		Node * prev;
 	
 	Node (int item)
 	{
		data = item;
 		next = NULL;
 		prev = NULL;
	 }
 };
 void display(Node* &head)
 {
 	Node* temp=head;
 	while (temp != NULL)
 	{
 		cout <<temp->prev<<" " <<temp->data << " "<< temp->next<< " "<< temp<<endl;
 		temp = temp->next;
	 }
}

void insertatend(Node* &head, int new_data) 
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
	new_node->prev=temp->next;
	return; 
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
 		insertatend(head,x);
	}
	cout<< "\n\n";
 	display(head);
  return 0;
  }
