class Solution {
public:
    int countPrimes(int n) {
       if(n<2){
        return 0;
       } 
       vector<int>ans;
       for(int num=2;num<n;num++){
        bool isprime=true;
        for(int i=2;i*i<=num;i++){
            if(num%i==0 && num!=i){
                isprime=false;
                break;
            }
        }
        if(isprime){
            ans.push_back(num);
        }
       }
       return ans.size();
    }
};