#include<iostream>
using namespace std;
//int fact(int n){
//	long fact=1;
//    for(int i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	cout<<fact;
//}
int fact(int n){
	//long fact=1;
	if(n==0)
	 return 1;
	 else{
	 	return n*fact(n-1);
	 }
}
int main(){
	int a;
	cout<<"enter fact:";
	cin>>a;
	cout<<fact(a);
	return 0;
}
