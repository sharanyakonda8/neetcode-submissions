class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)<=k && nums[i]==nums[j] && i!=j){
                    return true;
                }
            }
        }
        return false;
    }
};