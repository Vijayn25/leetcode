class Solution {
public:
    int reverse(int x) {
        long long out = 0;
        while(x!=0){
            out = out*10 + x%10;
            x/=10;
        }
        if(abs(out)>INT_MAX){
            return 0;
        }
        return out;
    }
};
