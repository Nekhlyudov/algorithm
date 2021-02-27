ass Solution {
public:
    int get_kthelement(vector<int>&nums1,vector<int>&nums2,int k){
        int index1=0;
        int index2=0;i
        while(1){
             if((int)nums1.size()==index1)return nums2[min(index2+k-1,(int)nums2.size()-1)];
             if((int)nums2.size()==index2)return nums1[min(index1+k-1,(int)nums1.size()-1)];
             int indexnow1=min(index1+k/2-1,(int)nums1.size()-1);
             int indexnow2=min(index2+k/2-1,(int)nums2.size()-1);
             if(k==1)return min(nums1[index1],nums2[index2]);
             if(nums1[indexnow1]<=nums2[indexnow2]){
                k-=(indexnow1-index1+1);
                index1=indexnow1+1;
             }
             else{
                k-=(indexnow2-index2+1);
                index2=indexnow2+1;
             }
        }
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {       int k=(int)nums1.size()+(int)nums2.size();
        if(!(k%2)){
            return (1.0*get_kthelement(nums1,nums2,k/2+1)+1.0*get_kthelement(nums1, nums2,k/2))/2.0;
        }
        return 1.0*get_kthelement(nums1, nums2, k/2+1);  

    }
};
