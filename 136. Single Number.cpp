class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int out = 0;
        for(int i=0;i<len;i++){
            out = out ^ nums[i];
        }
        return out;
    }
};
