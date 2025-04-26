#include <bits/stdc++.h>
using namespace std;

// Brute force solution:

int countPairs(vector<int>& a, int n) {

    // Time Complexity: O(n^2)
    //   - Two nested loops each running up to n.
    // Space Complexity: O(1)
    //   - No extra space used besides counters.

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > 2 * a[j]) cnt++;
        }
    }
    return cnt;
}

// Optimal solution using modified merge sort:

int merge(vector<int> &arr, int low, int mid, int high){

    // Time Complexity (per merge call): O(n)
    //   - One pass to count pairs (at most n), one pass to merge (at most n).
    // Space Complexity: O(n)
    //   - Temporary vector used for merging.

    int cnt = 0;
    vector<int> temp;
    int left = low, right = mid + 1;

    // Count valid pairs
    while(left <= mid && right <= high){
        if(arr[left] > (long long)2 * arr[right]){
            cnt += mid - left + 1;
            right++;
        } else left++;
    }

    // Merge step
    left = low, right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        } else{
            temp.push_back(arr[right++]);
        }
    }
    while(left <= mid){
        temp.push_back(arr[left++]);
    }
    while(right <= high){
        temp.push_back(arr[right++]);
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high){

    // Time Complexity: O(n log n)
    //   - Standard merge sort with additional O(n) work per merge step.
    // Space Complexity: O(n)
    //   - Due to the temporary vector used in each merge.

    int cnt = 0;
    if(low >= high) return cnt;
    int mid = low + (high - low) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

int main(){
    
    return 0;
}
