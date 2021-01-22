class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        //concept used - MONOTONE STACK
        //In this we build a stack such that the elements in it are in inceasing order always
        //If the element to be inserted in stack is smaller than the top element then we pop the top element 
        //and insert the one we want. We also keep in mind that the no. of elements to be discarded are (N-k) 
        
        vector<int> stack;
        int rem = nums.size() - k;
        for(auto i : nums)
        {
            while(stack.size() && rem && i<stack.back())
            {    
                stack.pop_back();
                rem--;
            }
            stack.push_back(i);
        }
        while(rem)// if there are still extra elements remaining in the stack 
        {
            stack.pop_back();
            rem--;
        }   
        return stack;
    }
};
