#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node * next;
	int flag;
};
void push(Node **head,int n){
	Node *newNode=new Node();
	newNode->data=n;
	newNode->flag=0;
	newNode->next=*head;
	*head=newNode;
}
//void dis(Node *n){
//	while(n!=NULL){
//		cout<<n->data<<" ";
//		n=n->next;
//	}
//}
bool duplicate(Node *n){
	while(n!=NULL){
		if(n->flag==1){
			return true;
		}
		else{
			n->flag=1;
			n=n->next;
		}
	}
}
int main(){
	Node *head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	head->next->next->next->next=head;
	if(duplicate(head)){
		cout<<"loop found";
	}
	else{
		cout<<"loop not found";
	}
	//dis(head);
	return 0;
}
