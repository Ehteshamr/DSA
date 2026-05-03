class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mp;int n=nums.size();
        for (int x:nums)
        {
            mp[x]++;
        }
        int ans;
        for (int i=0;i<n;i++)
        {
            if(mp[nums[i]]>floor(n/2))ans=nums[i];
        }

        return ans;
    }
};