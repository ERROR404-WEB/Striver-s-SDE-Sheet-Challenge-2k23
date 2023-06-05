// https://www.codingninjas.com/codestudio/problems/699917?topList=striver-sde-sheet-problems

vector<vector<int>> mergeIntervals(vector<vector<int>> &a)
{
    vector<vector<int>>v;
    sort(a.begin(),a.end());
  
    int i,j,start=a[0][0],end=a[0][1];
    for(i=0;i<a.size();i++)
    {
        if(a[i][0]>end)
        {
            v.push_back({start,end});
            start=a[i][0];
            end=a[i][1];
        }
        else if(a[i][1]>end)
        {
            end=a[i][1];
        }
    }
    v.push_back({start,end});
    return v;
}
