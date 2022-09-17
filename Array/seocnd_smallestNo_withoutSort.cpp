#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[]={1,2,6,8,4,9,3};
	n=sizeof(arr)/sizeof(arr[0]);
	int m1,m2;
	int i;
	m1=m2=0;
	for(i=0;i<n;i++){
		if(m1<arr[i]){
			m2=m1;
			m1=arr[i];
		}
	}
		//int i;
	if(m2<arr[i] && arr[i]<m1){
		m2=arr[i];
	}
	cout<<m2;
	return 0;
}
