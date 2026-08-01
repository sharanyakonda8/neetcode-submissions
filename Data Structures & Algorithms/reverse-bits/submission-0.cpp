class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a=0;
        vector<int>d;
        for(int i=0;i<32;i++){
            d.push_back(n&1);
            n>>=1;
        }
        for(int i=0;i<32;i++){
           a=a*2+d[i];
        }
        return a;
    }
};
