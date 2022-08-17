#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter decimal: ";
	cin>>n;
	long dec=0;
	int i=1,rem;
	while(n!=0){
		rem=n%2;
		n=n/2;
		dec=dec+rem*i;
		i=i*10;
	}
	cout<<"the binary form is: "<<dec;
}
