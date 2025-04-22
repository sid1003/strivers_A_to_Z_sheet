#include <bits/stdc++.h>
using namespace std;

// hashing is prestoring and fetching



int basic_hashing(int* arr, int n, int x){
    int hash[13] = {0};
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]]++;
    }
    return hash[x];
}

int basic_hashing_map(int* arr, int n, int x) {
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    return hash[x];
}

int char_hashing(string s, char x){
    int hash[256] = {0};
    for(int i = 0 ; i < s.size() ; i++){
        hash[s[i]]++;
    }
    return hash[x];
}

int main(){

    int arr[] = {1, 3, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << basic_hashing(arr, n, 3) << endl;
    cout << basic_hashing(arr, n, 8) << endl;

    string s = "hello world";

    cout << char_hashing(s, 'l') << endl;
    cout << char_hashing(s, 'z') << endl;


    return 0;
}