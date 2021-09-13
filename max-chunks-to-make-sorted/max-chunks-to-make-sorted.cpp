class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxValue = 0;
        int chunks = 0;
        for(int i =0; i<arr.size();i++){
            maxValue = max(maxValue, arr[i]);
            if(maxValue == i){
                chunks++;
            }
        }
        return chunks;
    }
};