class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //binary search approach
       int n = arr.size();
      int l = 0, u = n - 1, mid;

      while(l <= u) 
      {
        mid = (l + u)/2;

        int numbers_less_than_mid = arr[mid] - 
                                        (mid + 1);
        if(numbers_less_than_mid == k) 
        {

          if(mid > 0 && (arr[mid - 1] - (mid)) == k) 
          {
            u = mid - 1;
            continue;
          }

          return arr[mid]-1;
        }

        if(numbers_less_than_mid < k) 
        {
          l = mid + 1;
        } 
        else if(k < numbers_less_than_mid) 
        {
          u = mid - 1;
        }
      }
  
      if(u < 0)
        return k;
      int less = arr[u] - (u + 1);
      k -= less;

      return arr[u] + k;  
    }
};
