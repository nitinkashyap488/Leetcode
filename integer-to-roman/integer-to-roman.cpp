class Solution {
public:
    string intToRoman(int num) {
        vector<int> arr1 = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> arr2 = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string str;
        int i = 0;
        while(num > 0 && i < arr1.size()){
            if(num >= arr1[i]){
                num -= arr1[i];
                str += arr2[i];
            }else{
                i++;
            }
        }
        return str;
    }
};