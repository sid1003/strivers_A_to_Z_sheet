#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> &arr, int n, int x){
    for(int i = 0 ; i < n  ; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){

}