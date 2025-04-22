#include <bits/stdc++.h>
using namespace std;

void move_zeros_to_end(vector<int> &arr, int n){
    vector<int> temp;
    for(auto it: arr){
        if(it != 0){
            temp.push_back(it);
        }
    }
    for(int i = 0  ;i < temp.size() ;i++){
        arr[i] = temp[i];
    }
    for(int i = temp.size() ; i < n ; i++){
        arr[i] = 0;
    }
}

void move_zeros_to_end_2(vector<int> &arr, int n){
    int j = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    // now j stores the first zeroth element's position in the array

    for(int i = j + 1 ; i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

}