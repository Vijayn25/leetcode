class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max=0;
        const int len = nums.size() ;
        for(int i=0;i<len;i++){
            if(i<=max){
                max=std::max(max,nums[i]+i);
            }
        }
        return max+1>=len;
    }
};
