class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=numRows;

        for(int i=1; i <= n; i++){
            vector<int> temp;
            temp.push_back(1);
            if (i==1) {
                ans.push_back(temp);
            }
            else if (i==2) {
                temp.push_back(1);
                ans.push_back(temp);
            }
            else {
                
                for(int i=0; i<ans[ans.size()-1].size()-1; i++){                temp.push_back(ans[ans.size()-1][i]+ans[ans.size()-1][i+1]);
            
                    
                }
                temp.push_back(1);
                ans.push_back(temp);
            }
        }
    return ans;}
};