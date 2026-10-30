class Solution {
public:
    int maximumSwap(int num) {
       bool done=false;
       vector<int>d;
       while(num>0){
        d.push_back(num%10);
        num/=10;
       }
       int n=d.size();
       while(!done && n>1){
        int m=max_element(d.begin()+0,d.begin()+(n-1))-             d.begin();
        if(d[m]>d[n-1]){
            swap(d[m],d[n-1]);
            done=true;
        }
        else{
          n--;
        }
       }
       int ans=0;
       for(int i=d.size()-1;i>=0;i--){
            ans=ans*10+d[i];
       }
       return ans;
    }
};
