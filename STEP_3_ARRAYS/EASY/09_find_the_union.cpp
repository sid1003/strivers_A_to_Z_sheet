#include <bits/stdc++.h>
using namespace std;

vector<int> union_of_arrays(vector<int> &arr1, int n1, vector<int> &arr2, int n2){
    set<int> s;
    for(auto it: arr1){
        s.insert(it);
    }
    for(auto it: arr2){
        s.insert(it);
    }
    vector<int> res(s.begin(), s.end());
    return res;
}

vector<int> union_of_arrays_2(vector<int> &arr1, int n1, vector<int> &arr2, int n2){
    vector<int> res;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(arr1.size() == 0 || arr1.back() != arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        } else {
            if(arr2.size() == 0 || arr2.back() != arr2[j]){
                res.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(arr1.size() == 0 || arr1.back() != arr1[i]){
            res.push_back(arr1[i]);
        }
        i++;
    }
    while(j < n2){
        if(arr2.size() == 0 || arr2.back() != arr2[j]){
            res.push_back(arr2[j]);
        }
        j++;
    }
    return res;
}

int main(){

}