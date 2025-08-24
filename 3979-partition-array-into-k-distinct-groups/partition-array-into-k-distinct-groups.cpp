class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if (n%k!=0)return false;
        if(k==1)return true;
        unordered_map<int ,int> m;
        for (int x:nums)
        {
            m[x]++;
        }
        int g=n/k;

        for (auto &it:m)
        {
            if (it.second>g)return false;
        }
        return true;
    }
};