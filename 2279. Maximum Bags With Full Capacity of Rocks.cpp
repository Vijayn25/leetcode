class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0,out=0;
        int len = capacity.size();
        int temp[len];
        for(int i=0;i<len;i++){
            temp[i] = capacity[i]-rocks[i];
        }
        int s = sizeof(temp)/sizeof(temp[0]);
        sort(temp,temp+s);
        for(int p : temp){
            count+=p;
            if(count>additionalRocks){
                break;
            }
            out++;
        }
        return out;
    }
};
