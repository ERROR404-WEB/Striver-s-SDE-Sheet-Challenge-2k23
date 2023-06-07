#include <bits/stdc++.h> 

int subarraysXor(vector<int> &a, int k)
{
    int i,c=0,xr=0,n=a.size();
    unordered_map<int,int>m;
    m[xr]++;
    for(i=0;i<n;i++)
    {
        xr^=a[i];
        int x=xr^k;
        c+=m[x];
        m[xr]++;
    }
    return c;
}

// https://www.codingninjas.com/codestudio/problems/1115652?topList=striver-sde-sheet-problems&leftPanelTab=1