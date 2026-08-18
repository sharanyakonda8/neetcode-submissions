class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>order=heights;
        int c=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=order[i])c++;
        }
        return c;
    }
};