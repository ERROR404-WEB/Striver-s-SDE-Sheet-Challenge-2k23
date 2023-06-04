// https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &a){
     int i,j,n=a.size(),maxx=0,minn=a[0];
    for(i=1;i<n;i++)
    {
        maxx=max(maxx,a[i]-minn);
        minn=min(minn,a[i]);
        
    }
    return maxx;
}