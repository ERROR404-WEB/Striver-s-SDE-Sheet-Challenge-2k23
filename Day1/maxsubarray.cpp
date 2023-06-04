// https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
long long maxSubarraySum(int a[], int n)
{
    long long i,maxx=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        maxx=max(sum,maxx);
        if(sum<0) sum=0;
    }
    return maxx;
}