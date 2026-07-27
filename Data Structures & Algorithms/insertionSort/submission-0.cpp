class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
       vector<vector<Pair>> states;
       for(int i=0;i<pairs.size();i++){
        Pair k=pairs[i];
        int j=i-1;
        while(j>=0 && pairs[j].key > k.key){
            pairs[j+1]=pairs[j];
            j--;
        }
        pairs[j+1]=k;
        states.push_back(pairs);
       }
    return states;
    }
};