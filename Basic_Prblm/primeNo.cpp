#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the positive no:";
	cin>>a;
	bool prime=true;
	if(a==0 || a==1){
		prime=false;
	}
	for(int i=2;i<a/2;i++){
		if(a%i==0){
			prime=false;
			break;
		}
	}
	if(prime)
	  cout<<a<<" is a prime no!";
	else
	  cout<<a<<" is not a prime no";
	return 0;
}
