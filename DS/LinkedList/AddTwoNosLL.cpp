#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
void addnode(Node **head,int n){
	Node *newNode=new Node();
	newNode->data=n;
	//newNode->next=NULL;
	newNode->next=*head;
	*head=newNode;
}
void createLL(Node **head,int n){
	//cout<<n<<endl;
	while(n!=0){
		addnode(head,n%10);
		//cout<<n<<endl;
		n=n/10;
		//cout<<n;
	}
}
void reverseLL(Node **head){
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
Node* addition(Node **head1,Node **head2){
	Node *ptr1=(*head1);
	Node *ptr2=(*head2);
	Node (*head3)=NULL;
	int sum=0, carry=0;
	while(ptr1 || ptr2){
		int sum=0;
		if(ptr1)
		  sum=sum+ptr1->data;
		if(ptr2)
		  sum=sum+ptr2->data;
		sum=sum+carry;
		carry=sum/10;
		sum=sum%10;
		addnode(&head3,sum);
		if(ptr1)
		  ptr1=ptr1->next;
		if(ptr2)
		 ptr2=ptr2->next;
	}
	if(carry){
		addnode(&head3,carry);
	}
	return head3;
}
void printList(Node *n){
	while(n->next!=NULL){
		cout<<n->data<<"->";
		n=n->next;
	}
	cout<<n->data;
}
int main(){
	//Node *head=NULL;
//	int n;
//	cout<<"enter number: ";
//	cin>>n;
//	cout<<"linked list representation: ";
//	while(n!=0){
//		addnode(&head,n%10);
//		n=n/10;
//	}
    Node *head=NULL;
    Node *head1=NULL;
	Node *head2=NULL;
	Node *head3=NULL;
    int a,b;
    cout<<"enter num1: ";
    cin>>a;
    cout<<"enter num2: ";
    cin>>b;
    
    cout<<"linked list representation of num1: ";
    createLL(&head1,a);
	printList(head1);
	cout<<endl;
	cout<<"reverse linked list representation of num2: ";
	reverseLL(&head1);
	printList(head1);
	cout<<endl;
	cout<<"linked list representation of num2: ";
    createLL(&head2,b);
	printList(head2);
	cout<<endl;
	cout<<"reverse linked list representation of num2: ";
	reverseLL(&head2);
	printList(head2);
	cout<<endl;
	cout<<"Additon of 2 linked list: "; 
	head3=addition(&head1,&head2);
	printList(head3);
	return 0;
}
