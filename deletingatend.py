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
 void deleteatend(Node* &head)
 {
 	Node* temp = head, *prev;
 	while(temp->next != NULL)
 	{
 		prev = temp;
 		temp = temp->next;
 	}
	cout<< "\nDeleting from tail :" << temp->data << "\n";
	prev->next = NULL;
	delete temp;
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
  	deleteatend(head);
	cout << "New List  \n";
 	display(head);
  return 0;
 }
© 2020 GitHub, Inc.
