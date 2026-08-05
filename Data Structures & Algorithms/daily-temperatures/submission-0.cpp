class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int>ans;
       for(int i=0;i<temperatures.size();i++){
        int c=0;
        int j;
        for(j=i;j<temperatures.size();j++){
           if(temperatures[i]<temperatures[j]){
            break;
           }
           else{
            c++;}
        }
        if(j==temperatures.size()){
            ans.push_back(0);}
        else{
            ans.push_back(c);}
       } 
       return ans;
    }
};
