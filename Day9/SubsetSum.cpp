#include <bits/stdc++.h> 

void combi(vector<int>&a,vector<int>&ans,int i,int sum)
{
    if(i>=a.size())
    {
        ans.push_back(sum);
        return ;
    }
    combi(a,ans,i+1,sum+a[i]);
    combi(a,ans,i+1,sum);
}
vector<int> subsetSum(vector<int> &a)
{
    vector<int>ans;
   combi(a,ans,0,0);
   sort(ans.begin(),ans.end());
   return ans;
}
// https://www.codingninjas.com/codestudio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&leftPanelTab=1