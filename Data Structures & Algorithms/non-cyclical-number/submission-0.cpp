class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        if(n==1)return true;
        while(n>1 && n!=4){
            sum=0;
            while(n>0){
                sum=sum+((n%10)*(n%10));
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};
