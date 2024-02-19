class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
       int numberOfPairs = 0;
        
        for(int i=0;i<words.size(); i++){
            
            for(int j=1;j<words.size();j++){
                if(i==j || i>j){
                    continue;
                }
                
                cout<<words[i];
                cout<<endl;
                cout<<words[j];
                cout<<endl;
                
                bool value = isPrefixAndSuffix(words[i],words[j]);
                if(value==true){

                    numberOfPairs++;


                }  
            }
        }
        
        return numberOfPairs;
        
    }
    
    bool isPrefixAndSuffix(string str1, string str2){
        
        bool answer=false;
        int str1Length=str1.length();
        int str2Length=str2.length();

        if(str1.length()>str2.length()){

            return false;
        }
        
    
        if(str1==str2.substr(0,str1.length()) && str1==str2.substr(str2Length-str1Length,str1.length())){
            answer=true;
        }

    return answer;
        
    }
};
