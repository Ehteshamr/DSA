class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long m=nums[nums.size()-1]-nums[0];
        return m*k;
    }
};