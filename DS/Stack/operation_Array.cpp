#include<iostream>
using namespace std;
#define size 100
int s[size],top=-1;
int isFull(){
	if(top==size-1){
		return 1;
	}
	else 
	  return 0;
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else
	 return 0;
}
void push(int item){
	if(isFull()){
		cout<<"stack is full";
	}
	else{
		top++;
		s[top]=item;
		cout<<"element is"<< item <<"pushed in to stack"<<endl;
	}
}
int pop(){
	if(isEmpty()){
		cout<<"underflow";
	}
	else{
		int item=s[top--];
		return item;
	}
}
void peek(){
	cout<<"the peek(top) element is: "<<s[top]<<endl;
}
void display(){
	cout<<"the elements are:";
	for(int i=0;i<=top;i++){
		cout<<s[i];
	}
	cout<<endl;
}
int main(){
	//int top=-1;
	int item;
	while(1){
		cout<<"1.PUSH"<<endl;
		cout<<"2.POP"<<endl;
		cout<<"3.PEEK"<<endl;
		cout<<"4.DISPALY"<<endl;
		cout<<"5.EXIT"<<endl;
		int choice;
		cout<<"enter your chice:";
		cin>>choice;
		cout<<endl;
		switch(choice){
			case 1:{
				cout<<"enter item to insert";
				cin>>item;
				push(item);
				break;
			}
			case 2:{
				pop();
				cout<<item <<"poped from stack"<<endl;
				break;
			}
			case 3:{
				peek();
				break;
			}
			case 4:{
				display();
				break;
			}
			case 5:{
				exit(0);
				break;
			}
		}
	}
	return 0;
}
