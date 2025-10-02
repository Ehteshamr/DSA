class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
     
        int fo=-1,lo=-1;

        while(l<=h)
        {   
               int mid=l+(h-l)/2;
            if (nums[mid]==target)
            {
                fo=mid;
                h=mid-1;
            }
            else if (nums[mid]<target)
            {
                l=mid+1;
            }
            else 
            {
                h=mid-1;
            }
        }



// Search for last occurence 
    l=0;h=nums.size()-1;
         while(l<=h)
        {   
               int mid=l+(h-l)/2;
            if (nums[mid]==target)
            {
                lo=mid;
                l=mid+1; // search for better answer 
            }
            else if (nums[mid]<target)
            {
                l=mid+1;
            }
            else 
            {
                h=mid-1;
            }
        }


     return {fo,lo};
    }
};