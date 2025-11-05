
class Solution {
private:
    void swap(int& a, int& b){
        int temp=a;
        a=b;
        b=temp;
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                if(i==j||j>i)
                {swap(matrix[i][j],matrix[j][i]);}
            }
        }
    }
};