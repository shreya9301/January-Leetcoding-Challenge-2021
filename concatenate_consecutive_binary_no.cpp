#define mod 1000000007
class Solution {
public:
    int concatenatedBinary(int n)
    {
        int res = 0;
        int i = 1;
        while(i<=n)
        {
            res = ((res << (int)(1+log2(i))%mod) + i)%mod;
            i++;
        }
        return res;
    }
   /* int concatenatedBinary(int n) {
        string s=decimalToBinary(n);
        return binaryToDecimal(s);
    }
	
	string decimalToBinary(int n) { 
         string str="";
        for(int i=n;i>=1;--i){
            int no=i;
            while(no){
                str+=(no%2)+"0";
                no/=2;
            }
        }
        return str;
    } 
    
    int binaryToDecimal(string n){
        long long ans=0,exp=1;
        for(int j=0;j<n.size();++j){
                long long now=(n[j]-'0')*(exp);
                exp*=2;
                exp%=mod;
                ans+=now;
        }
        return ans%mod;
        */
};
