//enter k:2  print which no occur k times
//1
#include<iostream>
using namespace std;
int count_k(int arr[],int n,int k){
   for(int i=0;i<n;i++){
   	  int count=0;
   	  for(int j=0;j<n;j++){
		 
   	     if(arr[i]==arr[j])
   	         count++;
   	     }
   	    if(count==k)
   	       return arr[i];
   }
   return -1;
}
int main(){
	int n,k;
//	cout<<"enter n:";
//	cin>>n;
//	cout<<"enter elements:";;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
    int arr[]={1,2,3,2,1};
    n=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter k:";
	cin>>k;
	cout<<count_k(arr,n,k);
	return 0;
}


//
//#include<iostream>
//using namespace std;
//int count_k(int arr[],int n,int k){
//	int count=1;
//   for(int i=1;i<n;i++){
//   	if(arr[i]==arr[i-1]){
//   		count++;
//	   }
//	   else{
//	   	count=1;
//	   }
//	   if(count==k){
//	   	return arr[i];
//	   }
//   	  
//} return -1;
//}
//int main(){
//	int n,k;
//    int arr[]={1,2,3,2,1,2};
//    n=sizeof(arr)/sizeof(arr[0]);
//	cout<<"enter k:";
//	cin>>k;
//	cout<<count_k(arr,n,k);
//	return 0;
//}
