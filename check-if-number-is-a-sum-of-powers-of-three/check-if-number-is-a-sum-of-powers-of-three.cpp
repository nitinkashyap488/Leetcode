class Solution {
public:
    bool checkPowersOfThree(int n) {
        int sum = 0,i =0;
        while(pow(3,i)<n){
            sum = pow(3,i++);
        }
        while(i>=0){
            if(n-pow(3,i)>=0){
                n-=pow(3,i);
            }
            i--;
        }
        if(n==0){
            return true;
        }else{
            return false;
        }
    }
};