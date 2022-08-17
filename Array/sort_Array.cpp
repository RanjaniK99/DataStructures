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
int main(){
	int n,arr[n];
	cout<<"enter n:";
	cin>>n;
	cout<<"enter elememnts:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,n);
	cout<<"sorted element is:";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}
