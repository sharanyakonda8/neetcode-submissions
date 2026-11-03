class Solution {
public:
    string mergeAlternately(string word1, string word2) {   int l=0,h=0;
    string ans="";
    while(l!=word1.size() && h!=word2.size()){
         ans+=word1[l];
         ans+=word2[h];
         l++;
         h++;
    }
    while(l<word1.size()){
        ans+=word1[l];
        l++;
    }while(h<word2.size()){
        ans+=word2[h];
        h++;
    }
     return ans;   
    }
};