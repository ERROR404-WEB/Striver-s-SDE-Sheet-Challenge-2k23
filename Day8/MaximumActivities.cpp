vector<pair<int,int>>v;
    int i,j,c=1,n=s.size();
    for(int i=0;i<n;i++)
    {
        v.push_back({e[i],s[i]});
    }
    sort(v.begin(),v.end());
    int pre=v[0].first;
    for(i=1;i<n;i++)
    {
        if( v[i].second >=  pre )
        {
            c++;
            pre=v[i].first;
        }
    }
    return c;

// https://www.codingninjas.com/codestudio/problems/1062712?topList=striver-sde-sheet-problems&leftPanelTab=0