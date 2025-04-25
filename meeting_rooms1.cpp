#include<bits/stdc++.h>
using namespace std;
bool canAttendMeetings(vector<vector<int>>& intervals) {
    // Step 1: Sort intervals based on the start time
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    
    // Step 2: Check for overlaps
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i - 1][1] > intervals[i][0]) {
            // If the end time of the previous meeting is greater than the start time of the current
            return false;
        }
    }
    
    return true; // No overlaps found
}

int main() {
    vector<vector<int>> intervals1 = {{0, 30}, {5, 10}, {15, 20}};
    vector<vector<int>> intervals2 = {{7, 10}, {2, 4}};
    
    cout << boolalpha; // For printing true/false instead of 1/0
    cout << "Example 1: " << canAttendMeetings(intervals1) << endl; // Output: false
    cout << "Example 2: " << canAttendMeetings(intervals2) << endl; // Output: true

    return 0;
}