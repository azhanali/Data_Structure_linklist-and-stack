#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
}
*top=NULL;
class Stack {
	public:
		void push(int x)
		{
			Node *t;
			if(t==NULL)
		 	printf("stack is full\n");
			else
			{
			 t->data=x;
			 t->next=top;
			 top=t;
			}
		}
	public:
		int pop()
		{
			Node *t;
			int x=-1;
			if(top==NULL)
		 	printf("Stack is Empty\n");
			else
		 	{
		 	t=top;
		 	top=top->next;
		 	x=t->data;
		 	free(t);
		 	}
			return x;
		}
	public:	
		void Display()
		{
			Node *p;
		 	p=top;
			while(p!=NULL)
		 	{
			printf("%d ",p->data);
		 	p=p->next;
		 	}
			printf("\n");
		}
};

// Driver program to test above functions 
int main() 
{ 
	class Stack s;
	bool condition = true;
	while(condition){
		cout << "\n1. Press 1 to push in the Stack.";
		cout << "\n2. Press 2 to pop out of the Stack.";
		cout << "\n3. Press 3 to dispaly the Stack.";
		cout << "\n4. Press 0 to exit.\n";
		int option;
		cin >> option;
		switch(option){
			case 1 :
				int no;
				cout<< "\nEnter element to be pushed to the stack : ";
				cin >> no;
				s.push(no);
				break;
			
			case 2:
				cout << "\n" << s.pop() << " Popped from stack"; 
				break;
			
			case 3:
				s.Display();
				break;
			
			case 0 : 
				condition = false;
				break;
				
		}
	}
	return 0; 
} 

