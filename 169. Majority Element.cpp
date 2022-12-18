class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int v=nums[0];
        int leng = nums.size();
        int arr[leng],s=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==v){
                ++s;
            }
            else{
                --s;
            }
            if(s==0){
                v=nums[i];
                s=1;
            }
        }
