#include<iostream>
#include<string.h>
#define N 100
using namespace std;
char s[N],infix[N],postfix[N];
int top=-1;
bool isEmpty(){
	if(top==-1)
	  return true;
	else
	  return false; 
}
bool isFull(){
	if(top==N-1)
	  return true;
	else
	  return false;
}
void push(char x){
	if(isFull())
	  cout<<"stack is full";
	else{
		top++;
		s[top]=x;
	}
}
char pop(){
	char x;
	if(isEmpty())
	 cout<<"stack is empty";
	else{
	   x=s[top--];
	   return x;	
	}
}
int space(char c){
	if(c==' ' || c=='\t')
	  return 1;
	else
	   return 0;
}
int precedence(char c){
	switch(c){
		case '^':
			return 3;
			break;
		case '+':
		case '-':
			return 1;
			break;
		case '*':
		case '/':
			return 2;
			break;
		default:
			return 0;
	}
}
void Topostfix(){
	char symbol;
	char next;
	int j=0;
	//cout<<infix<<" "<<strlen(infix);
	for(int i=0;i<strlen(infix);i++){
	
		symbol=infix[i];
		if(!space(symbol))
		  switch(symbol){
		  	case '(':{
				push(symbol);
		  		break;
			  }
		  	case ')':{
		  		next=pop();
				while(next!='('){
					postfix[j++]=next;
					next=pop();
				}
		  		  break;
			  }
		  	case '+':
		  	case '-':
		  	case '*':
		  	case '/':
		  		{		  
		  		while(!isEmpty() && precedence(s[top])>=precedence(symbol)){
		  			postfix[j++]=pop();
				  }
				push(symbol);
				break;
				}
			default:
				postfix[j++]=symbol;
}}
			while(!isEmpty())
			   postfix[j++]=pop();
	
}
void print_exp(){
	cout<<"Postfix expression is:";
	puts(postfix);
	cout<<endl;
}
int main(){
	cout<<"Enter expression: ";
	gets(infix);
	Topostfix();
	print_exp();
	return 0;
}
