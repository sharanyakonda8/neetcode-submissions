class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>freq;
       for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
       }
       int ans; 
       for(auto x:freq){
        if(x.second==1){
            ans=x.first;
            break;
        }
       }
    return ans;
    }
};
