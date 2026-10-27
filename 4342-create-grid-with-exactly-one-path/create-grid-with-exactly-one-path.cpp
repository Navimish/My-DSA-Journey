class Solution {
public:
    vector<string> createGrid(int m, int n) {

        vector<string> grid(m, string(n, '#'));

        // empty first row

        grid[0] = string(n,'.');

        // empty last column

        for(int i = 0; i<m; i++){

            grid[i][n-1] = '.';
        }
        
        return grid;
    }
};