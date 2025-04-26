#include <bits/stdc++.h>
using namespace std;

// brute force solution
vector<int> RearrangebySign(vector<int> A, int n)
{

    // Define 2 vectors, one for storing positive
    // and other for negative elements of the array.
    vector<int> pos;
    vector<int> neg;

    // Segregate the array into positives and negatives.
    for (int i = 0; i < n; i++)
    {

        if (A[i] > 0)
            pos.push_back(A[i]);
        else
            neg.push_back(A[i]);
    }

    // Positives on even indices, negatives on odd.
    for (int i = 0; i < n / 2; i++)
    {

        A[2 * i] = pos[i];
        A[2 * i + 1] = neg[i];
    }

    return A;
}

// optimal solution

vector<int> rearrangeArray(vector<int> &arr)
{
    int n = arr.size();
    vector<int> res(n, 0);
    int positiveIndex = 0, negativeIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            res[negativeIndex] = arr[i];
            negativeIndex += 2;
        }
        else
        {
            res[positiveIndex] = arr[i];
            positiveIndex += 2;
        }
    }
    return res;
}

int main()
{

    return 0;
}