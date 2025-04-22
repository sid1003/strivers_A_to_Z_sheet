#include <bits/stdc++.h>
using namespace std;

int second_largest_element(vector<int> &arr, int n){
    int max_val = INT_MIN;
    int second_max_val = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max_val){
            second_max_val = max_val;
            max_val = arr[i];
        }
        else if(arr[i] > second_max_val && arr[i]!= max_val){
            second_max_val = arr[i];
        }
    }
    return second_max_val;
}
int main(){
    
    return 0;
}