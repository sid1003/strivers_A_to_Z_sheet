#include <bits/stdc++.h>
using namespace std;

// brute force solution:
// Time Complexity: O(N2), where N = size of the array.
// Reason: We are using two nested loops here. As each of them is running for N times, the time complexity will be approximately O(N2).

// Space Complexity: O(1) as we are not using any extra space.
long subarrayXor(vector<int> &arr, int k) {
    long ans = 0;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        int currXor = arr[i];
        if(currXor == k) ans++;
        for(int j = i + 1 ; j < n ; j++){
            currXor ^= arr[j];
            if(currXor == k) ans++;
        }
    }
    return ans;
}

// optimal solution:
// Time Complexity: O(N) or O(N*logN) depending on which map data structure we are using, where N = size of the array.
// Reason: For example, if we are using an unordered_map data structure in C++ the time complexity will be O(N) but if we are using a map data structure, the time complexity will be O(N*logN). The least complexity will be O(N) as we are using a loop to traverse the array. Point to remember for unordered_map in the worst case, the searching time increases to O(N), and hence the overall time complexity increases to O(N2). 

// Space Complexity: O(N) as we are using a map data structure.
long subarrayXor(vector<int> &arr, int k) {
    int n = arr.size();
    long ans = 0;
    int preXor = 0;
    unordered_map<int, int> map;
    map[preXor]++; // adding 0 => 1
    for(int i = 0 ; i < n ; i++){
        preXor ^= arr[i];
        int complimentXor = preXor ^ k;
        ans += map[complimentXor];
        map[preXor]++;
    }
    return ans;
}

int main(){
    
    return 0;
}