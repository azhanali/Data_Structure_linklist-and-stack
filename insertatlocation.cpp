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
 
 void push(Node* &head, int data)
 {
 	Node* new_node = new Node (data);
 	new_node->next = (head);
 	head = new_node;
 }
 void Atmiddle(Node* &head, int data, int pos)
 {
 	pos--;
 	Node* new_node = new Node (data);
 	Node* temp=head;
 	while(pos!=1)
 	{
 		temp= temp->next;
 		pos--;
	}
	if (temp == NULL)
	{
		temp->next = new_node; 
		return; 
	}
	else
	{
	new_node->next =  temp->next;
	temp->next = new_node;
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
 	int n;
 	cout <<"ENTER THE ELEMENTS: ";
 	cin >> n;
 	for(int i=0;i<n;i++)
 	{
 		int x;
 		cin >>x;
 		push(head,x);
	 }
 	display(head);
 	int ins, POS;
 	cout<<"\nENTER ELEMENT TO BE INSERTED IN THE LIST ALONG WITH POSITION.\n";
 	cin >> ins>> POS;
	Atmiddle(head,ins,POS);
	cout << "New List  \n";
 	display(head);
  return 0;
 }
