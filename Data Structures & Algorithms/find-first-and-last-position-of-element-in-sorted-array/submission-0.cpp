class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h && nums[l]!=target){
                l++;
            }
        while(l<=h && nums[h]!=target){
                h--;
            }
        if(l>h)return {-1,-1};
        return {l,h};
    }
};