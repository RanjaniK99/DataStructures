#include<iostream>
using namespace std;
int main(){
	int n,a[n];
	cout<<"enter size of the array:";
	cin>>n;
	cout<<"enter the elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int num,pos;
	cout<<"enter the elements to insert:";
	cin>>num;
	cout<<"enter position:";
	cin>>pos;
	if(pos<=0 || pos>n+1)
	  cout<<"Invalid";
	for(int i=n-1;i<pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	n++;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}



/* ----------------deleting an element----------------*/
//#include<iostream>
//using namespace std;
//int main(){
//	int n,a[n];
//	cout<<"enter size of the array:";
//	cin>>n;
//	cout<<"enter the elements:";
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int num,pos;
//	cout<<"enter the elements to delete:";
//	cin>>num;
//	cout<<"enter position:";
//	cin>>pos;
//	if(pos<=0 || pos>n)
//	  cout<<"Invalid";
//	for(int i=pos-1;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	//a[pos-1]=num;
//	n--;
//	for(int i=0;i<n;i++){
//		cout<<a[i];
//	}
//	return 0;
//}
