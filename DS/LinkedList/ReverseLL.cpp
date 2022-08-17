#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
void push(Node **head,int ele){
	Node *newNode=new Node();
	newNode->data=ele;
	newNode->next=*head;
	*head=newNode;
}
void printList(Node *n){
	while(n->next!=NULL){
		cout<<n->data<<"->";
		n=n->next;
	}
	cout<<n->data;
}
void reverse_LL(Node **head){
	Node *Next=NULL;
	Node *prev=NULL;
	while((*head)!=NULL){
		Next=(*head)->next;
		(*head)->next=prev;
		prev=(*head);
		(*head)=Next;
	}
	 (*head)=prev;
}
int main(){
	Node *head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	reverse_LL(&head);
	printList(head);
	return 0;
}
