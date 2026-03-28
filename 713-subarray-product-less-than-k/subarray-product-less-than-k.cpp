class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1)return 0;
        int i=0,j=0,count=0;
        int prod=1;
        while (j<nums.size())
        {
            prod*=nums[j];
            // if (prod<k)
            // {
            //   count+=j-i+1;
            // }
            while(prod>=k)
            {
                prod=prod/nums[i];
                i++;
                
            }
            count+=j-i+1;
            j++;
           
        }
        return count;
    }
};