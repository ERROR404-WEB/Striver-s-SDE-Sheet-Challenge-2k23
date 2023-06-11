#include <bits/stdc++.h> 
void combi(vector<int>&a,vector<vector<int>>&ans,
vector<int>&temp,int i)
{
    ans.push_back(temp);
        if(i>=a.size())
        {
           return ;
        }
        for(int j=i;j<a.size();j++)
        {
            if(j>i and a[j]==a[j-1]) continue;
            temp.push_back(a[j]);
            combi(a,ans,temp,j+1);
            temp.pop_back();
        }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &a)
{
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    vector<int>temp;
    combi(a,ans,temp,0);

    return ans;
}
// https://www.codingninjas.com/codestudio/problems/subsets-ii_8230855?challengeSlug=striver-sde-challenge&leftPanelTab=1