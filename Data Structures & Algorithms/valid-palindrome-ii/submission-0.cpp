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
                if(s[l+1]==s[h] && chance==1){
                    l++;
                    chance=0;
                }else{
                    h--;
                    chance=0;
                }
            }
        }
        return true;
    }
};