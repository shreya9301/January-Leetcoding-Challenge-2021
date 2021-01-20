class Solution {
public:
    int countVowelStrings(int n) {
        //based on pattern recognition
        //vowels : a e i o u
        //n=1    : 1 1 1 1 1
        //n=2    : 5 4 3 2 1
        //n=3    :15 10 6 3 1
        //from right to left , every number in a particular row is the sum of digits of previous row except when            n=1
        //if we consider vowel "u", it can have only one lexicographically correct string possible for any value            of n , so last col. contains 1 only 
        //we build new vectors from 1 till we reach n
        vector<int> vowel(5,1);
        for(int i=2;i<=n;i++)
        {
            for(int j=3;j>=0;j--)
            {
                vowel[j] += vowel[j+1];
            }
        }
        int res = 0;
        for(auto i:vowel)
        {
            res += i;
        }
        return res;
    }
};
