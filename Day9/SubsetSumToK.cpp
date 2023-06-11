#include<bits/stdc++.h>
void combi(vector<int>&a,vector<vector<int>>&ans,vector<int>&temp,int i,
int sum)
{
    if(i==a.size())
    {
     if(sum==0)
     {
         ans.push_back(temp);
     }
     return ;
    }
     
     temp.push_back(a[i]);
    combi(a,ans,temp,i+1,sum-a[i]);
     temp.pop_back();
     combi(a,ans,temp,i+1,sum);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> a, int n, int k)
{
    vector<vector<int>>ans;
    vector<int>temp;
    combi(a,ans,temp,0,k);
    return ans;
}

// https://www.codingninjas.com/codestudio/problems/759331?topList=striver-sde-sheet-problems&leftPanelTab=0