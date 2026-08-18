class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size()/2;
      unordered_map<int,int>freq;
      int i;
      for(i=0;i<nums.size();i++){
        freq[nums[i]]++;
        if(freq[nums[i]]>n)return nums[i];
      }
      return -1;  
    }
};