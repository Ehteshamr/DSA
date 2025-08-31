class Solution {
public:
     void move(vector<int>& nums,int i,int sum, int &count,int t)
     {  
       
        if (sum==t && i==nums.size())count++; 
        if (i==nums.size())return ;
       // sum+=nums[i];
        move(nums,i+1,sum+nums[i],count,t);
       // sum=sum-(2*nums[i]);
        move(nums,i+1,sum-nums[i],count,t);
     }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0,count=0,i=0;
        move(nums,i,sum,count,target);
        return count;
    }
};