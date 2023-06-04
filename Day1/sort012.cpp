// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
   //   Write your code here
   int z=0,o=0,t=0;
   for(int i=0;i<n;i++)
   {
      if(a[i]==1) o++;
      else if(a[i]==0) z++;
      else t++;
   }
   int i=0;
   while(z--) a[i++]=0;
   while(o--) a[i++]=1;
   while(t--) a[i++]=2;
}