#include<iostream>
using namespace std;
void order(int arr[],int n){
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high){
		switch(arr[mid]){
			case 0:
			 swap(arr[low++],arr[mid++]);
			 break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid],arr[high--]);
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
	order(arr,n);
	cout<<"after sorting:";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}
