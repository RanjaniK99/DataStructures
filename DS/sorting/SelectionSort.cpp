#include<iostream>
using namespace std;
//void swap(int &a, int &b){
//	int temp=a;
//	a=b;
//	b=temp;
//}
void SelectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;i<n;i++){
			if(arr[j]<arr[min])
			  min=j;
		}
		swap(arr[min],arr[i]);
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
	SelectionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
