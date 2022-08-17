#include<iostream>
//#include<string>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
bool anag(string a, string b){
   	int l1=a.length();
   	int l2=b.length();
   	if(l1 !=l2){
   		return false;
	   }
	   //cout<<l1;
	   //cout<<l2;
	   sort(a.begin(),a.end());
	   sort(b.begin(),b.end());
	   //cout<<a;
	   //cout<<b;
	   for(int i=0;i<l1;i++){
	   	 if(a[i]!=b[i]){
	   	 	  return false;
			}
	   }
	   return true;
}
int main(){
	string a,b;
	cout<<"enter string 1:";
	cin>>a;
	cout<<"enter string 2:";
	cin>>b;
	if(anag(a,b)){
		cout<<"Yes it is Anagram!";
	}
	else{
		cout<<"No it is not a Anagram";
	}
	return 0;
}
