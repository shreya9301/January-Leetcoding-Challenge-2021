class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int,vector<int>> mp;
        for(auto itr : pieces)
            mp[itr[0]] = itr;
        vector<int> res;
        for(auto i : arr)
        {
            if(mp.find(i) != mp.end())
            {
                res.insert(res.end(),mp[i].begin(),mp[i].end());
            }
        }
        return (res == arr);
    }
};
