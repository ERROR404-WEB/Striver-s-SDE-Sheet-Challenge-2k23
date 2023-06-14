bool check(vector<vector<int>>&a,int i,int j)
{
    int ii=i,jj=j;
    while(jj>=0)
    {
        if(a[ii][jj--]==1) return false;
    }
    jj=j;
    while(ii>=0 and jj>=0)
    {
        if(a[ii--][jj--]==1) return false;
    }

    ii=i,jj=j;

    while(ii<a.size() and jj>=0)
    {
        if(a[ii++][jj--]==1) return false;
    }
    return true;
}
void queen(vector<vector<int>>&ans,vector<vector<int>>&a,int i)
{
    if(i>=a.size())
    {
            vector<int>t;
            for(auto i:a)
            {
                for(auto j:i) t.push_back(j);
            }
            ans.push_back(t);
            return ;
    }
    for(int j=0;j<a.size();j++)
    {
        if(check(a,j,i))
        {
            a[j][i]=1;

            queen(ans,a,i+1);
            a[j][i]=0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {

    vector<vector<int>>a(n,vector<int>(n,0));
    vector<vector<int>>ans;
    queen(ans,a,0);
    return ans;

}

// https://www.codingninjas.com/codestudio/problems/759332?topList=striver-sde-sheet-problems&leftPanelTab=1