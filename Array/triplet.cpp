//find how many triplet will give the sum
#include<iostream>
#include<algorithm>
using namespace std;
int triplet(int arr[],int n,int sum){
	int l,r;
	int count=0;
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
	  l=i+1;
	  r=n-1;
	  while(l<r){
	  	if(arr[i]+arr[l]+arr[r]==sum){
	  		//cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
	  		count++;
	  		cout<<count;
	  		return 1;
		  }
	  	   
	  	else if(arr[i]+arr[l]+arr[r]<sum)
	  	   l++;
	  	else
	  	   r--;
	  }
}
return -1;
}
int main(){
	int arr[]={3,5,1,9,7,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum;
	cout<<"enter sum: ";
	cin>>sum;
	triplet(arr,n,sum);
	return 0;	
}
