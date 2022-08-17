#include<iostream>
using namespace std;
int main(){
	int r1,r2,c1,c2,i,j,a[10][10],b[10][10],mul[10][10];
	cout<<"enter row and column of 1st matrix:";
	cin>>r1>>c1;
	cout<<"enter row and column of 2nd matirx:";
	cin>>r2>>c2;
	if(c1!=r2){
		cout<<"c1 adn r2 need to be same:";
	}
	else{
	cout<<"enter elements of 1st matrix:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<"enter elements of matrix 1 "<<i<<j<<":";
			cin>>a[i][j];
		}
	}
	cout<<"enter elements of 2nd matrix:"<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
		   cout<<"enter elements of matrix 1 "<<i<<j<<":";
		   cin>>b[i][j];	
		}
	}
		for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
	      mul[i][j]=0;
	  }
}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
		   for(int k=0;k<c1;k++){
		   	   mul[i][j] +=a[i][k]*b[k][j];
		   }	
		}
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			cout<<mul[i][j]<<" ";
		   if(j==c2-1)
		   {
		   	   cout<<endl;
			   }
		}
	}}
	return 0;
}
