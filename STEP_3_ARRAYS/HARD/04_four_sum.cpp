#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution:
// Time Complexity: O(n^4 * log(4)) => O(n^4), due to 4 nested loops and sorting each quadruplet (constant time)
// Space Complexity: O(n^4), in worst case storing all combinations in the set
vector<vector<int>> fourSumBrute(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> s;
    vector<vector<int>> res;
    for(int i = 0; i < n - 3; i++) {
        for(int j = i + 1; j < n - 2; j++) {
            for(int k = j + 1; k < n - 1; k++) {
                for(int l = k + 1; l < n; l++) {
                    long long currSum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(currSum == target) {
                        vector<int> v = {nums[i], nums[j], nums[k], nums[l]};
                        sort(v.begin(), v.end());
                        s.insert(v);
                    }
                }
            }
        }
    }
    res.assign(s.begin(), s.end());
    return res;
}

// Better Solution:
// Time Complexity: O(n^3 * log(n)) => O(n^3), due to 3 nested loops and hash set lookup
// Space Complexity: O(n^3), for set of quadruplets and hash set per iteration
vector<vector<int>> fourSumBetter(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> res;
    set<vector<int>> uniqueQuad;
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            unordered_set<long long> seen;
            for(int k = j + 1; k < n; k++) {
                long long currSum = (long long)nums[i] + nums[j] + nums[k];
                long long rem = (long long)target - currSum;
                if(seen.find(rem) != seen.end()) {
                    vector<int> quad = {nums[i], nums[j], nums[k], (int)rem};
                    sort(quad.begin(), quad.end());
                    uniqueQuad.insert(quad);
                }
                seen.insert(nums[k]);
            }
        }
    }
    res.assign(uniqueQuad.begin(), uniqueQuad.end());
    return res;
}

// Optimal Solution:
// Time Complexity: O(n^3), sorting is O(n log n) and two nested loops with two-pointer is O(n^3)
// Space Complexity: O(1) (excluding output), uses constant extra space as duplicates are handled in-place
vector<vector<int>> fourSumOptimal(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for(int i = 0; i < n - 3; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i + 1; j < n - 2; j++) {
            if(j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1;
            int right = n - 1;
            while(left < right) {
                long long currSum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if(currSum == target) {
                    res.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left - 1]) left++;
                    while(left < right && nums[right] == nums[right + 1]) right--;
                } else if(currSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return res;
}

int main() {
    return 0;
}