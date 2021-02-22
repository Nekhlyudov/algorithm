class Solution {
public:
  // O(nlogn)
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())return 0;
        sort(nums.begin(),nums.end());
        int ff=-1;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1)count++;
            else if(nums[i]==nums[i-1])continue;
            else {
                ff=max(ff,count);
                count=1;}
            
        }
        ff=max(ff,count);
        return ff;
    }
};
