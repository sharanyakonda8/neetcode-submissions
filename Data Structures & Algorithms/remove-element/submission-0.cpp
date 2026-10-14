class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      vector<int>ans;
      for(int a:nums){
        if(a!=val){
            ans.push_back(a);
        }
      }
      for(int i=0;i<ans.size();i++){
        nums[i]=ans[i];
      }
    return ans.size();
    }
};