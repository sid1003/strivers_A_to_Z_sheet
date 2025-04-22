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

// Function to find the element with the highest and lowest frequency
void findHighestAndLowestFrequency(map<int, int>& freq) {
    int highestFreq = -1, lowestFreq = INT_MAX;
    int highestFreqElement, lowestFreqElement;

    // Loop through the frequency map to find highest and lowest frequency elements
    for (auto& elem : freq) {
        if (elem.second > highestFreq) {
            highestFreq = elem.second;
            highestFreqElement = elem.first;
        }
        if (elem.second < lowestFreq) {
            lowestFreq = elem.second;
            lowestFreqElement = elem.first;
        }
    }

    // Display the results
    cout << "Element with highest frequency: " << highestFreqElement
         << " appears " << highestFreq << " times\n";
    cout << "Element with lowest frequency: " << lowestFreqElement
         << " appears " << lowestFreq << " times\n";
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

    // Find and display highest and lowest frequency elements
    findHighestAndLowestFrequency(freq);

    return 0;
}
