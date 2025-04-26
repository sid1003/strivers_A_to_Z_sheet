#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int n = arr.size();
    int currMajority = arr[0];
    int cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] == currMajority){
            cnt++;
        } else if(arr[i] != currMajority){
            cnt--;
            if(cnt == 0){
                currMajority = arr[i];
                cnt = 1;
            }
        } 
    }
    cnt = 0;
    for(int i = 0 ; i< n ;i++){
        if(arr[i] == currMajority){
            cnt++;
        }
    }
    // if(cnt < n/2) return false;
    return currMajority;
}

int main(){
    
    return 0;
}
