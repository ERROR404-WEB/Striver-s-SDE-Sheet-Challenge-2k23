// https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int x=0;
	unordered_map<int,int>m;
	for(int i=0;i<n;i++) 
	{
		m[arr[i]]++;
		if(m[arr[i]]==2) return arr[i];
	}
	return -1;
	
}
