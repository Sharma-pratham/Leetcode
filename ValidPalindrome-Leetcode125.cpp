
class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> palindromeVector;
        bool isPalin=true;



        for(int i=0;i<s.length();i++){
            cout<<int(s[i]);
            if(int(s[i])>=65 && int(s[i])<=90 ){
                palindromeVector.push_back(tolower(s[i]));
            }
            else if(int(s[i])>=97 && int(s[i])<=122){
                palindromeVector.push_back(s[i]);
            }
            else if(int(s[i])>=48 && int(s[i])<=57) {
                palindromeVector.push_back(s[i]);
            }
            else{
                continue;
            }

        }

        if(palindromeVector.size()==0){return isPalin;}



        for(int i=0;i<palindromeVector.size()/2;i++){

            if(palindromeVector[i]!=palindromeVector[palindromeVector.size()-1-i]){
                isPalin=false;
            }

        }

        return isPalin;

    }
};
