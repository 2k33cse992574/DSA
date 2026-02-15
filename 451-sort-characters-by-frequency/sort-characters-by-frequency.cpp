class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        string k="";
        for(auto& it: freq)
        {
            pq.push({it.second,it.first});
        }
        while(!pq.empty())
        {
            int count=pq.top().first;
            char c=pq.top().second;
            k.append(count,c);
            pq.pop();
        }
        return k;
    }
};