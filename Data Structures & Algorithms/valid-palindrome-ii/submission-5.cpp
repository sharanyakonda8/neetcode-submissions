class Solution {
public:
    bool validPalindrome(string s) {
        int chance=1;
        int l=0;
        int h=s.size()-1;
        while(l<h){
            if(s[l]==s[h]){
                l++;
                h--;
            }
            else if(s[l]!=s[h] && chance==0){
                return false;
            }
            else{
                chance=0;
                if(s[l+1]==s[h]){
                    l++;   
                }else if(s[l]==s[h-1]){
                    h--;
                    }
                 else{
                    return false;
                }
            }
        }
        return true;
    }
};