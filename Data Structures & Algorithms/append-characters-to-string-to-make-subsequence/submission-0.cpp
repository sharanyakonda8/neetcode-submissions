class Solution {
public:
    int appendCharacters(string s, string t) {
        int f=0;
        while(t.size()){
            if(s[f]!=t[f]){
                return t.size()-f;
            }
            f++;
        }
        return 0;
    }
};