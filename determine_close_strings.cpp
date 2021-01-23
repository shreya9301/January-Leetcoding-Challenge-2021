class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        set<int> w1, w2, w1_freq, w2_freq;
        unordered_map<char, int> w1_m, w2_m;
        
        for (auto a : word1) {
            w1.insert(a);
            w1_m[a]++;
        }
        
        for (auto a : word2) {
            w2.insert(a);
            w2_m[a]++;
        }
        
        for (auto [k, v] : w1_m) w1_freq.insert(v);
        
        for (auto [k, v] : w2_m) w2_freq.insert(v);
        // check for same np. of characters in the two sets and same frequency of unique characters in the two maps
        return w1== w2 && w1_freq == w2_freq;
    }
};
