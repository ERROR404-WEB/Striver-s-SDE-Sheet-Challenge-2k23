#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &a)
{
    // Write your code here.
    vector<int>v;
    int n=a.size();
    map<int,int>m;
    for(auto i:a)
    {
        m[i]++;
    }
    for(auto i:m)
    if(i.second>n/3) v.push_back(i.first);
    return v;

}

// https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge