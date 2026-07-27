class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt++;
                ele=nums[i];
            }else if(ele==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int j=0;j<nums.size();j++){
            if(ele==nums[j])cnt1++;
        }
        if(cnt1>nums.size()/2)return ele;
        return -1;
    }
};