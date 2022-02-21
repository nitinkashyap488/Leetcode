class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one = 0;
        int flip =0;
        for(int i=0; i<s.size(); i++){
            s[i] == '1' ? one++ : flip++;
            flip = min(one, flip);
        }
        return flip;
    }
};