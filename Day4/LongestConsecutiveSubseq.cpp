#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &a, int n) {
    
    if(!n) return 0;
    int maxx=1,i;
    unordered_set<int>s;
    for(auto i:a) s.insert(i);
    for(auto i:s)
    {
        if(s.find(i-1)==s.end())
        {
            int j=i+1,c=1;
            while(s.find(j)!=s.end())
            {
                j++;
                c++;
            }
            maxx= c>maxx?c:maxx;
        }
    }
    return maxx;
    
}

// https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge&leftPanelTab=1