// https://www.codingninjas.com/codestudio/problems/3sum_8230739?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>a, int n, int t) {

vector<vector<int>>ans;
int i,j,k;
sort(a.begin(),a.end());
for(i=0;i<n;i++)
{
	if(i>0 and a[i-1]==a[i]) continue;
	j=i+1;
	k=n-1;
	while(j<k)
	{
	int sum=a[i]+a[j]+a[k];
	if(sum>t)
	{
		k--;
	}
	else if(sum<t)
	{
		j++;
	}
	else{

          ans.push_back({a[i], a[j], a[k]});
          j++;
          while (a[j - 1] == a[j] and j < k)
            j++;
          k--;
          while (a[k + 1] == a[k] and j < k)
            k--;
        }
    }
}


return ans;
}