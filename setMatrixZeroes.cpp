class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int flag = 0;
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j] == 0 && j==0) {
                    flag=1;
                }
                else if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
                else{
                    
                }
            }
        }
        
        for(int i=rows-1; i>=0; i--) {
            
            for(int j=matrix[i].size()-1; j>=0; j--) {
                
                if(matrix[i][j] != 0 && j!=0) {
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j] = 0;
                    }
                }
                else if(matrix[i][j] != 0){
                    if(flag==1) {
                        matrix[i][j] = 0;
                    }
                }
                else{
                    
                }
            }
        }
        
    }
};