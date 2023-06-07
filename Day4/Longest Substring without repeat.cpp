#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    unordered_map<char,int>m;
    int i=0,j=0,n=s.size(),maxx=0;
    for(i=0;i<n;i++)
    {
        m[s[i]]++;
        if(m.size()!=i-j+1)
        {
            m[s[j]]--;
            if(m[s[j]]==0) m.erase(s[j]);
            j++; 
        }
        else{
            maxx= i-j+1>maxx? i-j+1:maxx;
        }
    }
    return maxx;
}


// https://www.codingninjas.com/codestudio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge&leftPanelTab=1