class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int mx=*max_element(heights.begin(),heights.end());
        vector<int>count(mx+1,0);
        for(int i=0;i<n;i++){
            count[heights[i]]++;        
        }
        for(int i=1;i<count.size();i++){
            count[i]=count[i]+count[i-1];
        }
        vector<int>output(n);
        for(int i=n-1;i>=0;i--){
            output[count[heights[i]]-1]=heights[i];
            count[heights[i]]--;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=output[i])cnt++;
        }
        return cnt;

        
    }
};