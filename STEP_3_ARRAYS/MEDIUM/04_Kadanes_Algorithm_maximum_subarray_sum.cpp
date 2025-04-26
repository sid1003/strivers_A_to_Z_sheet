#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currSum = 0;
    int res = INT_MIN;
    int n = nums.size();
    for(int i = 0 ; i < n ; i++){
        currSum += nums[i];
        res = max(res, currSum);
        if(currSum < 0) currSum = 0;
    }
    return res;
}

int main(){
    
    return 0;
}