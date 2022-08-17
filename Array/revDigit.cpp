#include<iostream>
using namespace std;
int main(){
	int n,rev=0,a;
	cout<<"enter digit:";
	cin>>n;
	while(n!=0){
		a=n%10;
		rev=(rev*10)+a;
		n=n/10;
	}
	cout<<"Reverse of digit is: "<<rev;
	if(rev==n)
	  cout<<"palindrome";
	else
	  cout<<"Not palindrome";
	return 0;
}
