#include <bits/stdc++.h> 
int uniquePaths(int n, int m) {
	vector<vector<int>>dp(n,vector<int>(m,1));
	int i,j,sum=0;
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	return dp[n-1][m-1];
}

// https://www.codingninjas.com/codestudio/problems/unique-paths_8230802?challengeSlug=striver-sde-challenge