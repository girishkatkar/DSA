class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int left=0;
        int top=0;
        int right=matrix[0].size()-1;
        int bottom=matrix.size()-1;
/*
Q) why is the  && condition necessary?

ANS) if there is only one row in matrix that means top and bottom 
are on same row, once we traverse that row by moving right
we increase the top and top exceeds bottom. 
This top exceeding bottom intuitively means 1 row existed before 
and now 0 row exist and if 0 row exist no matrix exist, the 
quantity of rows shrink to zero and we can stop the program

if there exist only one column that means left and right are on 
same row, once we traverse that by going down, we decrease right
and left exceeds right.
This left exceeding right intuitively means 1 column existed before
and now 0 column exist, if 0 columns exist that means no matrix exist.
the quantity of columns is shrinked to zero and we can stop the
program. 

Fulfulling any of these 2 conditions means matrix does not exist.
*/

    while(left<=right && top<=bottom){
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }top++;

        for(int i=top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }right--;

/*
Q) why check this if condition?
ANS) we can only go from right to left if some extra row existed
    when we traversed right we decreased row by 1. if that was the only
    row, that means we have no rows left. This for loop sticks to the
    'bottom' and goes right to left, right to left is possible, 
    'bottom' is also currently on the same row 1 (top was the one
    who exceeded) so technically it could traverse back the same path
    which we don't want. 
    We check this condition and determine no further rows exist, 
    so no further traversal
*/
        if (top<=bottom){
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
            }bottom--;}

/*
Q) Why check this if condition?
ANS) Same as before, if only 1 column exist, we traverse right->down->
left. Now we want to traverse backup, since we already traversed top to
down we reduced the columns to 0 and no further columns exist. 
since this loop sticks to left and goes bottom to top which is possible
since left is still on the column 1, and we decreased 'right'. although
this means left exceeded right. left still being used for this loop
can create problems by traversing the same column again. which we don't 
want. so we check if further columns exist, if no don't make the 
mistake of traversing it.
*/

        if(left<=right){
            for(int i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }left++;}
    }


    return ans;}
};