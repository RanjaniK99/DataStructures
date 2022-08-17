#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,n,c;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter n:";
	cin>>n;
	c=a*pow(b,n-1);
	cout<<"the element is:"<<c;
	return 0;
}
//t1=a1
//t2=a1*r^(n-1)

