class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a_real = 0, a_img = 0;
        int b_real = 0, b_img = 0;
        sscanf(num1.c_str(), "%d + %di", &a_real,&a_img);
        sscanf(num2.c_str(), "%d + %di", &b_real,&b_img);
        
        return to_string(a_real*b_real - a_img*b_img) + "+" + to_string(a_real*b_img + b_real*a_img) + "i";
    }
};