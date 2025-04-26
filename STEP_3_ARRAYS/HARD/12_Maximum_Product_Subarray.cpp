#include <bits/stdc++.h>
using namespace std;

// optimal approach:

// Time Complexity: O(N), N = size of the given array.
// Reason: We are using a single loop that runs for N times.

// Space Complexity: O(1) as No extra data structures are used for computation.

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int pre = 1, suf = 1;
    int res = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(pre == 0) pre = 1;
        if(suf == 0) suf = 1;
        pre *= nums[i];
        suf *= nums[n - i - 1];
        res = max(res, max(pre, suf));
    }
    return res;
}

int main(){
    
    return 0;
}