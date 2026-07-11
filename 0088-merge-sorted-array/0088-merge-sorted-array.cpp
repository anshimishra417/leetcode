class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m +n-1;

        for(;m>0 && n>0; last--){
            if(nums1[m-1]>nums2[n-1]){
                nums1[last] = nums1[m-1];
                m-= 1;
            }else{
                nums1[last] = nums2[n-1];
                n-=1;
            }
        }
        for(;n >0; last--){
            nums1[last]= nums2[n-1];
            n-=1;
        }
    }
};