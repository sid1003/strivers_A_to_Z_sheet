#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int>  &arr, int n){
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 1){
            int cnt = 1;
            while(i + 1 < n && arr[i + 1] != 0 ){
                cnt++;
                i++;
            }
            res = max(res, cnt);
        }
    }
    return res;
}

int max_consecutive_ones_2(vector<int> &arr, int n){
    int res = 0;
    int cnt = 0;
    for(auto it: arr){
        if(it == 1){
            cnt++;
            res = max(res, cnt);
        } else {
            cnt = 0;
        }
    }
    return res;
}

int main(){
    
    return 0;
}