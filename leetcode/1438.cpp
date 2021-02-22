class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>mul;
        int siz=nums.size();
        int l=0;
        int r=0;
        int rel=-1;
        while(r<siz){
             mul.insert(nums[r]);
             while(*mul.rbegin()-*mul.begin()>limit){
                  mul.erase(mul.find(nums[l++]));
             }
             rel=max(rel,r-l+1);
             r++;
        }
        return rel;


    }
};
