class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int leng=nums.size();
        int sum=0,start=nums[0];
        for(int i=0;i<leng;i++){
            sum+=nums[i];
            if(sum>start){
                start=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
               return start;
        
    }
};
