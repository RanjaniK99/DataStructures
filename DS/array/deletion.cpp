#include<iostream>
using namespace std;
void deletion(int a[],int n){
	int pos;
	cout<<"enter pos:";
	cin>>pos;
	if(pos<=0 || pos>n+1){
		cout<<"Invalid!";
	}
	else{
	  for(int i=pos-1;i<n-1;i++){
	  	a[i]=a[i+1];
	  }
	  n--;	
}    
      
   	  /* delete at end
		 n--; */
		 
	  /*delete at begining
	  for(int i=0;i<n-1;i++){
	  	a[i]=a[i+1];
	  }
	  n--; */	

   for(int i=0;i<n;i++){
   	cout<<a[i];
   }
		
}

int main(){
	int n,a[n];
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	deletion(a,n);
	return 0;
}
