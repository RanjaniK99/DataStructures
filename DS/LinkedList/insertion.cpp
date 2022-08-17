#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
void push(Node ** head,int data){     //insert at front
	Node *new_node=new Node();
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;   
}
void insert(Node * prev_node,int data,int pos){    //insert specific location
	Node * new_node=new Node();
	if(prev_node==NULL){
		cout<<"prev_node can't be null";
		return;
	}
	new_node->data=data;
//	new_node->next=prev_node->next;
//	prev_node->next=new_node;
    new_node->next=NULL;
    pos--;
    while(pos!=1){
      prev_node=prev_node->next;
	  pos--;	
	}
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
void append(Node **head,int data){    //insert at last
	Node *new_node=new Node();
	Node *last=*head;
	new_node->data=data;
	new_node->next=NULL;
	if(*head==NULL){
		*head=new_node;
		return;
	}

	while(last->next!=NULL){
		last=last->next;
	}
	last->next=new_node;
	return;
}
void printlist(Node *n){    //print the Linked List
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main(){
	Node *head=NULL;
	append(&head,2);
	push(&head,5);
	push(&head,7);
	append(&head,9);
	insert(head,6,4);
	cout<<"the list is: ";
	printlist(head);
	return 0;
}
