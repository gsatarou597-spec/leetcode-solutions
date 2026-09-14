class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(char c : s){
            if(!isalnum(c)){
                continue;
                
            }
            r+=tolower(c);
        }
        for(int i=0;i<r.length()/2;i++){
            if(r[i]!=r[r.length()-1-i]){
                return false;
            }
        }
        return true;

        
    }
};