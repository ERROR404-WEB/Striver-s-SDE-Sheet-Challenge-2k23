#include <bits/stdc++.h> 
#define ll long long
long getTrappedWater(long *a, int n){
    ll pre[n]={0},suf[n]={0},i;
    pre[0]=a[0],suf[n-1]=a[n-1];
    for(i=1;i<n;i++)
    {
        if(a[i]>pre[i-1]) pre[i]=a[i];
        else pre[i]=pre[i-1];
    }
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>suf[i+1]) suf[i]=a[i];
        else suf[i]=suf[i+1];
    }

   int ans=0;
   for(i=0;i<n;i++)
   {
       ans+=min(pre[i],suf[i])-a[i];
   }

    return ans;
}

// https://www.codingninjas.com/codestudio/problems/trapping-rain-water_8230693?challengeSlug=striver-sde-challenge&leftPanelTab=1