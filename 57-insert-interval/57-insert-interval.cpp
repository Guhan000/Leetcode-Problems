class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>> mergeInterval;
        sort(intervals.begin(), intervals.end());
        if(intervals.size() == 0){
            return mergeInterval;
        }
        
        vector<int> tempInterval = intervals[0];
        
        for(auto it : intervals){
            if(it[0] <= tempInterval[1]){
                tempInterval[1] = max(it[1], tempInterval[1]);
            }else{
                mergeInterval.push_back(tempInterval);
                tempInterval=it;
            }
        }
        
        mergeInterval.push_back(tempInterval);
        return mergeInterval;
    }
};
