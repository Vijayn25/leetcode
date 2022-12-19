class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(len==0){
            return 0;
        }
        int index=0;
        for(int j=0;j<len;j++){
            if(nums[j]!=nums[index]){
                index++;
                nums[index]=nums[j];
            }
        }
        return index+1;
    }
};
