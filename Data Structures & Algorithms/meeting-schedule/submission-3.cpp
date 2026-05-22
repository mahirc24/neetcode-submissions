/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {

    for(int i=0;i<intervals.size()-1;i++){
        sort(intervals.begin(),intervals.end(),[](auto&x,auto&y){
            return x.start<y.start;
        });
        if(intervals.empty()) return true;
        if(intervals[i].end>intervals[i+1].start) return false;
     }
     return true;
    
    }
};
