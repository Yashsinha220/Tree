#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node * left;
	Node * right ;

	Node(){

	}
	Node(int val){
		this->data=val;
		this->left=NULL;
		this->right=NULL;
	}
};

void inorder(Node * root){
	if(root==NULL) return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main(){
	Node * root = new Node(8);
	Node  * first = new Node(10);
	Node * secodn = new Node(12);
	Node * third = new Node(15);


	root->left=first;
	root->right=secodn;
	first->left=third;

	inorder(root);




	return 0;

}