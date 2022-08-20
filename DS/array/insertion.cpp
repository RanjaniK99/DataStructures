#include<iostream>
using namespace std;
void insertion(int a[],int n){
	int pos,item;
	cout<<"enter item:";
	cin>>item;
	cout<<"enter pos:";
	cin>>pos;
	if(pos<=0 || pos>n+1){
		cout<<"can't insert!";
	}
	else{
	  for(int i=n;i>pos-1;i--){
	  	a[i]=a[i-1];
	  }
	  a[pos-1]=item;
	  n++;	
}
   for(int i=0;i<n;i++){
   	cout<<a[i];
   }
		
}
/* insert at last
   int pos,item;
   cout<<"enter item:";
   cin>>item;
   n++;
   a[n-1]=item; */
   

/* insert at begining	
   cout<<"enter item:";
	cin>>item;
	  for(int i=n;i>0;i--){
	  	a[i]=a[i-1];
	  }
	  a[0]=item;
	  n++; */  
int main(){
	int n,a[n];
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertion(a,n);
	return 0;
}

