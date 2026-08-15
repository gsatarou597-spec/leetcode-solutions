class Solution {
public:
vector<int> countSort(vector<int>& nums,long long place,int max){
    vector<int>count(10,0);
    for(int i=0;i<nums.size();i++){
        int digit=(nums[i]/place)%10;
        count[digit]++;
    }
    for(int i=1;i<count.size();i++){
        count[i]=count[i]+count[i-1];
    }
    vector<int>output(nums.size());
    for(int i=nums.size()-1;i>=0;i--){
        int digit=(nums[i]/place)%10;
        output[count[digit]-1]=nums[i];
        count[digit]--;
    }
    for(int i=0;i<output.size();i++){
        nums[i]=output[i];
    }
    return nums;
}
int radixSort(vector<int>& nums){
    int max=*max_element(nums.begin(),nums.end());
    for(long long place=1;max/place>0;place*=10){
        countSort( nums,place,max);
    }
    int max_diff = 0;
    for (int i = 1; i < nums.size(); i++) {
        max_diff = std::max(max_diff, nums[i] - nums[i - 1]);
    }
    return max_diff;
    
}
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return 0;
        return radixSort(nums);
        
    }
};