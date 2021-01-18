class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max_length = 0;
        vector<int> check_last_index(256,-1);
        
        int left = 0,right = 0;
        
        while(right < n)
        {
            if(check_last_index[s[right]] != -1)
                left = max(check_last_index[s[right]] + 1 , left);
            
            check_last_index[s[right]] = right;
            max_length = max(max_length , right-left+1);
            right++;

        }
        return max_length;
    }
};
