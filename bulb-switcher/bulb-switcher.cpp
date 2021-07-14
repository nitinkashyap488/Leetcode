class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};




explanation
lets us suppose there are 100 bulbs, all turned off in the beginning.
in the first iteration, we turn on all the bulbs.
in the second iteration, we start from 2 and turn off every 2nd bulb.... like 2,4,6...
in the third iteration, we start from 3 and turn off every 3rd bulb.... like 3,6,9...

as we follow the process we see a pattern that only the bulbs which are the square of any numbers are "ON" and the rest all bulbs are off.
