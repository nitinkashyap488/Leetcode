class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum1=0,sum2=0, tarSum =0;
        for(int i=0;i<firstWord.size();i++){
            sum1= sum1*10 + firstWord[i]-'a';
        }
        for(int i=0; i<secondWord.size();i++){
            sum2= sum2*10 + secondWord[i]-'a';
        }
        for(int i=0;i<targetWord.size();i++){
            tarSum = tarSum*10 + targetWord[i]-'a';
        }
        if(sum1+sum2 == tarSum){
            return true;
        }else{
            return false;
        }
    }
};