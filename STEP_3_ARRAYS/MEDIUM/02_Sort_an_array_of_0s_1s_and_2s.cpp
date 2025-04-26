#include <bits/stdc++.h>
using namespace std;

void better(vector<int> &arr){
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    cout << cnt0 << " " << cnt1 << " " << cnt2 << endl;
    for(int i = 0 ; i < cnt0 ; i++){
        arr[i] = 0;
    }
    for(int i = 0 ; i < cnt1 ; i++){
        arr[i + cnt0] = 1;
    }
    for(int i = 0 ; i < cnt2 ; i++){
        arr[i + cnt1 + cnt2] = 2;
    }
}

void optimal(vector<int> &arr){
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        } else if(arr[mid] == 1) mid++;
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    
    vector<int> arr = {2,0,2,1,1,0};
    optimal(arr);
    
    for(auto it : arr) cout << it << " ";
    cout << endl;

    return 0;
}