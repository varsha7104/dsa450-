/*Your task is to merge the intervals which are overlapping */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {{}};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            if(ans.empty()||ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }else {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }return ans;
    }
};
/*Output:
intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]*/