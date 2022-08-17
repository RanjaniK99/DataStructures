#include<iostream>
#define N 5
using namespace std;
int front=-1;
int rear=-1;
int item[N];
bool isempty(){
	if(front==-1 && rear==-1){
		return true;
	}
	else{
		return false;
	}
}
bool isfull(){
	if(front==0 && rear==N-1){
		return true;
	}
	if(front==(rear+1)%N){
		  return true;
     }
	
	else
	  return false;
}
void enqueue(int x){
	if(isfull()){
		cout<<"queue is full";
	}
	else {
		if(front==-1){
			front=0;
		}
		  
		  rear=(rear+1)%N;  //can't increament dirctly rear becoz it neet to go 0 index after n
		  item[rear]=x;
		  cout<<x<<" is inserted in queue"<<endl;
		  
	}
}
void dequeue(){
  if(isempty()){
  	cout<<"queue is empty";
  }	
  else if(rear==front){
  	   front=-1;
  	   rear=-1;
  }
  else{
  	cout<<item[front]<<" is deleted from queue"<<endl;
  	front=(front+1)%N;
  }
}
void display(){
	for(int i=front; i!=rear;i=(i+1)%N){
		cout<<item[i]<<"-> ";
	}
	cout<<item[rear];
	cout<<endl;
	//while(i!=rear){
//	item[i];
//    }
//    cout<<item[rear];
}
int main(){
	enqueue(5);
	enqueue(6);
	enqueue(7);
	enqueue(8);
	enqueue(9);
	display();
	dequeue();
	dequeue();
	enqueue(10);
	enqueue(11);
    display();	
	return 0;
}

