#include<iostream>
#define R 3
#define C 3
using namespace std;
void spiral(int m,int n,int mat[R][C]){
	int k=0,l=0;
	while(k<m && l<n){
		for(int i=l;i<n;i++){
			cout<<mat[k][i];
		}
		k++;
		for(int i=k;i<m;i++){
			cout<<mat[i][n-1];
		}
		n--;
		if(k<m){
			for(int i=n-1;i>=l;i--){
				cout<<mat[m-1][i];
			}
			m--;
		}
			if(l<n-1){
				for(int i=m-1;i>=k;i--){
					cout<<mat[i][l];
				}
				l++;
			}
			
		}
	}
int main(){
	int mat[R][C]={{1,2,3},{3,4,5},{7,8,9}};
	spiral(R,C,mat);
	return 0;
}
