#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > a) {

  unordered_map<int,int>m;
  int i,n=a.size(),maxx=0,sum=0;
  for(i=0;i<n;i++)
  {
      sum+=a[i];
      if(sum==0) maxx= i+1>maxx?i+1:maxx;
      else if(m[sum]!=0)
      {
        maxx=max(i+1-m[sum],maxx);
      }
      else m[sum]=i+1;
  }
  return maxx;

}
// https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge&leftPanelTab=1