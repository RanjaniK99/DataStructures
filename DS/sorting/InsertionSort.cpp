#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
} 
int main(){
	int n,arr[n];
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Before sorting elements are:";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
	cout<<"After sorting elements are:";
	InsertionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
