class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int suml=0,sumr=0;
            for(int j=0;j<i;j++){
                suml+=nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                sumr+=nums[k];
            }
            if(suml==sumr){
                return i;
            }
        }
        return -1;
    }
};