class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> st(nums.begin(),nums.end());
        // uniue elements in sorted order , so 
        vector<int> ans;
        //  for(auto it=st.end()-1;it>=st.end()-k && st.begin();it--)
        //  {
        //      ans.push_back(*it);
        //  }
        auto it=st.end();
        for (int i=0;i<k && i<st.size();++i)
        {   --it;
            ans.push_back(*it);
        }
         return ans;
    }
};