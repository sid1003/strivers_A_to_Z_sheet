#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &arr, int n){
    int max_val = INT_MIN;
    for(int i = 0 ;i < n ; i++){
        if(arr[i] > max_val){
            max_val = arr[i];
        }
    }
    return max_val;
}

int main(){
    
    return 0;
}