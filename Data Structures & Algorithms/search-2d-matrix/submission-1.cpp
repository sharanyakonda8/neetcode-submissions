class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       for(int i=0;i<matrix.size();i++){
         if(matrix[i][0]<=target && matrix[i].back()>=target){
            for(int k=0;k<matrix[0].size();k++){
                if(matrix[i][k]==target){
                    return true;
                }
            }
         }
       }
       return false; 
    }
};
