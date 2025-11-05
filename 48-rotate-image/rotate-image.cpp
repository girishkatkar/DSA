class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // brute force
        vector<vector<int>> omnitrix=matrix;
        //two pointer
        int n=matrix.size();
        int y=n-1;
        for(int i=0; i<n; i++){
            int x=0;
            for(int j=0; j<n; j++){
                omnitrix[x][y]=matrix[i][j];
                x++;
            }
            y--;
        }
        matrix=omnitrix;
    }
};