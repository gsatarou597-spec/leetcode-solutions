class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(char c:s){
            if(isalnum(c)){
                r+=tolower(c);
            }
        }
        int left=0, right=r.length()-1;
        while(left<right){
            if(r[left]!=r[right])return false;
            left++;
            right--;
        }
        return true;

        
    }
};