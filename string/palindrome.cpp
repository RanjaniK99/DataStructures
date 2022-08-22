#include<iostream>
using namespace std;
bool palin(string s){
	int l=s.length();
	bool flag =true;
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			flag=false;
		}}
		if(flag){
		    return true;
		}
		else{
		    return false;
		}
}
int main(){
  string s;
  cout<<"enter string: ";
  cin>>s; 
  if(palin(s))
    cout<<"yes";
  else
  cout<<"No";
  return 0;
}
