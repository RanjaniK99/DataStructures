//Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.
//
//Examples:  
//
//Input: arr[] = {7, 10, 4, 3, 20, 15}, k = 3 
//Output: 7
//
//Input: arr[] = {7, 10, 4, 3, 20, 15}, k = 4 
//Output: 10 

#include<iostream>
#include<algorithm>
using namespace std;
kth_small(int arr[],int n,int k){
    sort(arr,arr+n);
	return (arr[k-1]);
}
int main(){
//	int arr[]={12,43,5,7,10,34};
//	int n=sizeof(arr)/sizeof(arr[0]);
    int n,arr[n];
    cout<<"enter n:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0; i<n;i++){
    	cin>>arr[i];
	}
	int k;
	cout<<"enter k:";
	cin>>k;
	cout<<"kth smallest element is:"<<kth_small(arr,n,k);
	return 0;
}
