#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int swapped=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
			  swap(arr[j],arr[j+1]);
			swapped=1;
		}
	
		if(swapped==0){
			break;
		}
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
	BubbleSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
