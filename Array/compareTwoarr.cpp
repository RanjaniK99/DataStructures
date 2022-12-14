// C++ program to find given two array
// are equal or not

// Returns true if arr1[0..n-1] and arr2[0..m-1]
// contain same elements.
#include <bits/stdc++.h>
using namespace std;
bool areEqual(int arr1[], int arr2[], int n, int m)
{
	
  if(n!=m) // If lengths of array are not equal means
    return false;
  
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);
  for(int i=0;i<n;i++){
  
  	if(arr1[i]!=arr2[i])
  	  return false;
		}
  return true;
}
// Driver Code
int main()
{
	int arr1[] = { 3, 5, 2, 5, 2 };
	int arr2[] = { 2, 3, 5, 5, 2 };
	int n = sizeof(arr1) / sizeof(int);
	int m = sizeof(arr2) / sizeof(int);

	if (areEqual(arr1, arr2, n, m))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

