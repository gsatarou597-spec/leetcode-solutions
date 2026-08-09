class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int lb=lower_bound(v.begin(),v.end(),target)-v.begin();
        return lb;

        
    }
};