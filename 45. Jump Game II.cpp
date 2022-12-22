class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size();
        vector<int>ans(len,INT_MAX);
        ans[0]=0;
        for(int i=0;i<len-1;i++){
            int temp = min(i+nums[i],len-1);
            for(int j=temp;j>i;j--){
                if(ans[j]>ans[i]+1){
                    ans[j]=ans[i]+1;
                }
                else{
                    break;
                }
            }
        }
        return ans[len-1];
    }
};
