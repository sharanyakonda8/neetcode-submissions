class Solution {
public:
    int scoreOfString(string s) {
        vector<int>val;
        for(int i=0;i<s.size();i++){
            val.push_back(s[i]);
            }
        int ans=0;
        for(int i=1;i<val.size();i++){
          ans+=abs(val[i]-val[i-1]);
        }
        return ans;
    }
};