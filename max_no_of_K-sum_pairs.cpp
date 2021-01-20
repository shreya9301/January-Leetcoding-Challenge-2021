class Solution {
public:
    int maxOperations(vector<int>& num, int k) {
      /*
      THIS APPROACH TAKES NO EXTRA SPACE , TIME COMPLEXITY IS O(NlogN)
      
      sort(num.begin(), num.end());
      int ans = 0;
      int i=0, j=num.size()-1;
      while(i < j){
        if(num[i] + num[j] == k){     
          ans++; i++; j--;
        } 
		else if(num[i] + num[j] > k) j--; 
        else i++;    
      }
      return ans;
      */
      map<int,int> mp;
      int cnt = 0;
        for(auto i : num)
        {
            if(mp.find(k-i)!=mp.end() && mp[k-i]>0)
            {
                cnt++;
                mp[k-i] -= 1;
            }
            else
                mp[i] += 1;
        }
        return cnt;
    }
};
