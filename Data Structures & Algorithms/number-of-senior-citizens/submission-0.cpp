class Solution {
public:
    int countSeniors(vector<string>& details) {
      vector<int>age;
      for(int i=0;i<details.size();i++){
        age.push_back((details[i][11]-'0')*10+(details[i][12]-'0'));
      } 
      int c=0;
      sort(age.rbegin(),age.rend());
      for(int i=0;i<age.size();i++){
        if(age[i]>60)c++;
        else{
            return c;
        }
      } 
    }
};