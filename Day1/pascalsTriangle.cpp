//https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
#define ll long long 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<ll>>a;
    int i,j;
    for(i=0;i<n;i++)
    {
      vector<ll>b(i+1,1);
      for(j=1;j<i;j++)
      {
        b[j]=a[i-1][j-1]+a[i-1][j];
      }
      a.push_back(b);
    }
    return a;
}
