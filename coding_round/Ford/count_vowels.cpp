//N=1 {a,e,i,o,u}=5
//N=2 {aa,ae,ai,ao,au,ee,ei,eo,eu,ii,io,iu,oo,ou,uu}=15

#include<iostream>
using namespace std;

  //method 1:

int count_vowels(int n){
   return ((n+1)*(n+2)*(n+3)*(n+4))/24;	
} 
/* method 2: 

int dis_vow(int n,int start){
	int count=0;
	if(n==0){
		return 1;
	}
	else{
	   for(int i=start;i<5;i++){
	   	count=count+dis_vow(n-1,i);
	   }	
	}
	return count;
}
int count_vowels(int n){
	return dis_vow(n,0);
} */
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<count_vowels(n);
	return 0;
}
