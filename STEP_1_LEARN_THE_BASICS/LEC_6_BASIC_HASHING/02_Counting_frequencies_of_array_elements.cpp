#include <iostream>
#include <map>
using namespace std;

// Function to count the frequency of elements in an array
map<int, int> countFrequencies(int arr[], int n) {
    map<int, int> freq;
    
    // Loop through the array and count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    return freq;
}

int main() {
    // Example array
    int arr[] = {1, 2, 2, 3, 1, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the countFrequencies function
    map<int, int> freq = countFrequencies(arr, n);

    // Display the frequency of each element
    cout << "Element Frequencies:\n";
    for (auto& elem : freq) {
        cout << elem.first << " appears " << elem.second << " times\n";
    }

    return 0;
}
