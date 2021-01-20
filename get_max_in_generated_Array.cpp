class Solution {
public:
    int getMaximumGenerated(int n) {
        int arr[n+1];
        if(n == 0)
            return 0;
        arr[0] = 0;
        arr[1] = 1;

        for(int i = 2;i<(n+1);i++)
        {
            if(i%2==0)
                arr[i] = arr[i/2];
            else
                arr[i] = arr[i/2] + arr[i/2 + 1];
        }
        int max = arr[0];
        for(int i = 0 ;i < (n+1) ; i++)
        {
            if(arr[i] > max)
                max = arr[i];
        }
        return max;
    }
};
