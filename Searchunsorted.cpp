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
 } bool Search(Node* &head, int data)
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
 	int sear;
	cout <<"\nEnter element to be searched : ";
 	cin >> sear;
 	if(Search(head, sear))
 		cout << "Found \n";
 	else
 		cout << "not found \n";
 	return 0;
 }
