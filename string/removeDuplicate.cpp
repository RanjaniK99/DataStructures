#include<iostream>
using namespace std;
void removeDuplicate(string s){
	int l=s.length();
	string ans="";
	for(int i=0;i<l;i++){
	    bool flag=true;
		for(int j=i+1;j<l;j++){
			if(s[i]==s[j]){
				flag=false;
			}
		}
		 if(flag)
         ans=ans+s[i];
	}
	cout<<ans;
}
int main(){
	string s;
	cout<<"enter string:";
	cin>>s;
	removeDuplicate(s);
	return 0;
}

