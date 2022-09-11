#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //int count=0;
};
void push(Node **head,int n){
    Node *newNode=new Node();
    newNode->data=n;
    newNode->next=*head;
    *head=newNode;
    //count++;
}
int getlen(Node *head){
    int count=0;
    Node *c=head;
    while(c!=NULL){
        count++;
        c=c->next;
    }
    return count;
}
void mid(Node *head){
    int l=getlen(head);
    Node *t=head;
    int mid=l/2;
    cout<<mid;
    cout<<endl;
    while(mid){
        t=t->next;
        mid--;
    }
    cout<<t->data;
}
int main(){
    Node *head=NULL;
    push(&head,10);
    push(&head,29);
    push(&head,30);
    push(&head,19);
    push(&head,40);
    
    //del(&head,29);
    cout<<getlen(head);
    cout<<endl;
    mid(head);
    return 0;
}
