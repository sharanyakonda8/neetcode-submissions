class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=0;
        while(1){
            if(i*i==num){
                return true;
            }
            else if(i*i>num){
                return false;
            }
            i++;
        }
        return false;
    }
};