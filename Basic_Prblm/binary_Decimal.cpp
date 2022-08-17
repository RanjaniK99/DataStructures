#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i=0,dec=0,rem;
	long n;
	cout<<"enter the binary no:";
	cin>>n;
	while(n!=0){
		rem=n%10;
		n=n/10;
		dec=dec+rem*pow(2,i);
		i++;
	}
	cout<<"the decimal format is: "<<dec;
	return 0;
}
