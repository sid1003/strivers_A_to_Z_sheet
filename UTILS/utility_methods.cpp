#include <bits/stdc++.h>
using namespace std;

// Utility Functions

// 1. Input / Output Optimization
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
// Time complexity: O(1) (just optimization for input/output)

// 2. Sum of Elements in a Vector
int sumOfElements(const vector<int>& v) {
    return accumulate(v.begin(), v.end(), 0);
}
// Time complexity: O(n), where n is the size of the vector

// 3. Sum of Squares of Elements in a Vector
int sumOfSquares(const vector<int>& v) {
    return accumulate(v.begin(), v.end(), 0, [](int acc, int x) {
        return acc + x * x;
    });
}
// Time complexity: O(n), where n is the size of the vector

// 4. Max / Min Element
int getMax(const vector<int>& v) {
    return *max_element(v.begin(), v.end());
}
// Time complexity: O(n), where n is the size of the vector

int getMin(const vector<int>& v) {
    return *min_element(v.begin(), v.end());
}
// Time complexity: O(n), where n is the size of the vector

// 5. Sort Ascending / Descending
void sortAscending(vector<int>& v) {
    sort(v.begin(), v.end());
}
// Time complexity: O(n log n), where n is the size of the vector

void sortDescending(vector<int>& v) {
    sort(v.begin(), v.end(), greater<int>());
}
// Time complexity: O(n log n), where n is the size of the vector

// 6. Frequency Map
unordered_map<int, int> getFrequencyMap(const vector<int>& v) {
    unordered_map<int, int> freq;
    for (int x : v) freq[x]++;
    return freq;
}
// Time complexity: O(n), where n is the size of the vector

// 7. Unique Elements (like set)
set<int> getUniqueElements(const vector<int>& v) {
    return set<int>(v.begin(), v.end());
}
// Time complexity: O(n log n), where n is the size of the vector (due to set insertion)

// 8. Prefix Sum Array
vector<int> getPrefixSum(const vector<int>& v) {
    vector<int> prefix(v.size() + 1, 0);
    for (int i = 0; i < v.size(); ++i) {
        prefix[i + 1] = prefix[i] + v[i];
    }
    return prefix;
}
// Time complexity: O(n), where n is the size of the vector

// 9. Binary Search
bool binarySearch(const vector<int>& v, int target) {
    return binary_search(v.begin(), v.end(), target);
}
// Time complexity: O(log n), where n is the size of the vector (requires the vector to be sorted)

// 10. Lower & Upper Bound
auto lowerBound(const vector<int>& v, int x) {
    return lower_bound(v.begin(), v.end(), x);
}
// Time complexity: O(log n), where n is the size of the vector (requires the vector to be sorted)

auto upperBound(const vector<int>& v, int x) {
    return upper_bound(v.begin(), v.end(), x);
}
// Time complexity: O(log n), where n is the size of the vector (requires the vector to be sorted)

// 11. Count Occurrences of x in Sorted Vector
int countOccurrences(const vector<int>& v, int x) {
    return upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);
}
// Time complexity: O(log n), where n is the size of the vector (requires the vector to be sorted)

// 12. Custom Comparator for Sorting Pairs by Second Element
void sortBySecondDesc(vector<pair<int, int>>& vp) {
    sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
}
// Time complexity: O(n log n), where n is the size of the vector of pairs

// 13. GCD and LCM
int gcd(int a, int b) {
    return __gcd(a, b);
}
// Time complexity: O(log(min(a, b)))

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
// Time complexity: O(log(min(a, b)))


// 14. Modular Arithmetic
const int MOD = 1e9 + 7;
int addMod(int a, int b) {
    return (a + b) % MOD;
}
// Time complexity: O(1)

int mulMod(int a, int b) {
    return (1LL * a * b) % MOD;
}
// Time complexity: O(1)

int subMod(int a, int b) {
    return (a - b + MOD) % MOD;
}
// Time complexity: O(1)

// 15. Modular Exponentiation
int modPow(int base, int exp, int mod) {
    int result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (1LL * result * base) % mod;
        base = (1LL * base * base) % mod;
        exp >>= 1;
    }
    return result;
}
// Time complexity: O(log(exp)), where exp is the exponent
// (due to the binary exponentiation method)


// Main Example
int main() {
    fastIO(); // Speed up IO
    
    // Example usage of the utilities:
    vector<int> nums = {4, 1, 7, 3, 9};
    
    // Sum of elements
    cout << "Sum of elements: " << sumOfElements(nums) << endl;
    
    // Sum of squares
    cout << "Sum of squares: " << sumOfSquares(nums) << endl;
    
    // Sorting
    sortDescending(nums);
    cout << "Sorted in descending order: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    
    // Max and Min elements
    cout << "Max element: " << getMax(nums) << endl;
    cout << "Min element: " << getMin(nums) << endl;

    // Frequency map
    auto freq = getFrequencyMap(nums);
    cout << "Frequency of elements: ";
    for (auto& p : freq) cout << p.first << ": " << p.second << ", ";
    cout << endl;
    
    // Prefix sum array
    auto prefix = getPrefixSum(nums);
    cout << "Prefix sum: ";
    for (int x : prefix) cout << x << " ";
    cout << endl;

    // Binary search (example usage assumes sorted nums)
    bool found = binarySearch(nums, 7);
    cout << "Found 7? " << (found ? "Yes" : "No") << endl;
    
    // Lower and upper bounds (example usage assumes sorted nums)
    auto lb = lowerBound(nums, 3);
    auto ub = upperBound(nums, 3);
    cout << "Lower bound of 3: " << *lb << endl;
    cout << "Upper bound of 3: " << *ub << endl;

    return 0;
}
