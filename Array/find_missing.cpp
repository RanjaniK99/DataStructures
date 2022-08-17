#include<iostream>
using namespace std;
void missing(int arr[],int n){
	int tot=1;
	for(int i=2;i<=n+1;i++){
		tot=tot+i;
		tot=tot-arr[i-2];
	}
	cout<<"missing no is:"<<tot;
}
int main(){
	int n,arr[n];
	cout<<"enter size:";
	cin>>n;
	cout<<"enter array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	missing(arr,n);
	return 0;
}
