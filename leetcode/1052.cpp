/*
    先统计最开始那个窗口的变化。
    我们发现，后面只需要统计  最新的和最后那个就可以了。
    也有题目用滑动窗口写，思想是一样的。
 * */
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int sum=0;
        for(int i=0;i<grumpy.size();i++){
            if(!grumpy[i])sum+=customers[i];
        }
        int ans=sum;
        for(int i=0;i<X;i++){
            if(grumpy[i])
            sum+=customers[i];
        }
        ans=max(ans,sum);
        
        if(grumpy[0])sum-=customers[0];// 这个我想了好一会
        for(int i=1;i<grumpy.size()-X+1;i++){
            if(grumpy[i+X-1])sum+=customers[i+X-1];   
            ans=max(sum,ans);
            if(grumpy[i])sum-=customers[i];
        }
        return ans;
    }
};
