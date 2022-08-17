#include<iostream>
#include<algorithm>
using namespace std;
void LSubString(string s1,string s2){
	int l1,l2;
	l1=s1.length();
	l2=s2.length();
	int i,j,ans=0;
	int d[l1+1][l2+1];
	for(i=0;i<l1+1;i++){
		for(j=0;j<l2+1;j++){
			if(i==0 ||j==0){
				d[i][j]=0;
			}
		}
	}
	for(i=1;i<l1+1;i++){
		for(j=1;j<l2+1;j++){
			if(s1[i-1]==s2[j-1]){
				d[i][j]=1+d[i-1][j-1];
				ans=max(ans,d[i][j]);
			}
			else{
				d[i][j]=0;
			}
		}
	}
	cout<<"LCS is:"<<ans;
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
