#include <bits/stdc++.h>
using namespace std;

// brute force approach
void remove_duplicates_from_sorted_array(vector<int> &arr, int n){
    set<int> s;
    for(auto it : arr){
        s.insert(it);
    }
    int index = 0;
    for(auto it : s){
        arr[index++] = it;
    }
    for(int i = index ; i < n ; i++){
        arr[i] = 0;
    }
}

int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main(){
    
    return 0;
}