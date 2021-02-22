// 为啥都能在 队列中
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>mul;
        deque<int>max1;
        deque<int>min1;
        int siz=nums.size();
        int l=0;
        int r=0;
        int rel=-1;
        while(r<siz){
             while(!max1.empty()&&max1.back()<nums[r]){
                   max1.pop_back();
             }
             while(!min1.empty()&&min1.back()>nums[r]){
                  min1.pop_back();
             }
             min1.push_back(nums[r]);
              max1.push_back(nums[r]);
             while(max1.front()-min1.front()>limit){
                  if(max1.front()==nums[l]){
                     max1.pop_front();
                  }
                  if(min1.front()==nums[l]){
                      min1.pop_front();
                  }
                  l++;
             }
             rel=max(rel,r-l+1);
             r++;
        }
        return rel;


    }
};
