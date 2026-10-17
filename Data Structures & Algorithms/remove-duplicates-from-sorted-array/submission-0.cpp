class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int l=0;
      int h=0;
      int n=nums.size();
      while(h<n){
        nums[l]=nums[h];
         while(h<n && nums[l]==nums[h]){
            h++;
         }
         l++;
      }
      return l; 
    }
};