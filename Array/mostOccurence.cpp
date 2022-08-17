//#include<iostream>
//using namespace std;
//int co(int arr[],int n){
//	int max_count=0;
//	int maxi;
//		for(int i=0;i<n;i++){
//		int count=0;
//		for(int j=0;j<n;j++){
//			if(arr[i]==arr[j]){
//			   count++;	
//			}
//			if(count>max_count){
//			  max_count=count;
//			  maxi=arr[i];
//		}
//		}
//	}
//	cout<<"max occur is"<<maxi;
//	//rerurn maxi;
//}
//int main(){
//	int arr[]={1,2,3,2,3,2,2,3,6};
//	int n=sizeof(arr)/sizeof(arr[0]);
//    co(arr,n);
//    //cout<<co(arr,n);
//	return 0;
//}	
//	
//  	
#include<iostream>
#include<algorithm>
using namespace std;
int co(int arr[],int n){
	int max=1,cur=1,res;
	sort(arr,arr+n);
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			cur++;
		}
		else{
			cur=1;
		}
		if(cur>max){
			max=cur;
			res=arr[i-1];
		}
	}
	cout<<res;
}
int main(){
   int arr[]={1,2,3,2,3,2,3,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
    co(arr,n);	
    return 0;
}	
	
	
	
	
	
	
	
	
	
	

 
