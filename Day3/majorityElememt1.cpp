#include <bits/stdc++.h>

int findMajorityElement(int a[], int n) {
	unordered_map<int,int>m;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;
		if(m[a[i]]>n/2) return a[i];
	}
	return -1;
}

// https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge