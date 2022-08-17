//Sample Input
//
//abcd
//ef
//Sample Output
//
//4 2
//abcdef
//ebcd af
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    char a,b;
    cin>>s1;
    cin>>s2;
    int l1,l2;
    l1=s1.length();
    l2=s2.length();
    cout<<l1<<" "<<l2<<endl;
    cout<<s1+s2<<endl;
    a=s2[0];
    b=s1[0];
    s1[0]=a;
    s2[0]=b;
    cout<<s1<<" "<<s2;
    
    return 0;
}
