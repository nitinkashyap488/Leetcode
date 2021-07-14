class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 == str2){
            return str1;
        }
        int n = min(str1.size(), str2.size()); 
        bool check = true;
        while(n){
            if(str1.size()%n==0 && str2.size()%n==0){    
                string match = str1.substr(0,n);
                for(int i =0;i<str1.size();i+= n){
                    if(str1.substr(i,n)!= match){
                        check = false;
                        break;
                    }
                }
                if(check){
                    for(int i =0;i<str2.size();i+= n){
                        if(str2.substr(i,n)!= match){
                            check = false;
                            break;
                        }
                    }
                }
                if(check){
                    return match;
                }
            }
            n--;
        }
        return "";
    }
};