class Solution {
public:
    int flipLights(int n, int presses) {
        if ((presses == 0) || (n == 0)) {
            return 1;
        }
        if (n == 1) {
            return 2; // even => noop
        }
        if (presses == 1) {
            // n = 2
            // |-> 01, 10, 11
            // n > 2
            // |-> 101, 010, 111, 100
            return 3 + (n >= 3);
        }
        if (n == 2) {
            // 10  odd or 3k+1
            // 01  even
            // 11  full or (even + odd)
            // 00  two identical ops
            return 3 + (presses >= 2);
        }
        // n >= 3, presses >= 2
        // |-> 010, 101, 111 
        // |-> 000 (two identical ops)
        // |-> 110, 011 (combined with 3k+1)
        // 100 cannot be done with 2 ops
        return 7 + (presses >= 3);

    }
};