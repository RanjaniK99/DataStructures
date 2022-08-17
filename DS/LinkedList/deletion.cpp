#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node * next;
};
void push(Node **head,int data){
	Node * new_node=new Node();
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
}
void deleteNode(Node **head,int key){
	Node *temp=*head;
	Node *prev=NULL;
	if(temp != NULL && temp->data==key){  //head
		*head=temp->next;
		delete temp;
		return;
	}
	else{
		while(temp!=NULL && temp->data!=key){  
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL){    //key not found 
			return;
		}
		prev->next=temp->next;
		delete temp;
		
	}
}
void printlist(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main(){
	Node *head=NULL;
	push(&head,5);
	push(&head,6);
	push(&head,7);
	push(&head,8);
	push(&head,9);
	cout<<"the created list is:";
	printlist(head);
	deleteNode(&head,6);
	cout<<endl;
	cout<<"After deletion the list is:";
	printlist(head);
	return 0;
}
