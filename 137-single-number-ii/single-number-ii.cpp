class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>num;
        for(auto i:nums){
            num[i]++;
        }
        for  (auto j : num) {
            if (j.second == 1) {
                return j.first;
            }
        }
        return -1;
    }
     
};