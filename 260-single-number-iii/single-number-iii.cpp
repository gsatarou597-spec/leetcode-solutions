class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>count;
        for(auto i:nums){
            count[i]++;
        }
        for  (auto& j : count) {
            if (j.second == 1) {
                v.push_back(j.first);
            }
            
        }
        
        return v;
        
        
    }
};