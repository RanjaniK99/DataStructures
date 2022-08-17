#include<iostream>
using namespace std;
int main(){
	int r,c,i,j,a[10][10],transpose[10][10];
	cout<<"row: ";
	cin>>r;
	cout<<"column: ";
	cin>>c;
	cout<<"enter matrix"<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter matrix "<<i<<j<<": ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			transpose[j][i]=a[i][j];
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<transpose[i][j]<<" ";
			if(j==c-1){
				cout<<endl;
			}
		}
	}
}
