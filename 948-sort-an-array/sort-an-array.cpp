class Solution {
public:
vector<int> countSort(vector<int>& nums,int n,int min){
    int mx=*max_element(nums.begin(),nums.end());
    vector<int>count(mx+1,0);
    for(int i=0;i<n;i++){
        count[nums[i]]++;
    }
    for(int i=1;i<count.size();i++){
        count[i]=count[i]+count[i-1];
    }
    vector<int>output(n);
    for(int i=n-1;i>=0;i--){
        output[count[nums[i]]-1]=nums[i];
        count[nums[i]]--;
    }
    for(int i=0;i<output.size();i++){
        nums[i]=output[i]-min;
    }
    return nums;
}
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int min = *min_element(nums.begin(), nums.end());
        if (min < 0)
            min = abs(min);
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] + min;
        }
        return countSort(nums,n,min);
    }
};