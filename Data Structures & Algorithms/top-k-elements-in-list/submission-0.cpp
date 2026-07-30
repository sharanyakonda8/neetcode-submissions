class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>freq(1000);
       for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
       }
       vector<pair<int,int>>v;
       for(auto x:freq){
        v.push_back({x.second,x.first});
       }
       sort(v.rbegin(),v.rend());
       vector<int>ans;
       for(int i=0;i<k;i++){
        ans.push_back(v[i].second);
       }
       return ans;
    }
};
