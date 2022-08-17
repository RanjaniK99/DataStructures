#include<iostream>
#include<algorithm>
using namespace std;
void minprod(int arr1[],int arr2[],int n){
	long tot=0;
	sort(arr1,arr1+n);
	sort(arr2,arr2+n);
	
	for(int i=0;i<n;i++){
		tot =tot+arr1[i]*arr2[n-i-1];
	}
	cout<<"min product is :"<<tot;
}
int main(){
  int n,arr1[n],arr2[n];
  cout<<"enter n:";
  cin>>n;
  cout<<"enter element 1:";
  for(int i=0;i<n;i++){
  	cin>>arr1[i];
  }	
  cout<<"enter element 2:";
  for(int i=0;i<n;i++){
  	cin>>arr2[i];
  }	
  minprod(arr1,arr2,n);
  return 0;
}
