#include <bits/stdc++.h>
using namespace std;

// brute force solution:
// Time Complexity: O(N^2) as we have two loops for traversal
// Space Complexity: O(1) as we aren’t using any extra space.
int maxLen(vector<int>& arr) {
    int n = arr.size();
    int res = INT_MIN;
    
    for(int i =0 ;i < n ;i++){
        
        int currSum = arr[i];
        
        if(currSum == 0){
            res = max(res, 1);
        }
        
        for(int j = i + 1 ; j < n ; j++){
        
            currSum += arr[j];
            if(currSum == 0){
                res = max(res, j - i + 1);
            }
        
            
        }
    }
    if(res == INT_MIN) return 0;
    return res;
}

// optimal solution:
// Time Complexity: O(N), as we are traversing the array only once
// Space Complexity: O(N), in the worst case we would insert all array elements prefix sum into our hashmap
int maxLen2(vector<int>& arr) {
    int n = arr.size();
    int res = 0;
    int sum = 0;
    unordered_map<int, int> map;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum == 0) res = i + 1;
        else{
            if(map.find(sum)!=map.end()){
                res = max(res, i - map[sum]);
            } else {
                map[sum] = i;
            }
        }
    }
    return res;
}

int main(){

    return 0;
}