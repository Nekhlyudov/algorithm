ass Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       unordered_map<int,int>right,left,count;
        int max1=-1;
        for(int i=0;i<nums.size();i++){
            if(!left.count(nums[i]))
               left[nums[i]]=i;
             right[nums[i]]=i;
             count[nums[i]]++;
            max1=max(max1,count[nums[i]]);
        }
        int rel=1e5+5;
        for(auto x=count.begin();x!=count.end();x++){
            if(x->second==max1){
                rel=min(rel,right[x->first]-left[x->first]+1);
            }
        }
        return rel;
    }
};
