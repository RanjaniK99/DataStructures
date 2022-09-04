#include<iostream>
using namespace std;
void removeDuplicate(int arr[],int n){
	int b[10],k=0;
	//int count=0;
	for(int i=0;i<n;i++){
		bool flag=true;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				flag=false;
				//count++;
			}
		}
		
		if(flag){
		b[k]=arr[i];
		k++;
		}
	}
	//cout<<count;
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
	for(int i=0;i<n-k;i++){
		cout<<"_"<<" ";
	}
}
int main(){
	int arr[]={0,0,1,2,2,1,0,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	removeDuplicate(arr,n);
	return 0;
}
/* int n,arr[n];
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}*/
/*
stack<int> s;
	s.push(arr[0]);
	for(int i=0;i<n;i++){
		if(s.top()!=arr[i]){
			s.push(arr[i]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<s.top()<<" ";
		s.pop();
	}
//	for(int i=n;i>0;i--){
//		cout<<arr[i];
//	}*/
