class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        //BFS approach
        unordered_set<string> buffer;
        bool check = false;
        for(auto word : wordList)
        {
            if(endWord == word)
                check = true;
            buffer.insert(word);      
        }
        if(check == false)
            return 0;
        queue<string> q;
        q.push(beginWord);
        int depth = 0;
        
        while(!q.empty())
        {
            depth +=1;
            int q_size = q.size();
            while(q_size--)
            {
                string curr = q.front();
                q.pop();
                for(int i = 0;i<curr.length();i++)
                {
                    string tmp = curr;
                    for(char c = 'a'; c<='z' ; c++)
                    {
                        tmp[i] = c;
                        if(tmp == curr)
                            continue;
                        if(tmp == endWord)
                            return (depth + 1);
                        if(buffer.find(tmp) != buffer.end())
                        {
                            q.push(tmp);
                            buffer.erase(tmp);
                        }
                    }
            
                }
            }
        }
        return 0;
    }
};
