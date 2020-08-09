#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int x){
		data = x;
		left=right=NULL;
	}
};
class treefunc{
	public:
		bool treeContinuous(Node* ptr){
			if(ptr == NULL)
				return true;
			if (ptr->left == NULL && ptr->right == NULL)
				return true;
			if (ptr->left == NULL)
				return (abs(ptr->data - ptr->right->data) == 1) && treeContinuous(ptr->right);
			if(ptr->right == NULL)
				return (abs(ptr->data - ptr->left->data) == 1) && treeContinuous(ptr->left);
			return (abs(ptr->data - ptr->left->data) ==1) && abs(ptr->data - ptr->left->data) == 1 && treeContinuous(ptr->right) && treeContinuous(ptr->left);
		}
};
int main(){

	#ifndef ONLINE_JUDGE
  	freopen("C:/Users/Azhan/Desktop/input.txt", "r", stdin);
  	freopen("C:/Users/Azhan/Desktop/output.txt", "w", stdout);
  	#endif

  	treefunc t;
  	Node *root = new Node(3); 
    root->left        = new Node(2); 
    root->right       = new Node(4); 
    root->left->left  = new Node(1); 
    root->left->right = new Node(3); 
    root->right->right = new Node(5); 
    t.treeContinuous(root)?  cout << "Yes" : cout << "No"; 
    return 0; 
}