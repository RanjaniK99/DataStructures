#include<iostream>
using namespace std;
void insert(int n,int a[],int ele,int pos){
	cout<<"enter element to insert:";
	cin>>ele;
	cout<<"enter position:";
	cin>>pos;
	n++;
	if(pos<=0 || pos>n+1)
	  cout<<"Invalid operation";
	else{
		for(int i=n-1;i>pos-1;i--){
		  a[i]=a[i-1];
        }
        a[pos-1]=ele;
        
	}
	cout<<"element successfully inserted";
	cout<<endl;
}
int del(int n,int a[],int ele,int pos){
	cout<<"enter element to delete:";
	cin>>ele;
	cout<<"enter position:";
	cin>>pos;
	if(pos<=0 || pos>n)
	  cout<<"Invalid operation";
	else{
		for(int i=pos-1;i<n-1;i++){
		  a[i]=a[i+1];
    }
        n--;
	}
	cout<<"element successfully deleted";
}
void search(int n,int a[]){
	int num;
	cout<<"enter the element:";
	cin>>num;
    for(int i=0;i<n;i++)
      {
      	if(a[i]==num)
      	  cout<<"element found at location"<<i<<endl;
	  }
}
int main(){
	int n,a[n],ele,pos;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int choice;
	while(1){
	
	cout<<"enter the operation:";
	cout<<endl;
	cout<<"1.Insertion /t 2.Deletion /t 3.Search(Traverse) /t 4.Display /t 5.Exit";
	cout<<endl;
	cout<<"enter option:";
	cin>>choice;
	switch(choice){
		case 1:
			insert(n,a,ele,pos);
			break;
		case 2:
			del(n,a,ele,pos);
			break;
		case 3:
			search(n,a);
			break;
		case 4:
			cout<<"the elements are:";
			for(int i=0;i<=n;i++){
				cout<<a[i];
			}
			break;
		case 5:
			exit(1);
			break;
	}
}
return 0;
}
