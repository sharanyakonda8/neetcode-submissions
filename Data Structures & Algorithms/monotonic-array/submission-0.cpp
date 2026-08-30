class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int incresing=0;
        if(nums.size()<=1)return true;
       if(nums[0]<=nums[1])incresing=1;
       else incresing=0;
       for(int i=0;i<nums.size()-1;i++){
        if((incresing==1 && nums[i]<=nums[i+1])||(incresing==0 && nums[i]>=nums[i+1]))continue;
        else{
            return false;
        }
       } 
       return true;
    }
};