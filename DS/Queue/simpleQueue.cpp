#include<iostream>
#define SIZE 5
using namespace std;
int item[SIZE],front=-1,rear=-1;
//class Queue{
//	public:
//		int item[SIZE],front,rear;
//		Queue(){
//			front=-1;
//			rear=-1;
//		}
//	
bool IsFull(){
	if(front==0 && rear==SIZE-1)
	  return 1;
	else
	   return 0;
}
bool IsEmpty(){
	if(front==-1)
	  return 1;
	else
	   return 0;
}
void enqueue(int element){
	if(IsFull()){
		cout<<"Queue is full !"<<endl;
	}
	else{
		if(front==-1){
		  front=0;
	}
		  rear++;
		  item[rear]=element;
		  cout<<element<<" is inserted in queue"<<endl;
	}
}
void dequeue(){
	int element;
	if(IsEmpty()){
		cout<<"Element is empty:"<<endl;
	
	}
	else{
		element=item[front];
		if(front>=rear){
			front=-1;
			rear=-1;
		}
		else{
			front++;
		}
		cout<<element<<" is deleted from queue"<<endl;
	}
}
void display(){
	if(IsEmpty()){
		cout<<"element is empty"<<endl;
	}
	
	for(int i=front;i<=rear;i++){
		cout<<item[i]<<" -> ";
	}
	cout<<endl;
}

int main(){
	//Queue q;
	cout<<"simple Queue implementation:"<<endl;
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	display();
	return 0;
}
