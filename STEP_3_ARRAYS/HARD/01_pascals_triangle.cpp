#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE

// Time Complexity: O(numRows^2 * n), where n is the average row length
// - For each row, we're calling nCr which takes O(n) time (loop up to r ~ n/2).
// - So for all rows, total time is roughly O(numRows^3) in the worst case.
//
// Space Complexity: O(numRows^2)
// - We're storing the entire Pascal's Triangle, which has roughly numRows^2/2 elements.

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r > n - r)
        r = n - r;
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res *= n - i;
        res /= i + 1;
    }
    return res;
}

vector<int> generateRow(int n)
{
    vector<int> row(n + 1, 0);
    for (int r = 0; r < n + 1; r++)
    {
        row[r] = nCr(n, r);
    }
    return row;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    for (int i = 0; i < numRows; i++)
    {
        res.push_back(generateRow(i));
    }
    return res;
}

// OPTIMAL

// Time Complexity: O(numRows^2)
// - Each row is built iteratively in O(n) time without calling factorial-based nCr.
// - Looping over numRows rows gives total O(numRows^2).
//
// Space Complexity: O(numRows^2)
// - Still storing the entire triangle, same as brute force.

vector<int> generateRow2(int n){
    vector<int> res;
    int ans = 1;
    res.push_back(ans);
    for(int i = 1 ; i < n ; i++){
        ans *= n - i;
        ans /= i;
        res.push_back(ans);
    }
    return res;
}

vector<vector<int>> generate2(int numRows) {
    vector<vector<int>> res;
    for(int i = 1 ; i <= numRows ; i++){
        res.push_back(generateRow(i));
    }
    return res;
}

int main()
{

    return 0;
}
