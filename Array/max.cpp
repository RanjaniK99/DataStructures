#include<iostream>
using namespace std;
int max(int arr[],int n){
	int maxi=arr[0];
	for(int i=0;i<n;i++){
		if(maxi<arr[i])
		    maxi=arr[i];
	}
	return maxi;
}
int min(int arr[],int n){
	int mini=arr[0];
	for(int i=0;i<n;i++){
		if(mini>arr[i])
		    mini=arr[i];
	}
	return mini;
}
int main(){
	int arr[]={1,2,7,64,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<max(arr,n);
	cout<<endl;
	cout<<min(arr,n);
	return 0;
}
