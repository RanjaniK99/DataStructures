//a=1,b=2,n=4,   output=16(1+3+5+7)
#include<iostream>
using namespace std;
int main(){
	int a,b,n,c;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter n:";
	cin>>n;
	c=a+((n-1)*(b-a));
	cout<<"the element is:"<<c;
	return 0;
}
//find nth term sum=n/2(2a+(n-1)d);   d=b-a
/*check is it is AP or not
main(){
if(check(arr,n))
  cout<<"yes";
  else
   cout<<"no";
   return 0;
}
bool check(arr[],n){
if(n==1)
  return true;
}
sort(arr,arr+n);
int d=arr[1]-arr[0];
for(int i=2;i<n;i++){
  if(arr[i]-arr[i-1]!=d)
    return false;
}
return true;
*/


