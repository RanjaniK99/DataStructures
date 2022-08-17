// C++ program to find equilibrium
// index of an array
#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int i, j;
	int leftsum, rightsum;

	/* Check for indexes one by one until
	an equilibrium index is found */
	for (i = 0; i < n; ++i)
	{	

		/* get left sum */
		leftsum = 0;
		for (j = 0; j < i; j++)
			leftsum += arr[j];

		/* get right sum */
		rightsum = 0;
		for (j = i + 1; j < n; j++)
			rightsum += arr[j];

		/* if leftsum and rightsum
		are same, then we are done */
		if (leftsum == rightsum)
			return i;
	}

	/* return -1 if no equilibrium
	index is found */
	return -1;
}

// Driver code
int main()
{
	int arr[] = {1,3,5,2,2} ;
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << equilibrium(arr, arr_size);
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)

//#include<iostream>
//using namespace std;
//int equi(int arr[],int n){
//	int left,right;
//	for(int i=0;i<n;i++){
//		left=0;
//		for(int j=0;j<i;j++)
//			left=left+arr[j];
//		right=0;
//		for(int j=i+1;j<n;j++)
//			right=right+arr[j];
//		if(left==right)
//			return i;
//	}
//	return -1;
//}
//int main(){
//	int arr[]={1,3,5,2,2} ;
//	int n=sizeof(arr)/sizeof(arr[0]);
//	cout<<"Equilibrium is: "<<equi(arr,n);
//	return 0;
//}
