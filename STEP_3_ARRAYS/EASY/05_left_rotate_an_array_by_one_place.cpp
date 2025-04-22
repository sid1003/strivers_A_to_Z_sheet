#include <bits/stdc++.h>
using namespace std;

void left_rotate_by_one_place(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i = 1 ; i < n ; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main(){

}