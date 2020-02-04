#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 class node{
 public:
 	int data;
 	node * next;

 	node(int d)
 	{
 		data=d;
 		next=NULL;
 	}
 };
   
   void push(node * &head, int data)
   {

   	 node * n= new node(data);
   	 n->next=head;
   	 head=n;
   } 

   void pop(node * &head)
   {

   	  node * temp=NULL;
   	  if(head==NULL)
   	  	cout<<"Stack is empty"<<endl;
   	  temp=head;
   	  head=head->next;
   	  delete temp;
   }
   
   void top(node * &head)
   {
   	if(head==NULL)
   		cout<<"Stack is empty\n";
    else{
          cout<<"Top element of stack is : "<<head->data<<"\n";
        }
    }


  
  void DISplay(node  * &head)
  {
      node * temp=head;
      vector<int> v;

      while(temp!=NULL)
      {
        v.push_back(temp->data);
        temp=temp->next;
      }
     
      for(auto i:v)
      {
      	cout<<i<<" \n";
      }
  }
 
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    node * head= NULL;
    push(head, 12);
    push(head, 45);
    push(head, 65);
    pop(head);
    push(head, 89);
    DISplay(head); 
    top(head);
    
    


	return 0;
  }
