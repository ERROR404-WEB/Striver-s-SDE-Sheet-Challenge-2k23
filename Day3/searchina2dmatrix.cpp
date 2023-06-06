bool searchMatrix(vector<vector<int>>& a, int t) {
        int i,n=a.size(),m=a[0].size(),j;
        for(i=0;i<n;i++) if(a[i][0]<=t and a[i][m-1]>=t) break;

        if(i>=n) return false;
        for(j=0;j<m;j++)
            if(a[i][j]==t) return true;
        return false;
}

// https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge