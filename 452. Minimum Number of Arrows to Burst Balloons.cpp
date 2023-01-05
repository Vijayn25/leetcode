class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int len = points.size();
        if(len==0)
        return 0;
        sort(points.begin(),points.end());
        int last_point = points[0][1];
        int out = 1;
        for(auto i : points){
            if(i[0]>last_point){
                out++;
                last_point = i[1];
            }
            last_point = min(last_point,i[1]);
        }
        return out;
    }
