class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> hashs(26,0);
        vector<int> hasht(26,0);
        for(int i=0; i<s.size(); i++){
            hashs[s[i]-'a']++;
        }
        for(int i=0; i<s.size(); i++){
            hasht[t[i]-'a']++;
        }
    return hashs==hasht;}
};