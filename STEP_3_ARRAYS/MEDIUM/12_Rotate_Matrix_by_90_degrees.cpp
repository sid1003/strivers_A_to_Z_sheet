#include <bits/stdc++.h>
using namespace std;

// brute force:

// Time Complexity: O(N*N) to linearly iterate and put it into some other matrix.

// Space Complexity: O(N*N) to copy it into some other matrix.

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }
    return rotated;
}

// optimal approach:

// Time Complexity: O(N*N) + O(N*N).One O(N*N) is for transposing the matrix and the other is for reversing the matrix.

// Space Complexity: O(1).

void transposeMatrix(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
void reverseRows(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void rotate2(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    transposeMatrix(matrix, n);
    reverseRows(matrix, n);
}

int main()
{

    return 0;
}