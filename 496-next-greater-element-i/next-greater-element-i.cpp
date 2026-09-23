class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums2.size() - 1; i++) {
            mp[nums2[i]] = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    mp[nums2[i]] = nums2[j];
                    break;
                }
            }
        }
        vector<int> v(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            v[i] = mp.count(nums1[i]) ? mp[nums1[i]] : -1;
        }
        return v;
    }
};