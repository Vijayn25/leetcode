class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int leng=nums.size();
        int count=0,max=0;
        for(int i=0;i<leng;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            max=std::max(max,count);
        }
        return max;
        
    }
};
