class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0; int bottom = n-1;
        int left = 0; int right = m-1;

        int dir = 0;
        vector<int> res;

        while(left <= right && top <= bottom){

            if(dir == 0){
                // left to right 
                // row constant

                for(int j = left ; j <= right; j++){
                    res.push_back(matrix[top][j]);
                }
                top++;
            }

            if(dir == 1){
                // top to bottom & col constant

                for(int i = top; i<= bottom; i++){
                    res.push_back(matrix[i][right]);
                }

                right--;
            }


            if(dir == 2){
                // right to left && const row

                for(int j = right; j >= left; j--){
                    res.push_back(matrix[bottom][j]);
                }
                bottom --;
            }

            if(dir == 3){
                // bottom to top
                for(int i = bottom; i >= top; i--){
                    res.push_back(matrix[i][left]);
                }

                left ++;
            }


            dir++;

            if(dir == 4) dir =0;







        }

        return  res;
        
    }
};