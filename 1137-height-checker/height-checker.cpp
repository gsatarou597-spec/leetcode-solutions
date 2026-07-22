class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int mx=heights[0];
        for(auto h:heights){
            mx=max(mx,h);
        }
        vector<int>count(mx+1);
        vector<int>high(heights.size(),0);
        for(auto h:heights){
            count[h]++;
        }
        int idx=0;
        for(int i=0;i<=mx;i++){
            while(count[i]>0){
                high[idx]=i;
                count[i]--;
                idx++;
            }
        }
        
        int cnt = 0;
        for(int i = 0; i < heights.size(); i++) {
            if(heights[i] != high[i]) {
                cnt++;
            }
        }
        
        return cnt;
        
        
    }
};