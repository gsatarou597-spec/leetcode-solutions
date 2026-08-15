class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        int mx1=*max_element(arr1.begin(),arr1.end());
        vector<int>count(mx1+1,0);
        for(int i=0;i<n;i++){
            count[arr1[i]]++;
        }
        
        vector<int>output;
        for (int num : arr2) {
            while (count[num] > 0) {
                output.push_back(num);
                count[num]--;
            }
        }
        for (int num = 0; num < count.size(); num++) {
            while (count[num] > 0) {
                output.push_back(num);
                count[num]--;
            }
        }
        return output;
        
    }
};