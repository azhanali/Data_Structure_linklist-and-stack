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
 
 void insertathead(Node* &head, int data)
 {
 	Node* new_node = new Node (data);
 	if(head!=NULL)
 	{   new_node->next=head;
	 	head->prev = new_node->next;	
	}
 	head = new_node;
 }
void display(Node* &head)
 {
 	Node* temp=head;
 	while (temp != NULL)
 	{
 		cout <<temp->prev<<" " <<temp->data << " "<< temp->next<< " "<< temp<<endl;
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
 		insertatend(head,x);
	}
	cout<< "\n\n";
 	display(head);
  return 0;
  }
