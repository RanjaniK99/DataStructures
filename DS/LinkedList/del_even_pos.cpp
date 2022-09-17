#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
void insert(Node **head,int item){
	Node *new_node=new Node();
	new_node->data=item;
	new_node->next=*head;
	*head=new_node; 
}
void del_even(Node *head){
	if(head!=NULL){
		Node* odd=head;
		Node* even=head->next;
		while(odd!=NULL && even!=NULL){
			odd->next=even->next;
			delete(even);
			odd=odd->next;
			if(odd!=NULL){
				even=odd->next;
			}
		}
	}
}
void print_Node(Node *n){
	while(n->next!=NULL){
		cout<<n->data<<" -> ";
		n=n->next;
	}
	cout<<n->data;
}
int main(){
	Node *head=NULL;
	insert(&head,20);
	insert(&head,10);
	insert(&head,63);
	insert(&head,33);
	insert(&head,70);
	insert(&head,40);
	insert(&head,80);
	del_even(head);
	print_Node(head);
	return 0;
}
