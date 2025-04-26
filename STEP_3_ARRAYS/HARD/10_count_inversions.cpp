#include <bits/stdc++.h>
using namespace std;

// brute force solution:

// TC => O(n^2) two loops
// SC => O(1) no extra space

int inversionCount(vector<int> &arr) {
    int n = arr.size();
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                res++;
            }
        }
    }
    return res;
}

// optimal solution:

// Time Complexity: O(N*logN), where N = size of the given array.
// Reason: We are not changing the merge sort algorithm except by adding a variable to it. So, the time complexity is as same as the merge sort.

// Space Complexity: O(N), as in the merge sort We use a temporary array to store elements in sorted order.

int merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid + 1;
    int cnt = 0;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        } else{
            temp.push_back(arr[right++]);
            cnt += mid - left + 1;
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
    int cnt = 0;
    if(low >= high) return cnt;
    
    int mid = low + (high - low)/2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    
    return cnt;
}

/* 
 * =====================================================================================
 *                           WHY INVERSION COUNTING WORKS IN MERGE SORT
 * =====================================================================================
 * 
 * Fundamental Doubt: 
 * "When we sort the array using merge sort, the element order changes. How can we be sure
 * we're counting the original inversions correctly?"
 * 
 * Deep Explanation:
 * 
 * 1) The Key Insight:
 *    - We're NOT counting inversions in the final sorted array.
 *    - We're counting them DURING the sorting process when we still have information about
 *      the original relative ordering of elements.
 *
 * 2) Critical Observation in Merge Step:
 *    - When merging two sorted halves, if we take an element from the RIGHT half before
 *      exhausting the LEFT half, this element must be smaller than all remaining elements
 *      in the left half (because both halves are individually sorted).
 *    - Each such case represents MULTIPLE inversions at once.
 *
 * 3) Mathematical Intuition:
 *    - Let left half = [3,5,8], right half = [2,4]
 *    - When we pick '2' from right before '3' from left:
 *      - This means 3 > 2, 5 > 2, and 8 > 2 → 3 inversions (mid - left + 1 = 2 - 0 + 1 = 3)
 *    - We count these while we still know the original ordering within each half.
 *
 * 4) Why Sorting Doesn't Ruin the Count:
 *    - The merge process has two phases:
 *      a) Comparison phase (where we count inversions)
 *      b) Copying phase (where we modify the array)
 *    - We do ALL our inversion counting in phase (a), BEFORE any reordering happens.
 *
 * 5) Recursion Preserves Correctness:
 *    - At each recursive level, we:
 *      - Count inversions within left half
 *      - Count inversions within right half
 *      - Count cross-halves inversions during merge
 *    - The splitting ensures we never "lose" any inversions - they're either:
 *      - Within a half (handled recursively)
 *      - Between halves (counted during merge)
 *
 * 6) Example Walkthrough (Array = [3,1,2]):
 *    - First split: [3] and [1,2]
 *      - [1,2] will split into [1] and [2], merge with 0 inversions
 *    - Merging [3] with [1,2]:
 *      - 3 > 1 → inversion count += (0 - 0 + 1) = 1 (pair (3,1))
 *      - 3 > 2 → inversion count += (0 - 0 + 1) = 1 (pair (3,2))
 *    - Total = 2 inversions (correct)
 *
 * 7) Why This is Efficient:
 *    - Normal merge sort: O(n log n) comparisons
 *    - Our version: Adds just O(1) work per comparison
 *    - Each inversion is counted exactly once, when it's "resolved" during a merge
 *
 * Conclusion:
 * The algorithm works because we count inversions at the exact moment when we have enough
 * information to compute them (during merge comparisons), but before we lose the original
 * ordering information (by writing the sorted result back to the array).
 * =====================================================================================
 */

int main(){

    return 0;
}