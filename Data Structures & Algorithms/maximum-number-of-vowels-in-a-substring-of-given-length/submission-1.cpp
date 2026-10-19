class Solution {
public:
    int maxVowels(string s, int k) {
        vector<int>ans;
       for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=i;j<i+k && i+k<s.size();j++){
            if(s[j]=='a' ||s[j]=='e' ||s[j]=='i' ||s[j]=='o' ||s[j]=='u'){
                count++;
            }
        }
        ans.push_back(count);
       }
       return *max_element(ans.begin(),ans.end());
    }
};
