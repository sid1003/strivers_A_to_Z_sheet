#include <bits/stdc++.h>
using namespace std;

// brute 

// Time Complexity: O(N2), where N = size of the array.
// Reason: We are using two nested loops here. As each of them is running for exactly N times, the time complexity will be approximately O(N2).

// Space Complexity: O(1) as we are not using any extra space.

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size(); // size of the given array.
    int cnt = 0; // Number of subarrays:

    for (int i = 0 ; i < n; i++) { // starting index i
        int sum = 0;
        for (int j = i; j < n; j++) { // ending index j
            // calculate the sum of subarray [i...j]
            // sum of [i..j-1] + arr[j]
            sum += arr[j];

            // Increase the count if sum == k:
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

// optimal:

// Time Complexity: O(N) or O(N*logN) depending on which map data structure we are using, where N = size of the array.
// Reason: For example, if we are using an unordered_map data structure in C++ the time complexity will be O(N) but if we are using a map data structure, the time complexity will be O(N*logN). The least complexity will be O(N) as we are using a loop to traverse the array.

// Space Complexity: O(N) as we are using a map data structure.

// Question: Why do we need to set the value of 0?

// Let’s understand this using an example. Assume the given array is [3, -3, 1, 1, 1] and k is 3. Now, for index 0, we get the total prefix sum as 3, and k is also 3. So, the prefix sum of the remove-part should be x-k = 3-3 = 0. Now, if the value is not previously set for the key 0 in the map, we will get the default value 0 for the key 0 and we will add 0 to our answer. This will mean that we have not found any subarray with sum 3 till now. But this should not be the case as index 0 itself is a subarray with sum k i.e. 3.

// So, in order to avoid this situation we need to set the value of 0 as 1 on the map beforehand.

int subarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_map<int,int> mp;
    mp[0] = 1;
    int cnt = 0;
    int preSum = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += arr[i];
        int remaining  = preSum - k;
        if(mp.find(remaining) != mp.end()){
            cnt += mp[remaining];
        }
        mp[preSum]++;
    }
    return cnt;
}

int main(){
    
    return 0;
}