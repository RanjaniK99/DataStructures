#include<iostream>
using namespace std;
void reverseString(string s){
	string x="",y="";
	int l=s.length()-1;
	while(l>=0){
		if(s[l]=='.'){
			x=x+y+'.';
			y="";
		}
		else{
			y=s[l]+y;
		}
		l--;
	}
	x=x+y;
	cout<<"reverse of the strings are: "<<x;
} 
int main(){
	string s;
	cout<<"enter string: ";
	cin>>s;
	cout<<endl;
	reverseString(s);
	return 0;
}
