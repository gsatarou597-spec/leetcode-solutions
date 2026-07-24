class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int xxor=0;
        unordered_map<int,int>count;
        for(auto i:nums){
            count[i]++;
        }
        for  (auto& j : count) {
            if (j.second == 2) {
                xxor=xxor^j.first;
            }
            
        }
        
        return xxor;
        
    }
};