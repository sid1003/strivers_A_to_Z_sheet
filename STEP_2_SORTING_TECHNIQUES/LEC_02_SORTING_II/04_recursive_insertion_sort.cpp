#include <iostream>
using namespace std;

// Recursive function for insertion sort
void recursiveInsertionSort(int arr[], int n) {
    // Base case: If the array has only one element, it's already sorted
    if (n <= 1) {
        return;
    }
    
    // Recursively sort the first n-1 elements
    recursiveInsertionSort(arr, n - 1);
    
    // Insert the nth element into the sorted portion of the array
    int last = arr[n - 1];
    int j = n - 2;
    
    // Move elements of arr[0..n-2], that are greater than last, to one position ahead
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    
    // Place the last element at the correct position
    arr[j + 1] = last;
}

// Helper function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    // Call the recursive insertion sort function
    recursiveInsertionSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
