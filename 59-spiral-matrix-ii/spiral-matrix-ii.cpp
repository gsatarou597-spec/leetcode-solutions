class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int l=0,h=n-1,top=0,bottom=n-1;
        vector<vector<int>> arr(n, vector<int>(n, 0));
        int num=1;
        while(l<=h&&top<=bottom){
            for(int i=l;i<=h;i++){
                arr[top][i]=num;
                num++;   
            }top++;
            for(int i=top;i<=bottom;i++){
                arr[i][h]=num;
                num++;
                   
            }h--;
            if(top<=bottom){
                for(int i=h;i>=l;i--){
                    arr[bottom][i]=num;
                    num++;
                }bottom--;
            }
            if(l<=h){
                for(int i=bottom;i>=top;i--){
                    arr[i][l]=num;
                    num++;
                }l++;
            }
        }return arr;
        
    
        
    }
};