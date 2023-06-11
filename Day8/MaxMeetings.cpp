#include <bits/stdc++.h>
bool cmp(const pair<int, pair<int, int>> &a,
         const pair<int, pair<int, int>> &b) {

  if (a.first < b.first)
    return true;

  else if (a.first > b.first)
    return false;

  else if (a.second.second < b.second.second)
    return true;

  else
    return false;
}

vector<int> maximumMeetings(vector<int> &s, vector<int> &e) {
    vector<pair<int,pair<int,int>>>v;
    int i,j,n=s.size(),prev=-1;
    for(i=0;i<n;i++)
    {
        v.push_back({e[i],{s[i],i+1}});
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>ans;
    ans.push_back(v[0].second.second);
    prev=v[0].first;
    for(i=1;i<n;i++)
    {
        if(v[i].second.first>prev)
        {
            ans.push_back(v[i].second.second);
            prev=v[i].first;
        }
       
    }
  
    return ans;
}

// https://www.codingninjas.com/codestudio/problems/maximum-meetings_8230795?challengeSlug=striver-sde-challenge&leftPanelTab=1