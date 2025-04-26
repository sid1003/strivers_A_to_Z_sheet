#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> &arr, int n){
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0, ansStart = -1, ansEnd = -1;
    for(int i = 0 ; i < n ; i++){
        if(sum == 0) start = i; // whenever the sum is 0 a new subarray starts
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) sum = 0;
    }
    return {ansStart, ansEnd}; 
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();

    vector<int> indices = fun(arr, n);

    cout << "Start index: " << indices[0] << ", End index: " << indices[1] << endl;
    cout << "Subarray with maximum sum: ";
    for (int i = indices[0]; i <= indices[1]; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
