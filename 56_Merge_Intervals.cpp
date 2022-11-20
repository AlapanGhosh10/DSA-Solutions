// Not Optimized Solution
// Can be done better with MAP STL
// Time -> O(NlogN) + O(N)
//          sort      traverse
class Solution {
private:
    // comparator function that is sent to sort() as argument
    // remember to use static in comparator function
    static bool compare(vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // sorting using comparator function
        sort(intervals.begin(), intervals.end(), compare);
        vector<vector<int>> itr;
        itr.push_back(intervals[0]);
        int in = 0;
        for(int i = 1 ; i < intervals.size() ; i++) {
            if(intervals[i][0] > itr[in][1]) {
                itr.push_back(intervals[i]);
                in++;
            } else if(intervals[i][1] > itr[in][1]) {
                    itr[in][1] = intervals[i][1];
            }
        }
        return itr;
    }
};
