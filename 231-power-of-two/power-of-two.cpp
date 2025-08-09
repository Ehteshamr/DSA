class Solution {
public:
    bool isPowerOfTwo(int n) {
    //    if(n<=0) return false;
    //      if(n==1) return true;
    //    if(n%2!=0)return false;
    //  // repeated division k last me 1 hi aata agr 2 ka power hai toh 
    //    return isPowerOfTwo(n/2);
//      if(n<=0)return false;
//    return ((n & (n-1))? false : true);
 if (n==0)return false;
 if (n==1)return true;
 if (n%2!=0)return false;
  return isPowerOfTwo(n/2);

     
    }
};