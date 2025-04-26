#include <bits/stdc++.h>
using namespace std;

// brute force is basically counting frequencies and shit and comparinng with min required
// frequency

// better  solution

// ✅ Time Complexity: O(n)
// We iterate through the array once: O(n)

// Each unordered_map operation (freqMap[elem]++) is amortized O(1)

// So the total time is O(n)

// ✅ Space Complexity: O(n)
// In the worst case, all n elements are distinct, so we store up to n entries in the hash map

int majorityElement(vector<int>& arr){
        unordered_map<int, int> freqMap;
        int min = floor(arr.size()/2) + 1;
        for(int elem: arr){
            freqMap[elem]++;
            if(freqMap[elem] == min) return elem;
        }
        return -1;
}

// optimal solution

// Complexity Analysis

// Time Complexity: O(N) + O(N), where N = size of the given array.
// Reason: The first O(N) is to calculate the count and find the expected majority element. The second one is to check if the expected element is the majority one or not.

// Note: If the question states that the array must contain a majority element, in that case, we do not need the second check. Then the time complexity will boil down to O(N).

// Space Complexity: O(1) as we are not using any extra space.

int majorityElement2(vector<int>& arr) {
    int n = arr.size();
    int currMajority = arr[0];
    int cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] == currMajority){
            cnt++;
        } else if(arr[i] != currMajority){
            cnt--;
            if(cnt == 0){
                currMajority = arr[i];
                cnt = 1;
            }
        } 
    }
    cnt = 0;
    for(int i = 0 ; i< n ;i++){
        if(arr[i] == currMajority){
            cnt++;
        }
    }
    // if(cnt < n/2) return false;
    return currMajority;
}

int main(){
    
    return 0;
}
