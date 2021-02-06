class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry =0;
        string str="";
        while(i>=0||j>=0||carry>0){
            int x = (i>=0)?a[i--]-'0':0;
            int y = (j>=0)?b[j--]-'0':0;
            int sum=x+y+carry;
            str=to_string(sum%2)+str;
            carry=sum/2;
        }
        
        return str;
    }
};