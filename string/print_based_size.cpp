#include<iostream>
#include<string>
using namespace std;
void sorting(string s1[],int n){
	string temp;
	for(int i=1;i<n;i++){
		temp=s1[i];
		cout<<temp<<endl;
		int j=i-1;
		//cout<<j<<" ";
		while(j>=0 && temp.length()<s1[j].length()){
			s1[j+1]=s1[j];
			j--;
		}
		s1[j+1]=temp;
	}
}
void printStr(string s1[],int n){
	for(int i=0;i<n;i++){
		cout<<s1[i]<<" ";
	}
}
int main(){
	string s1[]={"hello" ,"world", "I" , "am" ,"here"};
	int n;
	//cout<<"enter string: ";
	//getline(cin,s1);
	n=sizeof(s1)/sizeof(s1[0]);
	sorting(s1,n);
	cout<<endl;
	printStr(s1,n);
	return 0; 
}
