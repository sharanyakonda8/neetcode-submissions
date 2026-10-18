class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first=0;
        int second=0;
        int f=s.size()-1;
        int se=t.size()-1;
        while(first<=f && second<=se){
            if(s[first]==t[second]){
                first++;
            }
            second++;
        }
        return first==f+1;
    }
};