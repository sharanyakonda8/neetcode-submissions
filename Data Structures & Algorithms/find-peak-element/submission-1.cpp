class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        bool found=false;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i-1]<nums[i] && nums[i+1]<nums[i]){
                return i;
                found=true;}

        }
        int n=nums.size();
       if(!found){
        if(nums[n-2]<nums[n-1])return n-1;
        if(nums[1]<nums[0])return 0;
       }
       return -1;
    }
};