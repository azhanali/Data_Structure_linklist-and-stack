# linklist
link list at problem

// CODE

 #include <bits/stdc++.h>
 using namespace std;
 // Creating Node  
 class Node
 {
 	public :
 		int data ;
 		Node * next;
 	
 //Constructor to initialise data
	Node (int item)
 	{
		data = item;
 		next = NULL;
	 }
 };

//Inserting elements in starting of the node 
 
 void push(Node* &head, int data)
 {
 	Node* new_node = new Node (data);
 	new_node->next = (head);
 	head = new_node;
 }

// Inserting elements in the middle of the node
 
 void Atmiddle(Node* &head, int data, int pos)
 {
 	pos--;
 	Node* new_node = new Node (data);
 	Node* temp=head;
// Find node after which we have to insert the new element

 	while(pos!=1)
 	{
 		temp= temp->next;
 		pos--;
	}
	new_node->next =  temp->next;
	temp->next = new_node;
}

// Displaying all the elements of the node
 
 void display(Node* &head)
 {
 	Node* temp=head;
 	while (temp != NULL)
 	{
 		cout << temp->data << " ";
 		temp = temp->next;
	 }
 }
 
// Searching the element in the node.

 bool Search(Node* &head, int data)
 {
 	Node* temp = head;
 	while(temp != NULL)
 	{
 	 	if(temp->data == data)
 	 		return true;
 		temp= temp->next;
	}
	return false;
 }

// Deleting element from the head.
 
 void deleteatpush(Node* &head)
 { 
 	Node* temp = head;
	head=head->next;
	delete temp;	
 }

// Main function.

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
 
	Atmiddle(head,6,3);

 	cout << "\n New List \n";

 	display(head);

 	int sear;
	cout <<"\n Enter element to be searched : ";
 	cin >> sear;

 	if(Search(head, sear))
 		cout << "Found \n";
 	else
 		cout << "not found \n";

 	deleteatpush(head);

 	display(head);

 	return 0;
 } 