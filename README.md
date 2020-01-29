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
 
 void deleteatpush(Node* &head)
 { 
 	cout<< "Deleting from head :" << head->data << "\n";
 	Node* temp = head;
	head=head->next;
	delete temp;	
 }
 
 void deleteatappend(Node* &head)
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
 
 void deleteatmiddle(Node* &head, int pos)
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
 // DELETING THE KEY
 void deletethekey(Node* &head, int key)
 {
 	Node* temp=head, *prev;
 	while(temp!=NULL && temp->data != key)
 	{
 		prev = temp;
 		temp= temp->next;
	}
	if(temp==NULL)
		cout << "KEY NOT FOUND. \n";
	else
	{
	prev->next =  temp->next;
	cout<< "Deleteting element is " << temp->data << "\n";
	delete temp;
	}
 } 
 // DELETING THE LIST 
void deleteList(Node* &head)  
{  
   	Node* current = head;  
	Node* next;  
  
	while (current != NULL)  
	{  
	    next = current->next;  
	    free(current);  
	    current = next;  
	}
	head = NULL;
	cout<<"\nLIST IS DELETED.\n";  
	display(head);
}

int cal_len(Node* &head)
{
	Node* temp=head;
	int count=0;
	while(temp!=NULL)
	{
		count ++;
		temp=temp->next;
	}
	return count;	
}  

int get_nth_node(Node* &head, int index)
{
	index--;
	Node* current = head;
	int count =0;
	while(current != NULL)
	{
		if(count == index)
			return (current->data);
		count ++;
		current=current->next;
	}
	return (-1);
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
 	int ins, POS;
 	/*cout<<"\nENTER ELEMENT TO BE INSERTED IN THE LIST ALONG WITH POSITION.\n";
 	cin >> ins>> POS;
	Atmiddle(head,ins,POS);
	cout << "New List \n";
 	display(head);
	cout<< "\nPushing the element 10.";
	push(head, 10);
 	cout << "New List \n";
 	display(head);
 	int sear;
	cout <<"\nEnter element to be searched : ";
 	cin >> sear;
 	if(Search(head, sear))
 		cout << "Found \n";
 	else
 		cout << "not found \n";
 	deleteatpush(head);
 	cout << "New List \n";
 	display(head);
 	deleteatappend(head);
 	cout << "New List \n";
	display(head);
 	cout<<"\nENTER POSITION OF THE  ELEMENT TO BE DELETED IN THE LIST.\n";
 	cin >>POS;
	deleteatmiddle(head,POS);
	cout << "New List \n";
 	display(head);
 	cout<<"\nENTER THE KEY TO BE DELETED IN THE LIST.\n";
 	cin >>ins;
	deletethekey(head,ins);
	cout << "New List \n";
 	display(head);
 	cout<< "Deleting list.\n";
 	deleteList(head);
 	*/
 	//Length of list 
 	cout << "\nThe length of list is : "<<cal_len(head);
 	cout << "\nEnter the index to found the value of :";
	cin >> n;
	//Index from starting of link list.
	cout << "\nThe value at index "<<n << " is : "<<get_nth_node(head,n); 
	//Index from end of link list.
	cout << "\nThe value at index "<<n << " from end is : "<<get_nth_node(head,(cal_len(head)-n+1)); 
 	return 0;
 }
