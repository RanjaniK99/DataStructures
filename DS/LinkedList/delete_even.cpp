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
void del_node(Node **head,int key){
	Node *temp=*head;
	Node *prev=NULL;
	if(temp != NULL && temp->data==key){
		*head=temp->next;
		//delete temp;
		return;
	}
	else{
	
	while(temp!=NULL && temp->data!=key){
		prev=temp;
		temp=temp->next;
	}
		if(temp==NULL){
			return;
		}
		prev->next=temp->next;
	//	delete temp;
	
}
}
void del_even(Node **head){
	Node *ptr=*head;
	while(ptr!=NULL){
		if(ptr->data % 2==0)
			del_node(head,ptr->data);
			ptr=ptr->next;
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
	insert(&head,10);
	insert(&head,63);
	insert(&head,33);
	insert(&head,70);
	insert(&head,40);
	insert(&head,80);
	del_even(&head);
	print_Node(head);
	return 0;
}
