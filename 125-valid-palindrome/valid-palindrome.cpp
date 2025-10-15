class Solution {
public:
    bool isPalindrome(string s) {
        string news;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum((unsigned char)s[i])) {
                news.push_back(tolower((unsigned char)s[i]));
            }
        }
        string reverse_news = news;             
        std::reverse(reverse_news.begin(), reverse_news.end());  
        return reverse_news == news;
    }
};
