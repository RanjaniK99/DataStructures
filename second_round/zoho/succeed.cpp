#include<iostream>
using namespace std;
void addele(int arr[],int l){
	int i=l;
	if(arr[i-1]<9){
		arr[i-1]=arr[i-1]+1;
		return ;	
	}
		arr[i-1]=0;
		i--;
		addele(arr,l);
	}
//    int b=n%10;
//    int n=n/10;

int main(){
	int l,arr[l];
	cout<<"enter size: ";
	cin>>l;
	cout<<"enter elements:";
	for(int i=0;i<l;i++){
		cin>>arr[i];
	}
	addele(arr,l);
	for(int i=0;i<l;i++){
		cout<<arr[i];
	}
	return 0;
}
