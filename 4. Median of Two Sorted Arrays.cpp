class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int net = nums1.size()/2;
        if(nums1.size()%2==0){
            return (double)(nums1[net]+nums1[net-1])/2;
        }
        else{
            return (double)nums1[net];
        }
    }
};
