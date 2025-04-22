#include <bits/stdc++.h>
using namespace std;

int number_appearing_once(vector<int> &arr, int n){
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        res ^= arr[i];
    }
    return res;
}

int main(){
    
    return 0;
}