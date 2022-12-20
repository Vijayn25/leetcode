class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int right=0,left=len-1;
        int area = INT_MIN;
        while(right<=left){
        area = max(area,min(height[right],height[left])*(left-right));
        if(height[right]<height[left]){
            right++;
        }
        else {
            left--;

        }
        }
        return area;
    }
};
