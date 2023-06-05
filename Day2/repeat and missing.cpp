#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	map<int,int>m;
    int a1=0,a2=0;
    for(int i=0;i<n;i++) m[a[i]]++;
    for(int i=1;i<=n;i++) 
    {
        if(m[i]==2) a1=i;
        if(!m[i]) a2=i;
        if(a1 and a2) return {a2,a1};
    }
    return {a2,a1};
	
}

// https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge