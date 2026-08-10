class Solution {
public:
    int maxDifference(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto x:freq){
          if(x>0){ if(x>maxi && x%2==1)maxi=x;
           if(x<mini && x%2==0)mini=x;
        }}
    return maxi-mini;
    }
};