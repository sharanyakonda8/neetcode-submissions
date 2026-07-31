class Solution {
public:
    bool isPalindrome(string s) {
       vector<char>p;
       for(int i=0;i<s.size();i++){
          if(isalnum(s[i])){
            p.push_back(tolower(s[i]));
          }
       }
       int n=p.size();
       for(int i=0;i<p.size()/2;i++){
        if(p[i]!=p[n-i-1])return false;
       } 
       return true;
    }
};
