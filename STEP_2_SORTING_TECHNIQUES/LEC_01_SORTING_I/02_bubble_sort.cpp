#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for(int i = n - 1 ; i >= 1 ; i--){
        bool flag = false;
        for(int j = 0 ; j <= i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false) return;
    }
}

int main(){
    return 0;
}