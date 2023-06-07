// https://leetcode.com/problems/4sum/description/


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int t) {
        
        long long int i,j,k,l,n=a.size();
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
        {
            if(i>0 and a[i]==a[i-1]) continue;
            for(j=i+1;j<n;j++)
            {
                if(j!=i+1 and a[j]==a[j-1]) continue;
                k=j+1;
                l=n-1;
                while(k<l)
                {
                    long long int sum=a[i];
                    sum+=a[j];
                    sum+=a[k];
                    sum+=a[l];
                    if(sum>t)
                    {
                        l--;
                    }
                    else if(sum<t)
                    {
                        k++;
                    }
                    else
                    {
                        ans.push_back({a[i],a[j],a[k],a[l]});
                        k++;
                        l--;
                        while(k<l and a[k]==a[k-1]) k++;
                        while(k<l and a[l]==a[l+1]) l--;
                    }
                }
            }
           

        }
         return ans;
    }
};