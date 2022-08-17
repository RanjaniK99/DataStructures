//print leader it is always greater than the values on its right print all the possibilities
#include<iostream>
#include<stack>
using namespace std;
//int leader(int arr[],int n){
//	int max=arr[n-1];
//	cout<<max<<" ";
//	for(int i=n-2;i>=0;i--){
//		if(max<arr[i])
//		{
//			max=arr[i];
//			cout<<max<<" ";
//		}
//	}
//}
int leader(int arr[],int n){
	stack<int>s;
	s.push(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		if(arr[i]>s.top())
		    s.push(arr[i]);
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main(){
	int arr[]={3,5,1,9,7,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	leader(arr,n);
	return 0;
}

