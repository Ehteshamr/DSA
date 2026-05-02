class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
       int mx=INT_MIN;int sum=0;
       for (int i=0;i<n;++i)
       {
        sum+=nums[i];
        mx=max(sum,mx);
        // agar summ negative hogya toh usko 0 update krdo kyunki wo useless hai,mtlb subarray agle element se restart hoga
        if (sum<0){sum=0;}
       }   
       return mx;  
    }
};