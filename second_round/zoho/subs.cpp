#include<iostream>
using namespace std;
int subsum(int arr[],int n,int sum){
	bool flag=true;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(arr[i]+arr[j]==sum){
    		  cout<<arr[i]<<" "<<arr[j]<<endl;
    		  flag=false;
		}
	}
	}
	if(flag){
		cout<<"no pair exist";
	}
	return 0;
}

int main(){
	int arr[]={1,2,3,-4,5,6,-7,8,0,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum;
	cout<<"enter sum:";
	cin>>sum;
	subsum(arr,n,sum);
	return 0;
}
