class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> pref(n);
        pref[0]=nums[0];
        for (int i=1;i<n;++i)
        {
            pref[i]=nums[i]+pref[i-1];
        }
       
       vector<int> ans(q.size());
        for (int i=0;i<q.size();++i)
        {
            int t=q[i];
            int l=0,h=n-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if (pref[mid]<=t)
                {
                    ans[i]=mid+1;
                    // search for rightmost 
                    l=mid+1;
                }
                else 
                {
                    h=mid-1;
                }
            }

        }
        return ans;
    }
};