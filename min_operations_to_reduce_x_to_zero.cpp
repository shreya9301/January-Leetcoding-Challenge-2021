class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int N = nums.size();
         int l = 0;
         int s = 0;
         int ans = -1;
         for (; l<N and s<x; l++) {
             s += nums[l];
         }
        if (s == x) ans = l;
        l--;
        int r = N - 1;
        for (; l>=0; l--) {
            s -= nums[l];
            while (r > l and s < x) {
                s += nums[r];
                r--;
            }
            if (s == x) {
                if (ans == -1) ans = (l + N - r - 1);
                else ans = min(ans, (l + N - r - 1));
            }
        }
        return ans;
    }
};
