#include<iostream>
using namespace std;
int subsum(int arr[],int n,int sum){
	int start=0,curr_sum=arr[0];
	for(int i=1;i<n;i++){
		while(curr_sum>sum && start<i-1){
			curr_sum=curr_sum-arr[start];
			start++;
		}
		if(curr_sum==sum){
			cout<<"sum found at index "<<start<<"to"<<i-1;
			return 1;
		}
		if(i<n){
			curr_sum=curr_sum+arr[i];
		}
	}
	
	cout<<"sub array not found";
	return 0;
}
int main(){
	int n,arr[n],sum;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter sum:";
	cin>>sum;
	subsum(arr,n,sum);
	return 0;
}
