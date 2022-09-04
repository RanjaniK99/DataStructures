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
void dualsort(int arr[],int n){
	int b[10],c[10];
	int k=0,l=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			b[k]=arr[i];
			k++;
		}
		else{
			c[l]=arr[i];
			l++;
		}
	}
	sort(b,k);
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
	//cout<<endl;
	sort(c,l);
	
	for(int i=l-1;i>=0;i--){
		cout<<c[i]<<" ";
	}

}
int main(){
	int arr[]={5,3,2,93,12,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	dualsort(arr,n);
	return 0;
}
