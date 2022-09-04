#include<iostream>
#include<string>
using namespace std;
void revstring(string s){
	int l,end,start;
	l=s.length();
	end=l-1;
	for(int i=l-1;i>=0;i--){
		if(s[i]==' ' || i==0){
			if(i==0){
				start=0;
			}
			else{
				start=i+1;
			}
			for(int j=start;j<=end;j++){
				cout<<s[j];
			}
			cout<<" ";
			end=i-1;
		}
	}
}
int main(){
	string s;
	cout<<"enter string:";
	getline(cin,s);
	revstring(s);
	return 0;
}
