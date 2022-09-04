#include<iostream>
using namespace std;
void sort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
}
int triplet(int arr[],int n){
	long res;
	sort(arr,n);
	res=arr[n-1]*arr[n-2]*arr[n-3];
	cout<<res;
}

int main(){
	int arr[]={-10,-3,-5,-6,-20};
	int n=sizeof(arr)/sizeof(arr[0]);
	triplet(arr,n);
	return 0;	
}
