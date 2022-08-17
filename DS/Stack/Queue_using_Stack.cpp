#include<iostream>
#define N 5
using namespace std;
int s1[N],s2[N];
int top1=-1,top2=-1,count=0;
bool isempty(){
	if(top1==-1 && top2==-1)
	   return true;
	else
	   return false;
}
bool isfull(){
  if(top1==N-1)
    return true;
  else
    return false;	
}
void push1(int x){
	if(isfull()){
	  cout<<"stack full"<<endl;
}
	  top1++;
	  s1[top1]=x;
	  //cout<<x<<" element is pushed in to stack"<<endl;
}
void push2(int x){
	if(isfull()){
	  cout<<"stack full"<<endl;
}
	top2++;
	s2[top2]=x;
	//cout<<x<<" element is pushed in to stack"<<endl;
}
int pop1(){
	if(isempty()){
		cout<<"queue is empty"<<endl;
	}
	return s1[top1--];
}
int pop2(){
	if(isempty()){
		cout<<"queue is empty"<<endl;
	}
	return s2[top2--];
}

void enqueue(int x){
	  push1(x);
	  count++;
}
void dequeue(){
	if(isempty()){
		cout<<"stack empty"<<endl;
	}
	else{
	
	for(int i=0;i<count;i++){
		int a;
		a=pop1();
		push2(a);
	}
	int b=pop2();
	cout<<b<<" element is poped"<<endl;
	count--;
	for(int i=0;i<count;i++){
		int x;
		x=pop2();
		push1(x);
		
	}
  }
}
void display(){
	for(int i=0;i<=top1;i++){
		cout<<s1[i]<<" ";
	}
	cout<<endl;
}
int main(){
	enqueue(5);
	enqueue(10);
	enqueue(15);
	enqueue(20);
	display();
	dequeue();
	dequeue();
	enqueue(25);
	display();
	return 0;
}
