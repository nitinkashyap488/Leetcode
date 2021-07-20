class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        priority_queue<pair<int, int> > pq;
        string str;
        
        for(int i=0; i<s.size(); i++)
            freq[s[i]]++;
        
        for(auto x: freq)
            pq.push({x.second, x.first});
        
        while(!pq.empty()){
            pair<int, int> ptr = pq.top();
            pq.pop();
            for(int i=0; i<ptr.first; i++)
                str+= ptr.second;
        }
        return str;
    }
};