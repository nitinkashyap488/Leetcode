class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();
        
        if(n>m) return false;
        int i =0,j=0;
        while(i<n){
            if(name[i] == typed[j]){
                i++;
                j++;
            }else if(j!=0 && typed[j] == typed[j-1]){
                j++;
            }else{
                return false;
            }
        }
        while(j<m){
            if(typed[j] != name[n-1]){
                return false;
            }
            j++;
        }
        return true;
    }
};