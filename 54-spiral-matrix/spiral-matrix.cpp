class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l=0,h=matrix[0].size()-1;
        int top=0, bottom=matrix.size()-1;
        vector<int>spiral;
        while(l<=h && top<=bottom){
            for(int i=l;i<=h;i++){
                spiral.push_back(matrix[top][i]);
            }top++;
            for(int j=top;j<=bottom;j++){
                spiral.push_back(matrix[j][h]);
            }h--;
            if(top<=bottom){
                for(int i=h;i>=l;i--){
                spiral.push_back(matrix[bottom][i]);
                }bottom--;
            }
            if(l<=h){
                for(int j=bottom;j>=top;j--){
                spiral.push_back(matrix[j][l]);
                }l++;
            }
        }
        return spiral;    
        
    }
};