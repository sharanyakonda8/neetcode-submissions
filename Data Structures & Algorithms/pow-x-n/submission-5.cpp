class Solution {
public:
    double myPow(double x, int n) {
       double ans=1;
       bool isn=0;
       if(n==0)return 1;
       if(n==1 || x==1)return x;
       if(x==-1 && n%2==0){
        return 1;}
       else{
        return -1;
       }
       if(n<0){
        n=-n;
        isn=1;
       }
       while(n){
        ans=ans*x;
        n--;
       } 
       if(isn)return 1/ans;
       return ans;
    }
};
