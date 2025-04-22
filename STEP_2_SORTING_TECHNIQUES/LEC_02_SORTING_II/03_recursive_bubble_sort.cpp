#include <iostream>
using namespace std;

// Recursive function for bubble sort
void recursiveBubbleSort(int arr[], int n) {
    // Base case: if the array has only one element, it's already sorted
    if (n == 1) {
        return;
    }
    
    // Traverse the array from 0 to n-1
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap elements if they are in the wrong order
            swap(arr[i], arr[i + 1]);
        }
    }
    
    // Recursively call the function for the remaining array
    recursiveBubbleSort(arr, n - 1);
}

// Helper function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    // Call the recursive bubble sort function
    recursiveBubbleSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
