class Solution {
public:
    int mySqrt(int x) {
      long long i=0;
      while(1){
        if(i*i==x){
           return i;
        }else if(i*i>x){
            return i-1;
        }
        i++;
      } 
      return -1; 
    }
};