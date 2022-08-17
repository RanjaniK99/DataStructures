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
int maxWater(int arr[],int n){
	int i,j;
	int res=0;
	for(i=0;i<n;i++){
		//left max
		int left=arr[i];
		for(j=0;j<i;j++){
			left=max(left,arr[j]);
		}
		//right max
		int right=arr[i];
		for(j=i+1;j<n;j++){
			right=max(right,arr[j]);
		}
		res=res+(min(left,right)-arr[i]);
	}
	cout<<"result is: "<<res;
}
int main(){
	int n,arr[n];
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	maxWater(arr,n);
	return 0;
}
