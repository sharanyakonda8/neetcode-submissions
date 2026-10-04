class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<int>zero;
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                zero.push_back(i);
                zero.push_back(j);
            }
        }
       }
       for(int i=0;i<zero.size();i+=2){
            int row = zero[i];
            int col = zero[i + 1];
        for(int k=0;k<matrix.size();k++){
            for(int l=0;l<matrix[0].size();l++){
                if(k==row || l==col){
                    matrix[k][l]=0;
                }
            }
        }
       }

    }
};
