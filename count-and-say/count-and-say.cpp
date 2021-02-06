
class Solution {




public:


   string countAndSay(int n) {


       string ans="11";


       int i=1;


       if(n==1){


           return "1";


       }else if(n==2){


           return "11";


       }else{


           for(int i=3;i<=n;i++){


               ans+="$";


               int len = ans.size();


               int count=1;


               string temp="";


               for(int j=1; j<len;j++){


                   if(ans[j]!=ans[j-1]){


                       temp+=count+'0';


                       temp+=ans[j-1];


                       count=1;


                   }else{


                       count++;


                   }


               }


               ans=temp;


           }


       }


       return ans;


   }


};

