#include <bits/stdc++.h>
using namespace std;

// better solution

// 🔹 Time Complexity:
// O(n) — single pass through nums, and each map[num]++ is average O(1).

// In the worst case, if the result isn't found early, it may go through the entire array.

// 🔹 Space Complexity:
// O(n) — in the worst case, all elements are unique, so the hash map stores n key-value pairs.

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    unordered_map<int, int> map;
    int min = floor(n/3) + 1;
    for(int num: nums){
        map[num]++;
        if(map[num]==min) res.push_back(num);
        if(res.size() == 2) break;
    }
    return res;
}

// optimal solution:

// 🔹 Time Complexity:
// O(n) — two passes through the array: one to find candidates, one to validate.

// 🔹 Space Complexity:
// O(1) — only constant extra space used for counters and candidate variables

vector<int> majorityElement(vector<int>& nums) {
    int currMajority1 = INT_MIN, currMajority2 = INT_MIN;
    int cnt1 = 0, cnt2 = 0;
    for(int num : nums){
        if(cnt1 == 0 && num != currMajority2){
            cnt1 = 1;
            currMajority1 = num;
        } 
        else if(cnt2 == 0 && num != currMajority1){
            cnt2 = 1;
            currMajority2 = num;
        }
        else if(num == currMajority1) cnt1++;
        else if(num == currMajority2) cnt2++;
        else {cnt1--; cnt2--;}
    }
    cnt1 = 0, cnt2 = 0;
    for(int num : nums){
        if(num == currMajority1) cnt1++;
        else if(num == currMajority2) cnt2++;
    }
    vector<int> res;
    int n = nums.size();
    if(cnt1 > floor(n/3)) res.push_back(currMajority1);
    if(cnt2 > floor(n/3)) res.push_back(currMajority2);
    return res;

}

int main(){
    
    return 0;
}