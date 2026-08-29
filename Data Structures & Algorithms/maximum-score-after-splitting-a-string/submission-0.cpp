class Solution {
public:
    int maxScore(string s) {
        vector<int>ans;
        int k=1;
        while(k<s.size()){
            int z=0,o=0;
          for(int j=0;j<k;j++){
            if(s[j]=='0')z++;
          }
          for(int l=k;l<s.size();l++){
            if(s[l]=='1')o++;
          }
          k++;
          ans.push_back(z+o);
        }
     
     return *max_element(ans.begin(),ans.end());   
    }
};