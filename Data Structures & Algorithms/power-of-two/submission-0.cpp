class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
       while(1){
        if(pow(2,i)==n)return true;
        if(pow(2,i)>n)return false;
        i++;
       } 
    return false;
    }
};