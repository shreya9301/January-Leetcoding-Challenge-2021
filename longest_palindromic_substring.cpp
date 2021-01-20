class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        bool dp[s.length()][s.length()];
        memset(dp, 0, sizeof(dp));
        for( int gap = 0;gap < s.length(); gap++)
        {
            for(int i = 0,j=gap ; j < s.length() ; i++,j++)//fil the dp table diagonally
            {
                if(gap == 0)
                {
                    dp[i][j] = true;
                }
                else if(gap == 1)
                {
                    if(s[i] == s[j])
                        dp[i][j] = true;
                    else
                        dp[i][j] = false;
                }
                else
                {
                    if(s[i] == s[j] && dp[i+1][j-1] == true)
                        dp[i][j] = true;
                    else
                        dp[i][j] = false;
                }
                if(dp[i][j])
                {
                    if(j-i+1 > ans.size())
                        ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};
