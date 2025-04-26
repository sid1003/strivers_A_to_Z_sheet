#include <bits/stdc++.h>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> merge(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<vector<int>> res;
    if (n == 0) return res; 

    sort(arr.begin(), arr.end()); 
    // Time Complexity: O(n log n) for sorting the intervals

    vector<int> currInterval = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i][0] <= currInterval[1]) {
            currInterval[1] = max(currInterval[1], arr[i][1]);
        } else {
            res.push_back(currInterval);
            currInterval = arr[i];
        }
    }

    res.push_back(currInterval);

    // Total Time Complexity: O(n log n + n) = O(n log n)
    // Space Complexity: O(n) for storing the result in 'res'
    return res;
}

int main(){
    return 0;
}
