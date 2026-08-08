class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans[26]={0};
        for(int i=0;i<text.size();i++){
            ans[text[i]-'a']++;
        }
        int b=ans[1];
        int a=ans[0];
        int l=ans['l'-'a']/2;
        int o=ans['o'-'a']/2;
        int n=ans['n'-'a'];
        return min(b,min(a,min(l,min(o,n))));
    }
};