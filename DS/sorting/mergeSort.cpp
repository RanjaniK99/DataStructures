#include<iostream>
using namespace std;
int merge(int arr[],int lb,int mid,int ub){
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[ub];
	while((i<=mid) && (j<=ub))
	{
		if(arr[i]<=arr[j]){
			b[k]=arr[i];
			i++;
		}
		else{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
    if(i>mid){
    	while(j<=ub){
    		b[k]=arr[j];
    		j++;
    		k++;
		}
	}
	else{
		b[k]=arr[i];
		i++;
		k++;
	}
	for(int k=lb;k<=ub;k++){
		arr[k]=b[k];
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
void MergeSort(int arr[],int lb,int ub){
	if(lb<ub){
		int mid=(lb+ub)/2;
		MergeSort(arr,lb,mid);
		MergeSort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}
int main(){
	int arr[]={1,6,3,9,0,4,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}
