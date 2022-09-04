#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,num1,rem,power,res=0,count=0;
	cout<<"enter num:";
	cin>>num;
	num1=num;
	while(num1!=0){
		num1=num1/10;
		count++;
	}
	num1=num;
	while(num1!=0){
		rem=num1%10;
		power=round(pow(rem,count));
		res=res+power;
		num1=num1/10;
	}
	if(res==num){
		cout<<"It is a Armstrong number";
	}
	else{
		cout<<"OOPS it's not a Armstrong number";
	}
}
