// https://www.codingninjas.com/codestudio/problems/1214628?topList=striver-sde-sheet-problems

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& a, vector<int>& b, int n, int m) {
	
	int i=n-1,j=m-1,k=n+m-1;
	while(i>=0 and j>=0)
	{
		if(a[i]>=b[j])
		{
			a[k--]=a[i--];
		}
		else a[k--]=b[j--];
	}
	while(i>=0) a[k--]=a[i--];
	while(j>=0) a[k--]=b[j--];

	return a;
}