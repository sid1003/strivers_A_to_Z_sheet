#include <bits/stdc++.h>
using namespace std;

// brute force solution:
// Time Complexity: O(n^3 * log(3)) => O(n^3), due to 3 nested loops and sorting each triplet (which is constant time)
// Space Complexity: O(n^3), in worst case storing all combinations in the set
vector<vector<int>> threeSumBrute(vector<int>& nums) {
    int n = nums.size();
    int currSum = 0;
    set<vector<int>> s;
    vector<vector<int>> res;
    for(int i = 0 ; i < n - 2 ; i++){
        for(int j = i + 1; j < n - 1 ; j++){
            for(int k = j + 1; k < n ; k++){
                currSum = nums[i] + nums[j] + nums[k];
                if(currSum == 0){
                    vector<int> v = {nums[i], nums[j], nums[k]};
                    sort(v.begin(), v.end());
                    s.insert(v);
                }
            }
        }
    }
    res.assign(s.begin(), s.end());
    return res;
}

// better solution:
// Time Complexity: O(n^2 * log(3)) => O(n^2), due to two nested loops and hashing
// Space Complexity: O(n^2), for set of triplets and hash set per iteration
vector<vector<int>> threeSumBetter(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    set<vector<int>> uniqueTriplets;
    for(int i = 0 ; i < n - 1 ; i++){
        unordered_set<int> seen;
        for(int j = i + 1 ; j < n ; j++){
            int rem = 0 - (nums[i] + nums[j]);
            if(seen.find(rem) != seen.end()){
                vector<int> triplet = {nums[i], nums[j], rem};
                sort(triplet.begin(), triplet.end());
                uniqueTriplets.insert(triplet);
            }
            seen.insert(nums[j]);
        }
    }
    res.assign(uniqueTriplets.begin(), uniqueTriplets.end());
    return res;
}

// optimal solution:
// Time Complexity: O(n^2), sorting is O(n log n) and two-pointer loop is O(n^2)
// Space Complexity: O(1) (excluding output), uses constant extra space as duplicates are handled in-place
vector<vector<int>> threeSumOptimal(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int currSum = 0;
    for(int currElem = 0 ; currElem < n - 2 ; currElem++){
        if(currElem > 0 && nums[currElem] == nums[currElem - 1]) continue;
        int i = currElem + 1;
        int j = n - 1;
        while(i < j){
            currSum = nums[currElem] + nums[i] + nums[j];
            if(currSum == 0){
                vector<int> triplet = {nums[currElem], nums[i], nums[j]};
                res.push_back(triplet);
                i++;
                j--;
                while(i < j && nums[i] == nums[i - 1]) i++;
                while(i < j && nums[j] == nums[j + 1]) j--;
            } else if(currSum > 0) j--;
            else i++;
        }
    }
    return res;
}

int main(){
    return 0;
}
