class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int leng = nums.size();
        vector<int> out(leng,-1);
        std::stack<int> st;
        for(int i=2*leng-1;i>=0;i--){
            while(!st.empty()&& st.top()<=nums[i%leng]){
                st.pop();
            }
            if(i<leng){
                if(!st.empty()){
                    out[i]=st.top();
                }
                else{
                    out[i]=-1;
                }
            }
            st.push(nums[i%leng]);
        } 
        return out;
    }
};
