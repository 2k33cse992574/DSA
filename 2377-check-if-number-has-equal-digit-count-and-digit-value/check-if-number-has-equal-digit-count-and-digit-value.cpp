class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> mp;
        vector<int> n(num.size());
        for(int i=0;i<num.size();i++)
        {
            n[i]=num[i]-'0';
        }
        for(int x:n)
        {
            mp[x]++;
        }
        for(int i=0;i<n.size();i++)
        {
            if(mp[i]!=n[i])
            {
                return false;
            }
        }
        return true;
    }
};