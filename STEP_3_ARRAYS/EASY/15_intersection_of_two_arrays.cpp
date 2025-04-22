#include <bits/stdc++.h>
using namespace std;

vector<int> intersection_of_arrays(vector<int> &arr1, int n1, vector<int> &arr2, int n2){
    set<int> s;
    for(auto it: arr1){
        s.insert(it);
    }
    vector<int> res;
    for(auto it: arr2){
        if(s.find(it) != s.end()){
            res.push_back(it);
            s.erase(it);
        }
    }
    return res;
}

vector<int> intersection_of_arrays_2(vector<int> &arr1, int n1, vector<int> &arr2, int n2){
    int i = 0, j = 0;
    vector<int> res;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            i++;
        } else if(arr1[i] > arr2[j]){
            j++;
        } else {
            if(res.size() == 0 || res.back()!= arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    return res;
}

int main(){
    
    return 0;
}