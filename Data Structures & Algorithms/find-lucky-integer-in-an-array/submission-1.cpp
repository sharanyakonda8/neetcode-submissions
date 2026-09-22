class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int>freq;
       for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
       } 
       vector<int>ans;
       for(auto x:freq){
        if(x.first==x.second){
            ans.push_back(x.first);
        }
       }
       if(ans.size()!=0){
        return *max_element(ans.begin(),ans.end());
       }
       return -1;
    }
};