#include<iostream>
#include<algorithm>
using namespace std;
void anag(string s1,string s2){
	int count=0;
   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
   string ans="";
	for(int i=0;i<s1.length();i++){
	    bool flag=true;
		for(int j=i+1;j<s1.length();j++){
			if(s1[i]==s1[j]){
				flag=false;
			}
		}
		 if(flag)
                   ans=ans+s1[i];
	}
	//cout<<ans;

    for(int i=0;i<s2.length();i++){
    	for(int j=0;j<ans.length();j++){
    		if(s2[i]==ans[j]){
    			count++;
    			
			}
		}
	}
	cout<<s1.length()-count;
}
int main(){
	string s1,s2;
	cout<<"s1:";
	cin>>s1;
	cout<<"s2:";
	cin>>s2;
	anag(s1,s2);
	return 0;
}



