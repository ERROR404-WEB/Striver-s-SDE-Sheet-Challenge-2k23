#include <bits/stdc++.h> 
bool pal(string s)
{
    string ss=s;
    reverse(ss.begin(),ss.end());
    return s==ss;
}
void part(string &s,vector<vector<string>>&v,vector<string> &temp,int i)
{
    if(i>=s.size())
    {
        v.push_back(temp);
        return ;
    }
    for(int j=i;j<s.size();j++)
    {
        string ss=s.substr(i,j-i+1);
        if(pal(ss)) 
        {
            temp.push_back(ss);
            part(s,v,temp,j+1);
            temp.pop_back();
        }
    }
}



vector<vector<string>> partition(string &s) 
{
    vector<vector<string>>v;
    vector<string>t;
    part(s,v,t,0);
    return v;
}

// https://www.codingninjas.com/codestudio/problems/799931?topList=striver-sde-sheet-problems&leftPanelTab=1