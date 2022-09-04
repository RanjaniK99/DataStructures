#include<iostream>
using namespace std;
void rotate(int arr[],int n,int d){
	int p=1;
	while(p<=d){
		int last=arr[0];
		for(int i=0;i<n;i++){
			arr[i]=arr[i+1];
		}
		arr[n-1]=last;
		p++;
	}
}
int main(){
	int n;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int d;
	cout<<"enter no of position to rotate:";
	cin>>d;
	rotate(arr,n,d);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
	
}
