#include<bits/stdc++.h>
#define N 100
using namespace std;
char s[N];
int top=-1;
bool Isempty(){
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
	if(Isempty())
	 cout<<"stack is empty";
	else{
	   x=s[top--];
	   return x;	
	}
}

bool balance(string exp){
	for(int i=0;i<exp.length();i++){
		if(Isempty()){
		  push(exp[i]);
	}
	else if((s[top]=='(' && exp[i]==')') ||(s[top]=='[' && exp[i]==']') ||(s[top]=='{' && exp[i]=='}')){
	  pop();
    }
    else{
    	push(exp[i]);
	}
	}
	if(Isempty()){
		return true;
	}
	return false;
}
int main(){
	string exp;
	cout<<"enter exp: ";
	cin>>exp;
	if(balance(exp)){
		cout<<"balanced";
	}
	else{
		cout<<"not balanced";
	}
	return 0;
}
