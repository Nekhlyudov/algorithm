class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int vis[50002];
        memset(vis,0,sizeof(vis));
        for(int i=0;i<nums.size();i++){
            vis[nums[i]]++;
        }
        vector<int>q;
        int max1=-1;
        for(int i=0;i<50002;i++){
            if(max1<vis[i]){
                max1=vis[i];
                q.clear();
                q.push_back(i);
            }
            else if(max1==vis[i]){
                 q.push_back(i);
            }
        }
        int lef=0;
        int rig=0;
        int rel=1e7;
        for(int i=0;i<q.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==q[i]){lef=j;break;}
            }
            for(int j=(int)nums.size()-1;j>=0;j--){
                if(nums[j]==q[i]){rig=j;break;}
            }
            rel=min(rig-lef+1,rel);
        }
        return rel;
    }
};
