#include<iostream>
using namespace std;
int main(){
	int n=10;
//	cout<<"enter n:";
//	cin>>n;
//	cout<<"enter price:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
     int arr[10]={40,43,42,41,50,60,70,10,100,120};
	int i=0;
	while(i<n-1){
	while((i<n-1) && arr[i+1]<=arr[i])
		i++;
		if(i==n-1){
			   cout<<"no profit";
				break;
		}
	
		int b; 
		b=i++;
		while((i<n) && (arr[i]>=arr[i-1]))
		i++;
		int c;
		c=i-1;
		cout<<"("<<b<<" "<<c<<")";
		cout<<endl;
	}
	return 0;
}
