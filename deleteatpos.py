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
  void display(Node* &head)
 {
 	Node* temp=head;
 	while (temp != NULL)
 	{
 		cout << temp->data << " ";
 		temp = temp->next;
	 }
 }
 void delete_at_pos(Node* &head, int pos)
 {
	int POS=pos;
 	Node* temp=head, *prev;
 	while(pos!=1)
 	{
 		prev = temp;
 		temp= temp->next;
 		pos--;
	}
	prev->next =  temp->next;
	cout<< "Deleteting element at position "<<POS<< " is " << temp->data << "\n";
	delete temp;
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
 cout<<"Enter the position of element to be deleted.\n";
 cin >> n;
 delete_at_pos(head,n);
 cout << "New List \n";
 display(head);
 	return 0;
  }
