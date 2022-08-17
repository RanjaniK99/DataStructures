#include<iostream>
using namespace std;
int main(){
	int r,c,i,j,a[10][10],b[10][10],d[10][10];
	cout<<"enter row:";
	cin>>r;
	cout<<"enter column:";
	cin>>c;
	cout<<"enter elements of 1st matrix:"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"enter elements of matrix 1 "<<i<<j<<":";
			cin>>a[i][j];
		}
	}
	cout<<"enter elements of 2nd matrix:"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		   cout<<"enter elements of matrix 1 "<<i<<j<<":";
		   cin>>b[i][j];	
		}
	}
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
	      d[i][j]=a[i][j]+b[i][j];
	  }
}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		   cout<<d[i][j]<<" ";
		   if(j==c-1)
		   {
		   	   cout<<endl;
			   }	
		}
	}
	return 0;
}
