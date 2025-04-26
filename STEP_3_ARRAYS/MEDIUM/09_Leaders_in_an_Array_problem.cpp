#include <bits/stdc++.h>
using namespace std;

// brute force solution
vector<int> printLeadersBruteForce(int arr[], int n) {

    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
      bool leader = true;
  
      //Checking whether arr[i] is greater than all 
      //the elements in its right side
      for (int j = i + 1; j < n; j++)
        if (arr[j] > arr[i]) {
            
          // If any element found is greater than current leader
          // curr element is not the leader.
          leader = false;
          break;
        }
  
      // Push all the leaders in ans array.
      if (leader)
      ans.push_back(arr[i]);
  
    }
    
    return ans;
  }

// optimal solution
vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    int maxSoFar = arr[n - 1];
    res.push_back(maxSoFar);
    for(int i = n - 2 ; i >= 0 ; i--){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    
    return 0;
}