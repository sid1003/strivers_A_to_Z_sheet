#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n){
    for(int i = 0 ;i <= n - 1 ; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main(){
    return 0;
}