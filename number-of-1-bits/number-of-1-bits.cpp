class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        while (n != 0) {
            sum++;
            n &= (n - 1);
        }
        return sum;
        
                
        /************************************************************************************/
        // int bits = 0;
        // int mask = 1;
        // for (int i = 0; i < 32; i++) {
        //     if ((n & mask) != 0) {
        //         bits++;
        //     }
        //     mask <<= 1;
        // }
        // return bits;
    }
};