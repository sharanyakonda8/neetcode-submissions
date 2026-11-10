class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            if(n==1 || n==3 || n==0){
                return true;
            }else if(n==2){
                return false;
            }
            n=n%3;
        }
        return false;
    }
};
