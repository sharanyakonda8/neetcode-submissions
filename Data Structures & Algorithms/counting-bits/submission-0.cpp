class Solution {
public:
    vector<int> countBits(int n) {
      vector<int>ans;
      for(int i=0;i<=n;i++){
        int m=i;
        int count=0;
        while(m>0){
            count=count+(m%2);
            m/=2;
        }
        ans.push_back(count);
      }  
      return ans;
    }
};
