#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    // Base case: if start is greater or equal to end, return
    if (start >= end)
        return;

    // Swap the elements at start and end
    swap(arr[start], arr[end]);

    // Recursively call the function for the next pair
    reverseArray(arr, start + 1, end - 1);
}

int main(){
    
    return 0;
}