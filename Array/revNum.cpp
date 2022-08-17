#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
	cout<<"enter the elements:";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Reverse of the elements are:";
	for(int i=n-1;i>=0;i--){
		cout<<arr[i];
	}
	return 0;
}
