class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        //Greedy approach(pair the lightweight with heavyweight ppl)
        int cnt =0;
        int i = 0,j=people.size()-1;
        sort(people.begin(),people.end());
        while(i<=j)
        {
            cnt +=1;
            if(people[i] + people[j] <= limit)
                i++;
            j--;
        }
        return cnt;
    }
};
