#include <bits/stdc++.h>
using namespace std;

void left_rotate_by_d_places(vector<int> &arr, int n, int d){
    vector<int> temp;
    for(int i = 0 ; i < d ; i++){
        temp.push_back(arr[i]);
    }
    for(int i = d ; i < n ; i++){
        arr[i - d] = arr[i];
    }
    for(int i = n - d ; i < n ; i++){
        arr[i] = temp[i - (n - d)];
    }
}

void left_rotate_by_d_places_2(vector<int> &arr, int n, int d){
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){

}