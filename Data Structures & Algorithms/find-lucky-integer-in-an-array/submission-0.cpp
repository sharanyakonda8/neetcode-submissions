class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int>freq;
       for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
       } 
       for(auto x:freq){
        if(x.first==x.second){
            return x.first;
        }
       }
       return -1;
    }
};