class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=-1;
        int c=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==1)c++;
        else if(nums[i]==0){
         maxi=max(maxi,c);
         c=0;
        }
        if(i==nums.size()-1){
          maxi=max(maxi,c);  
        }
      }
      return maxi;  
    }
};