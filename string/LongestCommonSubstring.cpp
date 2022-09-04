#include<iostream>
#include<algorithm>
using namespace std;
void LSubString(string s1,string s2){
	int l1,l2;
	l1=s1.length();
	l2=s2.length();
	int i,j,ans=0;
	for(i=0;i<l1;i++){
		for(j=0;j<l2;j++){
			int k=0;
			while((i+k)<l1 && (j+k)<l2 && s1[i+k]==s2[j+k]){
				k=k+1;
			}
			ans=max(ans,k);
		}
	}
	cout<<"LCS is: "<<ans;
}
int main(){
	string s1,s2;
	cout<<"enter string 1: ";
	cin>>s1;
	cout<<"enter string 2: ";
	cin>>s2;
	LSubString(s1,s2);
	return 0;
}

