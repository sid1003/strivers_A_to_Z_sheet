#include <bits/stdc++.h>
using namespace std;

bool brute(vector<int> &arr, int target){
    for(int i = 0 ; i < arr.size() - 1; i++){
        for(int j = i + 1 ; j < arr.size() ; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

// when we don't have to return the indexes of the elements
bool better(vector<int> &arr, int target){
    unordered_map<int, int> m;
    for(int i = 0 ; i < arr.size() ; i++){
        if(m.find(target - arr[i]) != m.end()){
            return true;
        }
        m[arr[i]] = i;
    }
    return false;
}

vector<int> better_2(vector<int> &arr, int target){
    unordered_map<int, int> m;
    for(int i = 0 ; i < arr.size() ; i++){
        if(m.find(target - arr[i]) != m.end()){
            return {m[target - arr[i]], i};
        }
        m[arr[i]] = i;
    }
    return {-1, -1};
}

vector<int> optimal(vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return {left, right};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return {-1, -1};
}

int main(){

    vector<int> arr = {2, 6, 5, 8, 1};
    int target = 14;

    cout << better(arr, target) << endl;

    return 0;
}