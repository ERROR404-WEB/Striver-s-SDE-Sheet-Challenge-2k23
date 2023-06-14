// https://www.codingninjas.com/codestudio/problems/day-13-print-permutations-string_8230703?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
void perm(string &s,vector<string>&v,int i)
{
    if(i>=s.size())
    {
        v.push_back(s);
        return ;
    }
    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        perm(s,v,i+1);
        swap(s[i],s[j]);
    }
}
vector<string> findPermutations(string &s) {
    
    vector<string>v;
    perm(s,v,0);
    return v;

}