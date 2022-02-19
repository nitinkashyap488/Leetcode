class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int rooms = 0;
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto x: intervals){
            int start = x[0], end = x[1];
            while(!pq.empty() and pq.top() <= start){
                pq.pop();
            }
            pq.push(end);
            rooms = max(rooms, (int)pq.size());
        }
        return rooms;
    }
};