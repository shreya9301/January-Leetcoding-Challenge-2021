#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> check;  
        for(auto i:s)  
        {
            if(i=='(' or i=='{' or i=='[') 
                check.push(i);  
            else
            {
                if(check.empty() or (check.top()=='(' and i!=')') or (check.top()=='{' and i!='}') or (check.top()=='[' and i!=']')) 
                    return false;
                
                check.pop();  
            }
        }
        return (check.empty()); 
    }
};
