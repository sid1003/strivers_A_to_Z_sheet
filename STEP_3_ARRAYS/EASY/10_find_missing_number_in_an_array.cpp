#include <bits/stdc++.h>
using namespace std;

int find_missing_number(vector<int> &arr, int n){
    int sum = (n * (n + 1)) / 2;
    for(auto it: arr){
        sum -= it;
    }
    return sum;
}

int main(){
    
    return 0;
}