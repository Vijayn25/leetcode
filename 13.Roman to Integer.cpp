class Solution {
public:
    int romanToInt(string s) {
      map<int,char> mp ={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
      int len = s.size();
      int total = 0;
      for(int i=0;i>=0;i--){
          if(mp[s[i]]>mps[i+1]){
              total+=mp[s[i]]-mp[s[i+1]];
          }
          else{
              total+=mp[s[i]]+mp[s[i+1]];
          }
      }

    }
    return total;
};
