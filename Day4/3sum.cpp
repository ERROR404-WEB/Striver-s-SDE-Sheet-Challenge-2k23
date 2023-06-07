class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&a) 
    {

        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        int i,j,k,n=a.size();
        for(i=0;i<n;i++)
        {
            if(i>0 and a[i]==a[i-1]) continue;
            j=i+1,k=n-1;
            while(j<k)
            {
                int sum=a[i]+a[j]+a[k];
                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else{
                    ans.push_back({a[i],a[j],a[k]});
                    j++;
                    k--;
                    while(j<k and a[j]==a[j-1]) j++;
                    while(j<k and a[k]==a[k+1]) k--;
                }
            }
        }
        return ans;
        
    }
};

// https://leetcode.com/problems/3sum/description/